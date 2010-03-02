#include "cardinal.h"

Cardinal::Cardinal(double tension)
    : tension(tension)
{
}

Cardinal::Cardinal(QVector<QPointF> controlPoints, double tension)
    : controlPoints(controlPoints), tension(tension)
{
}

Cardinal::~Cardinal()
{
}

void Cardinal::addControlPoint(QPointF& point)
{
}

void Cardinal::removeControlPoint(QPointF& point)
{
}

void Cardinal::clearControlPoints()
{
}

QVector<QPointF> Cardinal::generatePoints()
{
    QVector<QPointF> result;

    /// TODO: implement point generation!

    return result;
}
