#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include <QDate>
#include <QSqlQueryModel>
#include <QLabel>

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_pushButton_clicked();
    int NamaCheck(QString &inp);
    int NIKCheck(QString &inp);
    int UsernameCheck(QString &inp);
    int AlamatCheck(QString &inp);
    int NmrHPCheck(QString &inp);
    int tglLahirCheck(QDate &inp);

signals:
    void BackToLogin();

private:
    Ui::Register *ui;
    QLabel *ShowLoginResult;
};

#endif // REGISTER_H
