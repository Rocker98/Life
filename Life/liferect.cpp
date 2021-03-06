#include "liferect.h"

LifeRect::LifeRect(qreal x, qreal y, qreal w, qreal h, QGraphicsItem* parent):QGraphicsRectItem(x,y,w,h,parent)
{
    this->setBrush(QBrush(Qt::white));
}

void LifeRect::change_color()
{
    if(this->brush().color()==Qt::white)
    {
        this->setBrush(QBrush(Qt::black));
    }
    else
    {
        this->setBrush(QBrush(Qt::white));
    }
}

void LifeRect::mousePressEvent()
{
    change_color();
}
