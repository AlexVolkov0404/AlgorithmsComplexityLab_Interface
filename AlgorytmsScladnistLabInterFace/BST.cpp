#include "BST.h"


inline Tree::BINTRP Tree::nwnode(int v, BINTRP pl, BINTRP pr)
{
    BINTRP p = new BINTRN;
    p->dat = v; p->lt = pl; p->rt = pr;
    return p;
}

Tree::BINTRP Tree::zapov(vector<int> keys)
{
    BINTRP tree, parent, node, tr;
    int m;
    char nx[256];
    char nt[256];
    ifstream file1, file2;
    file1.open("text1.txt");
    file2.open("text2.txt");
    file1 >> nx;
    //m = number(nx);

    int o = 0;

    tr = nwnode(keys[0], NULL, NULL);
    int h = 1;
    while (h < keys.size()) {


        file1 >> nx;
        m = keys[h];

        tree = tr;
        for (parent = tree; tree != NULL; ) {
            parent = tree;
            if (m < tree->dat)
                tree = tree->lt;
            else if (m > tree->dat)
                tree = tree->rt;
            else
                return 0;
        }
        node = nwnode(m, NULL, NULL);
        if (m < parent->dat)
            parent->lt = node;
        else
            parent->rt = node;
        h++;
    }
   
    
    return tr;
}

void Tree::print_tree1(BINTRP r, int x1, int x2, int y0, QPainter& painter)
{
    int x0, wrkx1, wrkx2, wrky;
    QString buf;
    int dy;
    dy = 50;
    if (!r) return;

    x0 = (x1 + x2) / 2;
    wrky = y0 + dy;

    if (r->lt != NULL) {
        wrkx1 = x1;
        wrkx2 = x0;
        painter.drawLine(x0, y0, (wrkx1 + wrkx2) / 2, wrky);
        print_tree1( r->lt, wrkx1, wrkx2, wrky,painter);
    }
    if (r->rt != NULL) {
        wrkx1 = x0;
        wrkx2 = x2;
        painter.drawLine(x0, y0, (wrkx1 + wrkx2) / 2, wrky);
        print_tree1( r->rt, wrkx1, wrkx2, wrky,painter);
    }
    //narisovat' uzel
    painter.setPen(QPen(QColor(Qt::red)));
    painter.drawEllipse(QPoint(x0, y0), 10, 10);

    buf = QString::number(r->dat);
    QFont font("Arial", 10, QFont::Bold);
    painter.setFont(font);
    painter.drawText(QRect(x0 - 10, y0 - 10, 20, 20), Qt::AlignCenter, buf);
    //painter.end();
}
