/********************************************************************************
** Form generated from reading UI file 'history.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_H
#define UI_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_History
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *page_2;

    void setupUi(QWidget *History)
    {
        if (History->objectName().isEmpty())
            History->setObjectName("History");
        History->resize(800, 650);
        stackedWidget = new QStackedWidget(History);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 800, 650));
        stackedWidget->setStyleSheet(QString::fromUtf8("background: rgb(78, 131, 181);"));
        page = new QWidget();
        page->setObjectName("page");
        tableView = new QTableView(page);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(50, 60, 691, 561));
        tableView->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-radius: 20px;\n"
"background: #f5f5f5;"));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 20, 121, 31));
        label->setStyleSheet(QString::fromUtf8("font-size: 28px;\n"
"font-weight: bold;"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 580, 81, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background:rgb(78, 131, 181);\n"
"font-weight : bold ;\n"
"border-radius : 10px;"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        retranslateUi(History);

        QMetaObject::connectSlotsByName(History);
    } // setupUi

    void retranslateUi(QWidget *History)
    {
        History->setWindowTitle(QCoreApplication::translate("History", "Form", nullptr));
        label->setText(QCoreApplication::translate("History", "HISTORY", nullptr));
        pushButton->setText(QCoreApplication::translate("History", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class History: public Ui_History {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H
