#include "BinomialHeap.h"

BinomialHeap::BinomialHeap(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

BinomialHeap::~BinomialHeap()
{}

void BinomialHeap::ShowElements()
{
	qDebug() << "Heap elements after insertion:\n";
	BinomialHeapLogic::printHeap(_heap);
}

void BinomialHeap::FindMin()
{
	BinomialHeapLogic* temp = BinomialHeapLogic::getMin(_heap);
	qDebug() << "Minimum element of heap: "
		<< temp->data << " ";
}

void BinomialHeap::DelMin()
{
	_heap = BinomialHeapLogic::extractMin(_heap);
}

void BinomialHeap::AddElement()
{
	QString name = ui.textEdit->toPlainText();
	int key = name.toInt();
	//bh.insertE(_heap, 10);
	_heap = BinomialHeapLogic::insertE(_heap, key);
	ui.textEdit->setText("\0");
}
