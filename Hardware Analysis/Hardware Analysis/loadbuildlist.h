#pragma once

#include <QDialog>
#include "ui_loadbuildlist.h"
#include "parts.h"
#include "build.h"
#include "newlymadelist.h"
#include "hardwareanalysis.h"
#include <sstream>

class loadbuildlist : public QDialog, public Ui::loadbuildlistClass
{
	Q_OBJECT

public:
	loadbuildlist(QWidget *parent = nullptr);
	~loadbuildlist();
	void set_names(PC p);
	std::vector<QLineEdit*> name_labels;
	std::vector<QLabel*> attribute_labels;
	std::vector<Component*> data_labels;
	std::vector<std::vector<Attributes>> attribute_data;

private slots:
	void on_saveChanges_clicked();

private:
	Ui::loadbuildlistClass ui;
};

