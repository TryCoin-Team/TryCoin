/**---
 * Copyright (c) 2017 The TryCoin Developers
 *
//----*/


#ifndef QTITLE_H
#define QTITLE_H

#include <QLabel>
#include <QWidget>
class QMouseEvent;
class QMainWindow;
class QTitle : public QLabel
{
    Q_OBJECT
public:
    explicit QTitle(QWidget  *parent = 0);
    void setMainWindow(QMainWindow *window);
protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
signals:

public slots:
private:
    QMainWindow *window;
    QPoint last;
    bool   bMove;
};

#endif // QTITLE_H
