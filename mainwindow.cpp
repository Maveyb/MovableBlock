#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    setFixedSize(800, 600);

    MovableBlock *block = new MovableBlock(this);
    block->move(100, 100);
    block->show();
}
