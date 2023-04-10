#include "PerfectHash.h"

PerfectHash::PerfectHash(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}



PerfectHash::~PerfectHash()
{}

void PerfectHash::Check()
{
	
	QString name = ui.textEdit_2->toPlainText();
	string text = name.toUtf8().constData();
	if (fs.StringContains(text)) {
		ui.label_4->setText("True");
	}
	else {
		ui.label_4->setText("False");
	}
	ui.textEdit_2->setText("\0");
}

void PerfectHash::InsertElement()
{
	
	QString name = ui.textEdit->toPlainText();
	string text = name.toUtf8().constData();
	inputVector.push_back(text);
	fs.StringInitialize(inputVector[inputVector.size() - 1]);
	ui.textEdit->setText("\0");
	qDebug() << "C++ Style Debug Message";
	
}
