#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <QPainter>
#include <QFont>
#include <QFontMetrics>
#include <QRectF>
#include <QString>

using namespace std;

class Tree {
public:
    typedef struct BTN {
        int dat;

        BTN* lt, * rt;
    } BINTRN, * BINTRP;


    
    BINTRP nwnode(int v, BINTRP pl, BINTRP pr);
    BINTRP zapov(vector<int> keys);
   

    void print_tree1(BINTRP r, int x1, int x2, int y0, QPainter& painter);


   

    
};


