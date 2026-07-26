#pragma once

#include <QDialog>
#include "ui_newlymadelist.h"
#include "build.h"
#include "newlist.h"

inline Build b;
inline extern bool status = false; // If the user exits the New List window without pressing the "Create" button, nothing will be added to the Build Roster

class NewlyMadeList : public QDialog, public Ui::NewlyMadeListClass
{
	Q_OBJECT

public:
	NewlyMadeList(QWidget *parent = nullptr);
	~NewlyMadeList();

private:
	Ui::NewlyMadeListClass ui;
};