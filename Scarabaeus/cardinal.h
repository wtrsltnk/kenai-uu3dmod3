#ifndef CARDINAL_H
#define CARDINAL_H

#include <QVector>
#include <QPointF>
#include "custompoint.h"

class Cardinal
{
public:
    Cardinal(double tension);
    Cardinal(QVector<CustomPoint*> controlPoints, double tension);
    Cardinal(QVector<QPointF> controlPoints, double tension);
    virtual ~Cardinal();

    double getTension() { return this->tension; }
    void setTension(double tension) { this->tension = tension; }

    QVector<QPointF> generatePoints();

protected:
    QVector<CustomPoint*> controlPoints;
    double tension;

};

#endif // CARDINAL_H
