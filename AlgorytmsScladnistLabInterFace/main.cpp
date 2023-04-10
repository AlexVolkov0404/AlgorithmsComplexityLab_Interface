#include "AlgorytmsScladnistLabInterFace.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AlgorytmsScladnistLabInterFace w;
    /*QPicture pi;
    QPainter p(&pi);
    
    vector<int> keys = { 5,7, 1,0,3,4,2 };
    Tree tree;
    Tree::BINTRP r;
    r = tree.zapov(keys);
    tree.print_tree1(r, -400, 400, 0, p);
    p.end();
    QLabel l;
    l.setPicture(pi);
    l.show();*/
    w.show();
    
    return a.exec();
}
