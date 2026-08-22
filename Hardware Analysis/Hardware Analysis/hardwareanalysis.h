#pragma once

#include <QtWidgets/QWidget>
#include <qprocess.h>
#include "ui_hardwareanalysis.h"
#include "parts.h"
#include "newlist.h"

class HardwareAnalysis : public QWidget
{
    Q_OBJECT

public:
    HardwareAnalysis(QWidget *parent = nullptr);
    ~HardwareAnalysis();

private slots:
    void on_addButton_clicked();
    void on_deleteButton_clicked();
    void on_hardwareList_doubleClicked();

private:
    Ui::HardwareAnalysisClass ui;
};