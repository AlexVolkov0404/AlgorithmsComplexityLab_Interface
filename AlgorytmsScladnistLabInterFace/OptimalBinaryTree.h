#pragma once
//#define WIN32_LEAN_AND_MEAN
//#define _HAS_STD_BYTE 0

#include <QMainWindow>
#include "ui_OptimalBinaryTree.h"
#include "BST.h"


#include "OptimalBinaryTreeLogic.h"
class OptimalBinaryTree : public QMainWindow
{
	Q_OBJECT

public:
	OptimalBinaryTree(QWidget *parent = nullptr);
	~OptimalBinaryTree();
	vector<int> keys;
	vector<int> freq;
	OptimalBinaryTreeLogic Ot;
public slots:
	void AddNode();
	void BuildBinaryTree();
	void ClearTree();
	void BuildOptimalBinaryTree();
private:
	Ui::OptimalBinaryTreeClass ui;
    
};
