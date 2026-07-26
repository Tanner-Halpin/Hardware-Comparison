/********************************************************************************
** Form generated from reading UI file 'hardwareanalysis.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HARDWAREANALYSIS_H
#define UI_HARDWAREANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HardwareAnalysisClass
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *computerLists;
    QListWidget *addressName;
    QListWidget *hardwareList;
    QPushButton *addButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *HardwareAnalysisClass)
    {
        if (HardwareAnalysisClass->objectName().isEmpty())
            HardwareAnalysisClass->setObjectName("HardwareAnalysisClass");
        HardwareAnalysisClass->resize(638, 391);
        widget = new QWidget(HardwareAnalysisClass);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(61, 71, 520, 276));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        computerLists = new QLabel(widget);
        computerLists->setObjectName("computerLists");

        gridLayout->addWidget(computerLists, 0, 1, 1, 1);

        addressName = new QListWidget(widget);
        addressName->setObjectName("addressName");

        gridLayout->addWidget(addressName, 1, 0, 1, 1);

        hardwareList = new QListWidget(widget);
        hardwareList->setObjectName("hardwareList");
        hardwareList->setAutoFillBackground(true);

        gridLayout->addWidget(hardwareList, 1, 1, 1, 1);

        addButton = new QPushButton(widget);
        addButton->setObjectName("addButton");

        gridLayout->addWidget(addButton, 2, 1, 1, 1);

        deleteButton = new QPushButton(widget);
        deleteButton->setObjectName("deleteButton");

        gridLayout->addWidget(deleteButton, 3, 1, 1, 1);


        retranslateUi(HardwareAnalysisClass);

        QMetaObject::connectSlotsByName(HardwareAnalysisClass);
    } // setupUi

    void retranslateUi(QWidget *HardwareAnalysisClass)
    {
        HardwareAnalysisClass->setWindowTitle(QCoreApplication::translate("HardwareAnalysisClass", "HardwareAnalysis", nullptr));
        label->setText(QCoreApplication::translate("HardwareAnalysisClass", "Detected Components From Your Machine", nullptr));
        computerLists->setText(QCoreApplication::translate("HardwareAnalysisClass", "Custom Hardware Lists", nullptr));
        addButton->setText(QCoreApplication::translate("HardwareAnalysisClass", "Create New List", nullptr));
        deleteButton->setText(QCoreApplication::translate("HardwareAnalysisClass", "Delete Selected List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HardwareAnalysisClass: public Ui_HardwareAnalysisClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HARDWAREANALYSIS_H
