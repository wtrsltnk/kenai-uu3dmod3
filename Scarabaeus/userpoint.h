#ifndef USERPOINT_H
#define USERPOINT_H

#include <QGraphicsItem>

class CustomPoint : public QGraphicsRectItem
{
public:
    CustomPoint(const QPointF &pos);
    virtual ~CustomPoint();

protected:
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent * event);
    virtual void mousePressEvent(QGraphicsSceneMouseEvent * event);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent * event);

private:
    bool dragging;
};

#endif // USERPOINT_H
