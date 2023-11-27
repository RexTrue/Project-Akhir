/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Report
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QWidget *page_2;

    void setupUi(QWidget *Report)
    {
        if (Report->objectName().isEmpty())
            Report->setObjectName("Report");
        Report->resize(800, 650);
        stackedWidget = new QStackedWidget(Report);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 800, 650));
        stackedWidget->setStyleSheet(QString::fromUtf8("background : rgb(78, 131, 181);"));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 40, 151, 31));
        label->setStyleSheet(QString::fromUtf8("color: white;\n"
"font-size: 24px;\n"
"text-align :center;\n"
"justify-content: center;\n"
"font-weight: bold;"));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 470, 461, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;\n"
"background: #f5f5f5;\n"
"border: 1px solid grey;\n"
"border-radius: 20px;"));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 590, 81, 31));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;\n"
"background: #f5f5f5;\n"
"border: 1px solid grey;\n"
"border-radius: 10px;"));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 220, 71, 31));
        label_2->setStyleSheet(QString::fromUtf8("font-size : 16px;\n"
"color : white;\n"
""));
        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(160, 250, 461, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 290, 91, 31));
        label_3->setStyleSheet(QString::fromUtf8("font-size : 16px;\n"
"color : white;"));
        lineEdit_2 = new QLineEdit(page);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(160, 320, 461, 121));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 140, 71, 31));
        label_4->setStyleSheet(QString::fromUtf8("font-size: 16px;\n"
"color : white;"));
        lineEdit_3 = new QLineEdit(page);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(160, 170, 461, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background : #f5f5f5;\n"
"border : 2px solid grey;\n"
"border-radius : 10px;\n"
"font-size : 14px;"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        retranslateUi(Report);

        QMetaObject::connectSlotsByName(Report);
    } // setupUi

    void retranslateUi(QWidget *Report)
    {
        Report->setWindowTitle(QCoreApplication::translate("Report", "Form", nullptr));
        label->setText(QCoreApplication::translate("Report", "REPORT", nullptr));
        pushButton->setText(QCoreApplication::translate("Report", "REPORT", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Report", "Home", nullptr));
        label_2->setText(QCoreApplication::translate("Report", "Title", nullptr));
        label_3->setText(QCoreApplication::translate("Report", "Description", nullptr));
        label_4->setText(QCoreApplication::translate("Report", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Report: public Ui_Report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
