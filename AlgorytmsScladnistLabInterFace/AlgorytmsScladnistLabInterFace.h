#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AlgorytmsScladnistLabInterFace.h"
#include "PerfectHash.h"
#include "OptimalBinaryTree.h"
#include "BinomialHeap.h"
//#include "BinaryTree.h"
class AlgorytmsScladnistLabInterFace : public QMainWindow
{
    Q_OBJECT

public:
    AlgorytmsScladnistLabInterFace(QWidget *parent = nullptr);
    ~AlgorytmsScladnistLabInterFace();
    
    PerfectHash ph;
    OptimalBinaryTree obt;
    BinomialHeap bh;
  
    public slots:
    void ShowPerfectHashWindow();
    void ShowOptimalBinaryTreeWindow();
    void ShowBinomialHeapWindow();
   
private:
    Ui::AlgorytmsScladnistLabInterFaceClass ui;

};
