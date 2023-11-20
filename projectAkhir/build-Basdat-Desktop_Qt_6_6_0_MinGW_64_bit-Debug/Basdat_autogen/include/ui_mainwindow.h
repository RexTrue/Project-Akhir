/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *widget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QLabel *label;
    QWidget *page_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 658);
        MainWindow->setMaximumSize(QSize(800, 800));
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        widget = new QWidget(MainWindow);
        widget->setObjectName("widget");
        widget->setEnabled(true);
        widget->setAutoFillBackground(false);
        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 800, 661));
        stackedWidget->setStyleSheet(QString::fromUtf8("background:rgb(78, 131, 181);"));
        page = new QWidget();
        page->setObjectName("page");
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(120, 260, 521, 51));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;\n"
"background: #f5f5f5;\n"
"border: 1px solid grey;\n"
"border-radius: 25px;"));
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 340, 521, 51));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;\n"
"background: #f5f5f5;\n"
"border: 1px solid grey;\n"
"border-radius: 25px;\n"
""));
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 180, 521, 51));
        pushButton->setMaximumSize(QSize(800, 800));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setMouseTracking(false);
        pushButton->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;\n"
"background: #f5f5f5;\n"
"border: 1px solid grey;\n"
"border-radius: 25px;"));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(120, 420, 521, 51));
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: black;\n"
"background: #f5f5f5;\n"
"border: 1px solid grey;\n"
"border-radius: 25px;"));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 100, 121, 31));
        label->setStyleSheet(QString::fromUtf8("font-size: 28px;\n"
"font-weight: bold;\n"
"color:white;\n"
"alignment:align-center;\n"
""));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(widget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "HISTORY", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "REPORT BUG", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "TRANSFER", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "CLOSE APLICATION", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "DIFBANK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
