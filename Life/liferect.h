#ifndef LIFERECT_H
#define LIFERECT_H

#include <QWidget>
#include <QObject>
#include <QGraphicsRectItem>





class LifeRect:public QGraphicsRectItemItem
{
public:
    LifeRect(qreal x, qreal y, qreal w, qreal h, QGraphicsItem* parent=0);
    ~LifeRect();
public:
    void change_color();
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
};

#endif // LIFERECT_H
