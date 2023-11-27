#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

#include <QStackedWidget>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    ui->stackedWidget->addWidget(&Regist);

    connect(&Regist, SIGNAL(BackToLogin()), this, SLOT(BackHome()));
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(&Regist);
}

void login::BackHome()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void login::on_pushButton_clicked()
{
    QString UsernameInput = ui->lineEdit->text();
    QString PasswordInput = ui->lineEdit_2->text();

    QSqlQuery query;
    query.exec("SELECT user_name, password FROM user");

    bool login_berhasil = false;
    while(query.next()){
        qInfo() << query.value(0).toString() << ' ' << query.value(1).toString();
        if(query.value(0).toString() == UsernameInput && query.value(1).toString() == PasswordInput){
            login_berhasil = true;
        }
    }

    if(login_berhasil){
        MainWindow *mainWindow = new MainWindow();
        mainWindow->show();
        close();
    }
    else{
        QMessageBox::warning(this, "", "Akun tidak ditemukan, silakan melakukan pendaftaran terlebih dahulu");
    }
}

