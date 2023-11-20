/********************************************************************************
** Form generated from reading UI file 'transfer.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFER_H
#define UI_TRANSFER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Transfer
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QWidget *page_2;

    void setupUi(QWidget *Transfer)
    {
        if (Transfer->objectName().isEmpty())
            Transfer->setObjectName("Transfer");
        Transfer->resize(800, 651);
        stackedWidget = new QStackedWidget(Transfer);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 800, 651));
        stackedWidget->setStyleSheet(QString::fromUtf8("background: rgb(78, 131, 181);"));
        page = new QWidget();
        page->setObjectName("page");
        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(60, 350, 671, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border: 2px solid grey;\n"
"background : #f5f5f5;;"));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 220, 731, 21));
        label->setStyleSheet(QString::fromUtf8("font-size: 16px;\n"
"color: white;"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 420, 161, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;\n"
"background: #f5f5f5;\n"
"border: 1px solid grey;\n"
"border-radius : 15px;"));
        lineEdit_3 = new QLineEdit(page);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(60, 140, 671, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border: 2px solid grey;\n"
"background : #f5f5f5;\n"
"font-size: 14px;\n"
""));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 320, 731, 21));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 16px;\n"
"color: white;"));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 250, 671, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("border: 2px solid grey;\n"
"background : #f5f5f5;"));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 110, 731, 21));
        label_3->setStyleSheet(QString::fromUtf8("font-size: 16px;\n"
"color: white;"));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 590, 81, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;\n"
"background: #f5f5f5;\n"
"border: 1px solid grey;\n"
"border-radius: 10px;"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        retranslateUi(Transfer);

        QMetaObject::connectSlotsByName(Transfer);
    } // setupUi

    void retranslateUi(QWidget *Transfer)
    {
        Transfer->setWindowTitle(QCoreApplication::translate("Transfer", "Form", nullptr));
        label->setText(QCoreApplication::translate("Transfer", "No. Rekening", nullptr));
        pushButton->setText(QCoreApplication::translate("Transfer", "Transfer", nullptr));
        label_2->setText(QCoreApplication::translate("Transfer", "Amount", nullptr));
        label_3->setText(QCoreApplication::translate("Transfer", "Bank Tujuan", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Transfer", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Transfer: public Ui_Transfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFER_H
