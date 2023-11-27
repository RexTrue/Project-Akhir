#ifndef LOGIN_H
#define LOGIN_H

#include "register.h"

#include <QWidget>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_2_clicked();
    void BackHome();

    void on_pushButton_clicked();

private:
    Ui::login *ui;

    Register Regist;
};

#endif // LOGIN_H
