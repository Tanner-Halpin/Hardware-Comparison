/********************************************************************************
** Form generated from reading UI file 'newlymadelist.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWLYMADELIST_H
#define UI_NEWLYMADELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_NewlyMadeListClass
{
public:
    QListWidget *listWidget;
    QLabel *label;

    void setupUi(QDialog *NewlyMadeListClass)
    {
        if (NewlyMadeListClass->objectName().isEmpty())
            NewlyMadeListClass->setObjectName("NewlyMadeListClass");
        NewlyMadeListClass->resize(600, 400);
        listWidget = new QListWidget(NewlyMadeListClass);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(180, 100, 256, 192));
        label = new QLabel(NewlyMadeListClass);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 70, 121, 16));

        retranslateUi(NewlyMadeListClass);

        QMetaObject::connectSlotsByName(NewlyMadeListClass);
    } // setupUi

    void retranslateUi(QDialog *NewlyMadeListClass)
    {
        NewlyMadeListClass->setWindowTitle(QCoreApplication::translate("NewlyMadeListClass", "NewlyMadeList", nullptr));
        label->setText(QCoreApplication::translate("NewlyMadeListClass", "New List Created:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewlyMadeListClass: public Ui_NewlyMadeListClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWLYMADELIST_H
