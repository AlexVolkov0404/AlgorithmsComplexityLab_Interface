#pragma once

#include <QMainWindow>
#include "ui_BinomialHeap.h"
#include "BinomialHeapLogic.h"
class BinomialHeap : public QMainWindow
{
	Q_OBJECT

public:
	BinomialHeap(QWidget *parent = nullptr);
	~BinomialHeap();
	list<BinomialHeapLogic*> _heap;
	//BinomialHeapLogic bh;
public slots:
	void AddElement();
	void ShowElements();
	void FindMin();
	void DelMin();
private:
	Ui::BinomialHeapClass ui;
};
