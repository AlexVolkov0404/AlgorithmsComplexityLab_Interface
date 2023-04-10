#include "OptimalBinaryTree.h"

OptimalBinaryTree::OptimalBinaryTree(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

OptimalBinaryTree::~OptimalBinaryTree()
{
    
}

void OptimalBinaryTree::BuildBinaryTree()
{
    QPicture pi;
    QPainter p(&pi);

    ///vector<int> keys = { 5,7, 1,0,3,4,2 };
    Tree tree;
    Tree::BINTRP r;
    r = tree.zapov(keys);
    tree.print_tree1(r, 0, 400, 0, p);
    p.end();
    QWidget* widget = new QWidget();
    widget->resize(800, 800);
    QLabel* l;
    l = new QLabel(widget);
    l->setPicture(pi);

    l->show();

    widget->show();
}

void OptimalBinaryTree::ClearTree()
{
    keys.clear();
    freq.clear();
    ui.label_3->setText("\0");
}

void OptimalBinaryTree::BuildOptimalBinaryTree()
{
    QPicture pi;
    QPainter p(&pi);
    Tree tree;
    Tree::BINTRP r;

    vector<int> sortedKeys = Ot.optimalSearchTree(keys, freq);
    int opCost = Ot.OptimalCost(keys, freq);
    QString cost= QString::number(opCost);
    ui.label_3->setText(cost);
    r = tree.zapov(sortedKeys);
    tree.print_tree1(r, 0, 400, 0, p);
    p.end();
    QWidget* widget = new QWidget();
    widget->resize(800, 800);
    QLabel* l;
    l = new QLabel(widget);
    l->setPicture(pi);

    l->show();

    widget->show();
}

void OptimalBinaryTree::AddNode()
{
	QString name = ui.textEdit->toPlainText();
	int key = name.toInt();
	keys.push_back(key);

    name = ui.textEdit_2->toPlainText();
	int prob = name.toInt();
	freq.push_back(prob);

	ui.textEdit->setText("\0");
	ui.textEdit_2->setText("\0");

}
