#include "movableblock.h"
#include <QDebug>

MovableBlock::MovableBlock(QWidget *parent) : QWidget(parent) {
    setFixedSize(100, 100);
    setStyleSheet("background-color: blue; border-radius: 5px;");
}

void MovableBlock::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        m_dragStart = event->pos();
    }
}

void MovableBlock::mouseMoveEvent(QMouseEvent *event) {
    if (event->buttons() & Qt::LeftButton) {
        QPoint diff = event->pos() - m_dragStart;
        QPoint newPos = pos() + diff;
        move(newPos);
    }
}
