#include "userpoint.h"
#include <QGraphicsSceneMouseEvent>

CustomPoint::CustomPoint(const QPointF &pos)
    : QGraphicsRectItem(-5, -5, 10, 10), dragging(false)
{
    this->setPos(pos);
}

CustomPoint::~CustomPoint()
{
}

void CustomPoint::mouseMoveEvent(QGraphicsSceneMouseEvent * event)
{
    if (this->dragging) {
        this->moveBy(event->pos().x(), event->pos().y());
        this->update(0, 0, 10, 10);
    }
}

void CustomPoint::mousePressEvent(QGraphicsSceneMouseEvent * event)
{
    if (event->button() == Qt::LeftButton)
        this->dragging = true;
}

void CustomPoint::mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
{
    if (event->button() == Qt::LeftButton)
        this->dragging = false;
}
