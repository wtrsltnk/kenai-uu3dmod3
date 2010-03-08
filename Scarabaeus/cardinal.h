#ifndef CARDINAL_H
#define CARDINAL_H

#include <QVector>
#include <QPointF>

class Cardinal
{
public:
    Cardinal(double tension);
    Cardinal(QVector<QPointF> controlPoints, double tension);
    virtual ~Cardinal();

    void addControlPoint(QPointF point);
    void removeControlPoint(QPointF& point);
    void clearControlPoints();
    QVector<QPointF> getControlPoints() { return this->controlPoints; }

    double getTension() { return this->tension; }
    void setTension(double tension) { this->tension = tension; }

    QVector<QPointF> generatePoints();

protected:
    QVector<QPointF> controlPoints;
    double tension;

};

#endif // CARDINAL_H
