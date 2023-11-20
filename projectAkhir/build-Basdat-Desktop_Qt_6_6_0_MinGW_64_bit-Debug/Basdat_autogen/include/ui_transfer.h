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
#include <QtWidgets/QFrame>
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
    QFrame *frame;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
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
        frame = new QFrame(page);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(60, 70, 681, 531));
        frame->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 1px solid black;\n"
"border-radius : 25px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(60, 260, 561, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 360, 561, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background:rgb(78, 131, 181);\n"
"font-size : 17px;\n"
"font-weight : bold ;\n"
"border-radius : 20px;"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 470, 81, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background:rgb(78, 131, 181);\n"
"font-weight : bold ;\n"
"border-radius : 10px;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 250, 61, 21));
        label_2->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"color: black;\n"
"font-size : 14px;\n"
"font-weight : bold;\n"
"border : none;"));
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 190, 561, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(60, 120, 561, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(68, 180, 91, 21));
        label->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"color: black;\n"
"font-size : 14px;\n"
"font-weight : bold;\n"
"border : none;"));
        label->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(72, 110, 91, 21));
        label_3->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"color: black;\n"
"font-size : 14px;\n"
"font-weight : bold;\n"
"border : none;"));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 40, 161, 31));
        label_4->setStyleSheet(QString::fromUtf8("font-size: 28px;\n"
"font-weight: bold;\n"
"color:black;\n"
"alignment:align-center;\n"
"border : none;\n"
""));
        label_4->setAlignment(Qt::AlignCenter);
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
        pushButton->setText(QCoreApplication::translate("Transfer", "TRANSFER", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Transfer", "Home", nullptr));
        label_2->setText(QCoreApplication::translate("Transfer", "Amount", nullptr));
        label->setText(QCoreApplication::translate("Transfer", "No. Rekening", nullptr));
        label_3->setText(QCoreApplication::translate("Transfer", "Bank Tujuan", nullptr));
        label_4->setText(QCoreApplication::translate("Transfer", "TRANSFER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Transfer: public Ui_Transfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFER_H
