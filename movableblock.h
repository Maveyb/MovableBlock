#ifndef MOVABLEBLOCK_H
#define MOVABLEBLOCK_H

#include <QWidget>
#include <QMouseEvent>

class MovableBlock : public QWidget {
    Q_OBJECT
public:
    explicit MovableBlock(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

private:
    QPoint m_dragStart;
};

#endif // MOVABLEBLOCK_H
