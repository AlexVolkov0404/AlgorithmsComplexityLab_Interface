#pragma once

#include <QMainWindow>
#include "ui_PerfectHash.h"
#include "PerfectHashLogic.h"
using namespace std;
class PerfectHash : public QMainWindow
{
	Q_OBJECT
		
public:
	PerfectHash(QWidget *parent = nullptr);	
	~PerfectHash();
	vector<string> inputVector;
	PerfectHashLogic fs;
	
public slots:
	void Check();
	void InsertElement();
	
private:
	Ui::PerfectHashClass ui;
};
