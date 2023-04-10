#include "AlgorytmsScladnistLabInterFace.h"

AlgorytmsScladnistLabInterFace::AlgorytmsScladnistLabInterFace(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

AlgorytmsScladnistLabInterFace::~AlgorytmsScladnistLabInterFace()
{}

void AlgorytmsScladnistLabInterFace::ShowOptimalBinaryTreeWindow()
{    
    obt.show();  
}

void AlgorytmsScladnistLabInterFace::ShowBinomialHeapWindow()
{
    bh.show();
}

void AlgorytmsScladnistLabInterFace::ShowPerfectHashWindow()
{
    ph.show();
   // qDebug() << "C++ Style Debug Message";
}
