/**---
 * Copyright (c) 2017 The TryCoin Developers
 *
//-----*/



#include "qtitle.h"
#include <QMouseEvent>
#include <QMainWindow>
#include <QDebug>
QTitle::QTitle(QWidget *parent) : QLabel(parent)
{

}



void QTitle::setMainWindow(QMainWindow *window)
{
    this->window = window;
}

void QTitle::mousePressEvent(QMouseEvent *e)
{

    last = mapToParent(e->globalPos());
}

void QTitle::mouseMoveEvent(QMouseEvent *e)
{
    QPoint p = mapToParent(e->globalPos());

    int dx = p.x() - last.x();
    int dy = p.y() - last.y();
    last = p;
    QPoint p1 = mapToParent(pos());
    qDebug()<<p<<dx<<dy<<p1;
    window->move(p1.x()+dx, p1.y()+dy);
}

void QTitle::mouseReleaseEvent(QMouseEvent *e)
{

}

