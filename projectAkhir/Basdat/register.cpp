#include "register.h"
#include "ui_register.h"

#include <QDate>
#include <QTimer>
#include <QLabel>
#include <QMessageBox>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_clicked()
{
    /*
     * Nama = Character, space
     * NIK = Length must be 16, all number
     * Username = Character, number, number, _(underline)
     * Alamat = Character, ,(comma), space
     * Nomor HP = 10 <= length <= 13, number
     * tanggal lahir = Date distance >= 18
     * password = free
     */
    QString Nama = ui->lineEdit->text();
    QString NIK = ui->lineEdit_2->text();
    QString UserName = ui->lineEdit_3->text();
    QString Alamat = ui->lineEdit_4->text();
    QString NmrHP = ui->lineEdit_5->text();
    QDate TglLahir = ui->dateEdit->date();
    QString Password = ui->lineEdit_7->text();

    if(Nama.isEmpty() || NIK.isEmpty() || UserName.isEmpty() || Alamat.isEmpty() || NmrHP.isEmpty() || Password.isEmpty()){
        QMessageBox::warning(this, "", "Data masih ada yang kosong");
    }
    else{
        int resNIK = NIKCheck(NIK);
        int resUsername = UsernameCheck(UserName);
        if(!NamaCheck(Nama)){
           QMessageBox::warning(this, "", "Nama hanya boleh karakter (A-Z, a-z) dan spasi");
        }
        else if(resNIK == 0){
           QMessageBox::warning(this, "", "NIK berisi 16 angka");
        }
        else if(resNIK == 1){
           QMessageBox::warning(this, "", "Maaf NIK sudah terdaftar");
        }
        else if(resUsername == 0){
           QMessageBox::warning(this, "", "Username hanya boleh karakter (A-Z, a-z), angka, garis bawah (_)");
        }
        else if(resUsername == 1){
           QMessageBox::warning(this, "", "Maaf Username sudah terdaftar");
        }
        else if(!NmrHPCheck(NmrHP)){
           QMessageBox::warning(this, "", "Nomor HP berisi angka dan panjang 10 sampai 13");
        }
        else if(!tglLahirCheck(TglLahir)){
           QMessageBox::warning(this, "", "Maaf umur anda belum mencukupi");
        }
        else{
           QMessageBox::information(this, "", "Pendaftaran Berhasil");
           QSqlQuery query;
           query.prepare("INSERT INTO user VALUES (?,?,?,?,?,?,?)");
           query.addBindValue(Nama);
           query.addBindValue(NIK);
           query.addBindValue(UserName);
           query.addBindValue(Alamat);
           query.addBindValue(NmrHP);
           query.addBindValue(TglLahir);
           query.addBindValue(Password);
           if(!query.exec()){
               qFatal() << "Gagal Memasukkan Query [Register]" << query.lastError();
           }
           ui->lineEdit->setText("");
           ui->lineEdit_2->setText("");
           ui->lineEdit_3->setText("");
           ui->lineEdit_4->setText("");
           ui->lineEdit_5->setText("");
           ui->lineEdit_7->setText("");
           emit BackToLogin();
        }
    }
}

int Register::NamaCheck(QString &inp)
{
    // Nama = Character, space
    for(auto &it : inp){
        if(!it.isLetter() && it != ' '){
            return 0;
        }
    }
    return 1;
}

int Register::NIKCheck(QString &inp)
{
    // NIK = Length must be 16, all number
    if(inp.length() != 16){
        return 0;
    }
    for(auto &it : inp){
        if(!it.isDigit()){
            return 0;
        }
    }

    QSqlQuery query;
    query.prepare("SELECT NIK FROM user WHERE NIK = ?");
    query.addBindValue(inp);
    query.exec();

    while(query.next()){
        if(query.value(0).toString() == inp){
            return 1;
        }
    }
    return 2;
}

int Register::UsernameCheck(QString &inp)
{
    // Username = Character, number, _(underline)
    for(auto &it : inp){
        if(!it.isLetterOrNumber() && it != '_'){
            return 0;
        }
    }

    QSqlQuery query;
    query.prepare("SELECT username FROM user WHERE username = ?");
    query.addBindValue(inp);
    query.exec();

    while(query.next()){
        if(query.value(0).toString() == inp){
            return 1;
        }
    }

    return 2;
}

int Register::AlamatCheck(QString &inp)
{
    // Alamat = Character, number, ,(comma), space
    for(auto &it : inp){
        if(!it.isLetterOrNumber() && it != ',' && it != ' '){
            return 0;
        }
    }
    return 1;
}

int Register::NmrHPCheck(QString &inp)
{
    // Nomor HP = 10 <= length <= 13, number
    if(inp.length() < 10 || inp.length() > 13){
        return 0;
    }
    for(auto &it : inp){
        if(!it.isDigit()){
            return 0;
        }
    }
    return 1;
}

int Register::tglLahirCheck(QDate &inp)
{
    // tanggal lahir = Date distance >= 18
    qint64 DaysDifference = inp.daysTo(QDate::currentDate());
    if(DaysDifference/360 < 18) return 0;
    return 1;
}
