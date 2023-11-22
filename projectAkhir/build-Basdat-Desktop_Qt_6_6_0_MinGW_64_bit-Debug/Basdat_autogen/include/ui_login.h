/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *title;
    QLabel *brand;
    QFrame *frame;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QWidget *page_2;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(800, 651);
        stackedWidget = new QStackedWidget(login);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-1, 0, 801, 651));
        stackedWidget->setStyleSheet(QString::fromUtf8("background:rgb(78, 131, 181);"));
        page = new QWidget();
        page->setObjectName("page");
        title = new QLabel(page);
        title->setObjectName("title");
        title->setGeometry(QRect(350, 160, 81, 31));
        title->setStyleSheet(QString::fromUtf8("border-bottom : 2px solid #f5f5f5;\n"
"font-size : 24px;\n"
"font-weight: bold;\n"
""));
        brand = new QLabel(page);
        brand->setObjectName("brand");
        brand->setGeometry(QRect(0, 0, 801, 131));
        brand->setStyleSheet(QString::fromUtf8("font-size : 44px;\n"
"font weight : bold;"));
        brand->setAlignment(Qt::AlignCenter);
        frame = new QFrame(page);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(200, 240, 391, 271));
        frame->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 1px solid black;\n"
"border-radius : 10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 71, 16));
        label->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"color: black;\n"
"font-weight : bold;\n"
"border : none;"));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 220, 111, 16));
        label_3->setStyleSheet(QString::fromUtf8("color : black;\n"
"border : none;\n"
""));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 170, 351, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background:rgb(78, 131, 181);\n"
"font-weight : bold ;\n"
"border-radius : 10px;"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(20, 110, 351, 24));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 40, 351, 24));
        lineEdit->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 90, 71, 16));
        label_2->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"color: black;\n"
"font-weight : bold;\n"
"border : none;"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(290, 220, 80, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("background:rgb(78, 131, 181);\n"
"font-weight : bold ;\n"
"border-radius : 10px;"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Form", nullptr));
        title->setText(QCoreApplication::translate("login", "Sign In", nullptr));
        brand->setText(QCoreApplication::translate("login", "WELCOME TO D-IF BANK", nullptr));
        label->setText(QCoreApplication::translate("login", "USERNAME", nullptr));
        label_3->setText(QCoreApplication::translate("login", "Don't have account?", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "LOGIN", nullptr));
        label_2->setText(QCoreApplication::translate("login", "PASSWORD", nullptr));
        pushButton_2->setText(QCoreApplication::translate("login", "register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
