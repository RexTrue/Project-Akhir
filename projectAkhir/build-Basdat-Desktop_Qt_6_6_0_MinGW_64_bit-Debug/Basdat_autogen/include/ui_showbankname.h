/********************************************************************************
** Form generated from reading UI file 'showbankname.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWBANKNAME_H
#define UI_SHOWBANKNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowBankName
{
public:
    QListView *listView;
    QLabel *label;

    void setupUi(QWidget *ShowBankName)
    {
        if (ShowBankName->objectName().isEmpty())
            ShowBankName->setObjectName("ShowBankName");
        ShowBankName->resize(400, 300);
        listView = new QListView(ShowBankName);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(70, 60, 256, 192));
        label = new QLabel(ShowBankName);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 30, 171, 16));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(ShowBankName);

        QMetaObject::connectSlotsByName(ShowBankName);
    } // setupUi

    void retranslateUi(QWidget *ShowBankName)
    {
        ShowBankName->setWindowTitle(QCoreApplication::translate("ShowBankName", "Form", nullptr));
        label->setText(QCoreApplication::translate("ShowBankName", "List Bank yang ada", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowBankName: public Ui_ShowBankName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWBANKNAME_H
