/********************************************************************************
** Form generated from reading UI file 'loadbuildlist.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADBUILDLIST_H
#define UI_LOADBUILDLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loadbuildlistClass
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *cpuLabel;
    QWidget *tab_2;
    QLabel *gpuLabel;
    QWidget *tab_3;
    QLabel *storageLabel;
    QWidget *tab_5;
    QLabel *ramLabel;
    QWidget *tab_4;
    QLabel *moboLabel;
    QWidget *tab_6;
    QLabel *psuLabel;

    void setupUi(QDialog *loadbuildlistClass)
    {
        if (loadbuildlistClass->objectName().isEmpty())
            loadbuildlistClass->setObjectName("loadbuildlistClass");
        loadbuildlistClass->resize(600, 279);
        tabWidget = new QTabWidget(loadbuildlistClass);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(60, 30, 501, 221));
        tab = new QWidget();
        tab->setObjectName("tab");
        cpuLabel = new QLabel(tab);
        cpuLabel->setObjectName("cpuLabel");
        cpuLabel->setGeometry(QRect(20, 20, 461, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gpuLabel = new QLabel(tab_2);
        gpuLabel->setObjectName("gpuLabel");
        gpuLabel->setGeometry(QRect(20, 20, 461, 31));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        storageLabel = new QLabel(tab_3);
        storageLabel->setObjectName("storageLabel");
        storageLabel->setGeometry(QRect(20, 20, 461, 31));
        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        ramLabel = new QLabel(tab_5);
        ramLabel->setObjectName("ramLabel");
        ramLabel->setGeometry(QRect(20, 20, 461, 31));
        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        moboLabel = new QLabel(tab_4);
        moboLabel->setObjectName("moboLabel");
        moboLabel->setGeometry(QRect(20, 20, 461, 31));
        tabWidget->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        psuLabel = new QLabel(tab_6);
        psuLabel->setObjectName("psuLabel");
        psuLabel->setGeometry(QRect(20, 20, 461, 31));
        tabWidget->addTab(tab_6, QString());

        retranslateUi(loadbuildlistClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(loadbuildlistClass);
    } // setupUi

    void retranslateUi(QDialog *loadbuildlistClass)
    {
        loadbuildlistClass->setWindowTitle(QCoreApplication::translate("loadbuildlistClass", "loadbuildlist", nullptr));
        cpuLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("loadbuildlistClass", "Processor", nullptr));
        gpuLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("loadbuildlistClass", "Graphics", nullptr));
        storageLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("loadbuildlistClass", "Storage", nullptr));
        ramLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("loadbuildlistClass", "RAM", nullptr));
        moboLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("loadbuildlistClass", "Motherboard", nullptr));
        psuLabel->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("loadbuildlistClass", "PSU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loadbuildlistClass: public Ui_loadbuildlistClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADBUILDLIST_H
