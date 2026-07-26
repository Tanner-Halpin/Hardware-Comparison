#pragma once

#include <QDialog>
#include "ui_loadbuildlist.h"
#include "parts.h"
#include "build.h"
#include "newlymadelist.h"
#include <sstream>

class loadbuildlist : public QDialog, public Ui::loadbuildlistClass
{
	Q_OBJECT

public:
	loadbuildlist(QWidget *parent = nullptr);
	~loadbuildlist();
	void set_names(PC p);

private:
	Ui::loadbuildlistClass ui;
};

