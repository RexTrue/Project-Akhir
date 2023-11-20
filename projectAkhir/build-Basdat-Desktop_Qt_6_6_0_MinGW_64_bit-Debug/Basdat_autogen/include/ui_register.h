/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *frame;
    QLineEdit *lineEdit_5;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_8;
    QLabel *label_4;
    QWidget *page_2;

    void setupUi(QWidget *register)
    {
        if (register->objectName().isEmpty())
            register->setObjectName("register");
        register->resize(800, 651);
        stackedWidget = new QStackedWidget(register);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 800, 651));
        stackedWidget->setStyleSheet(QString::fromUtf8("background:rgb(78, 131, 181);"));
        page = new QWidget();
        page->setObjectName("page");
        frame = new QFrame(page);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(180, 140, 471, 441));
        frame->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 1px solid black;\n"
"border-radius : 10px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit_5 = new QLineEdit(page);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(200, 380, 431, 24));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 160, 49, 16));
        label_2->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"color: black;\n"
"font-weight : bold;"));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 60, 101, 31));
        label->setStyleSheet(QString::fromUtf8("font-size : 24px;\n"
"font-weight : bold;\n"
"border-bottom : 2px solid white;"));
        label->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(page);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(200, 410, 81, 16));
        label_7->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"color: black;\n"
"font-weight : bold;"));
        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(200, 230, 431, 24));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        lineEdit_6 = new QLineEdit(page);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(200, 430, 431, 24));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(200, 360, 61, 16));
        label_6->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"color: black;\n"
"font-weight : bold;"));
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(200, 310, 49, 16));
        label_5->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"color: black;\n"
"font-weight : bold;"));
        lineEdit_3 = new QLineEdit(page);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(200, 280, 431, 24));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        lineEdit_7 = new QLineEdit(page);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(200, 480, 431, 24));
        lineEdit_7->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        lineEdit_4 = new QLineEdit(page);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(200, 330, 431, 24));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 210, 49, 16));
        label_3->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"color: black;\n"
"font-weight : bold;"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 530, 431, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background:rgb(78, 131, 181);\n"
"font-weight : bold ;\n"
"border-radius : 10px;"));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(200, 180, 431, 24));
        lineEdit->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        label_8 = new QLabel(page);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(200, 455, 61, 21));
        label_8->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"color: black;\n"
"font-weight : bold;"));
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 260, 61, 16));
        label_4->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"color: black;\n"
"font-weight : bold;"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        retranslateUi(register);

        QMetaObject::connectSlotsByName(register);
    } // setupUi

    void retranslateUi(QWidget *register)
    {
        register->setWindowTitle(QCoreApplication::translate("register", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("register", "Nama", nullptr));
        label->setText(QCoreApplication::translate("register", "Sign Up", nullptr));
        label_7->setText(QCoreApplication::translate("register", "Tanggal Lahir", nullptr));
        label_6->setText(QCoreApplication::translate("register", "Nomor HP", nullptr));
        label_5->setText(QCoreApplication::translate("register", "Alamat", nullptr));
        label_3->setText(QCoreApplication::translate("register", "NIK", nullptr));
        pushButton->setText(QCoreApplication::translate("register", "Register", nullptr));
        label_8->setText(QCoreApplication::translate("register", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("register", "Username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register: public Ui_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
