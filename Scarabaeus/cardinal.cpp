#include "cardinal.h"
#include <math.h>

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

void Cardinal::addControlPoint(QPointF point)
{
    controlPoints.append(point);
}

void Cardinal::removeControlPoint(QPointF& point)
{
    /// TODO implement the remove methode
}

void Cardinal::clearControlPoints()
{
    controlPoints.clear();
}

QVector<QPointF> Cardinal::generatePoints()
{
    QVector<QPointF> result;

    /// TODO: implement point generation!


    for (int i = 1; i <= (controlPoints.size() -3); i ++ ){
        // Cardinal spline estimated derivative

        // Pk' = 1/2 (1-t) (Pk+1-Pk-1)

        // This means for the estamated derivative between of point 1 and 2
        // Point 1' = 1/2 (1-t) ( Point 2 - Point 0)
        // Point 2' = 1/2 (1-t) ( Point 3 - Point 1)

        QPointF point1Der;
        QPointF point2Der;

        point1Der = (0.5 * (1- tension)) * (controlPoints.at(i + 1) - controlPoints.at(i - 1));
        point2Der = (0.5 * (1- tension)) * (controlPoints.at(i + 2) - controlPoints.at(i));

        // Now calculate the matrix multiplication Mx * [Point k, Point k+1, Point k', Point k+1 ']t

        QPointF a = (2 * controlPoints.at(i)) + (-2 *controlPoints.at(i + 1) ) + (point1Der) + (point2Der);
        QPointF b = (-3 * controlPoints.at(i)) + (3 *controlPoints.at(i + 1) ) + (-2 * point1Der) + (-1 * point2Der);
        QPointF c = point1Der;
        QPointF d = controlPoints.at(i);

        for(double u = 0; u <= 1; u += 0.05){
            QPointF point;
            point = (a * pow(u,3)) + (b * pow (u,2)) + (c * u) + d;
            result.append(point);
        }
    }
    return result;
}
