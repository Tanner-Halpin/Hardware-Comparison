/********************************************************************************
** Form generated from reading UI file 'newlist.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWLIST_H
#define UI_NEWLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewListClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *memoryInput;
    QLabel *psuLabel;
    QLabel *gpuLabel;
    QLabel *motherboardLabel;
    QLineEdit *gpuInput;
    QLineEdit *storageInput;
    QLineEdit *motherboardInput;
    QLabel *memoryLabel;
    QLineEdit *psuInput;
    QLabel *cpuLabel;
    QLabel *storageLabel;
    QLineEdit *cpuInput;
    QPushButton *okButton;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *NewListClass)
    {
        if (NewListClass->objectName().isEmpty())
            NewListClass->setObjectName("NewListClass");
        NewListClass->resize(600, 400);
        layoutWidget = new QWidget(NewListClass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(150, 90, 241, 241));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        memoryInput = new QLineEdit(layoutWidget);
        memoryInput->setObjectName("memoryInput");

        gridLayout->addWidget(memoryInput, 4, 1, 1, 1);

        psuLabel = new QLabel(layoutWidget);
        psuLabel->setObjectName("psuLabel");

        gridLayout->addWidget(psuLabel, 6, 0, 1, 1);

        gpuLabel = new QLabel(layoutWidget);
        gpuLabel->setObjectName("gpuLabel");

        gridLayout->addWidget(gpuLabel, 1, 0, 1, 1);

        motherboardLabel = new QLabel(layoutWidget);
        motherboardLabel->setObjectName("motherboardLabel");

        gridLayout->addWidget(motherboardLabel, 5, 0, 1, 1);

        gpuInput = new QLineEdit(layoutWidget);
        gpuInput->setObjectName("gpuInput");

        gridLayout->addWidget(gpuInput, 1, 1, 1, 1);

        storageInput = new QLineEdit(layoutWidget);
        storageInput->setObjectName("storageInput");

        gridLayout->addWidget(storageInput, 3, 1, 1, 1);

        motherboardInput = new QLineEdit(layoutWidget);
        motherboardInput->setObjectName("motherboardInput");

        gridLayout->addWidget(motherboardInput, 5, 1, 1, 1);

        memoryLabel = new QLabel(layoutWidget);
        memoryLabel->setObjectName("memoryLabel");

        gridLayout->addWidget(memoryLabel, 4, 0, 1, 1);

        psuInput = new QLineEdit(layoutWidget);
        psuInput->setObjectName("psuInput");

        gridLayout->addWidget(psuInput, 6, 1, 1, 1);

        cpuLabel = new QLabel(layoutWidget);
        cpuLabel->setObjectName("cpuLabel");

        gridLayout->addWidget(cpuLabel, 0, 0, 1, 1);

        storageLabel = new QLabel(layoutWidget);
        storageLabel->setObjectName("storageLabel");

        gridLayout->addWidget(storageLabel, 3, 0, 1, 1);

        cpuInput = new QLineEdit(layoutWidget);
        cpuInput->setObjectName("cpuInput");

        gridLayout->addWidget(cpuInput, 0, 1, 1, 1);

        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName("okButton");

        gridLayout->addWidget(okButton, 7, 1, 1, 1);

        label = new QLabel(NewListClass);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 50, 171, 20));
        lineEdit = new QLineEdit(NewListClass);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(340, 50, 113, 24));

        retranslateUi(NewListClass);
        QObject::connect(okButton, &QPushButton::clicked, NewListClass, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(NewListClass);
    } // setupUi

    void retranslateUi(QDialog *NewListClass)
    {
        NewListClass->setWindowTitle(QCoreApplication::translate("NewListClass", "New Part List", nullptr));
        psuLabel->setText(QCoreApplication::translate("NewListClass", "Power Supply:", nullptr));
        gpuLabel->setText(QCoreApplication::translate("NewListClass", "GPU:", nullptr));
        motherboardLabel->setText(QCoreApplication::translate("NewListClass", "Motherboard", nullptr));
        memoryLabel->setText(QCoreApplication::translate("NewListClass", "Memory/RAM:", nullptr));
        cpuLabel->setText(QCoreApplication::translate("NewListClass", "CPU:", nullptr));
        storageLabel->setText(QCoreApplication::translate("NewListClass", "Storage Device(s):", nullptr));
        okButton->setText(QCoreApplication::translate("NewListClass", "Create List", nullptr));
        label->setText(QCoreApplication::translate("NewListClass", " New Computer Hardware List", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("NewListClass", "Enter List Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewListClass: public Ui_NewListClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWLIST_H
