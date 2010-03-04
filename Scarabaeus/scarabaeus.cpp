#include "scarabaeus.h"
#include <math.h>

#define PI 3.14159265

Scarabaeus::Scarabaeus(double a, double sampleDensity)
    : a(a), sampleDensity(sampleDensity)
{
}

Scarabaeus::~Scarabaeus()
{

}

QVector<QPointF> Scarabaeus::generatePoints()
{
    QVector<QPointF> result;

    /// TODO: implement point generation!

    // Formule
    // r(theta)= cos(2theta) - (a cos(theta))
    // domein van -phi t/m phi

    double hyp, opp, adj;

    for(double theta = -PI ;theta <= PI; (theta = theta + sampleDensity))
    {

        hyp = (cos (2 * theta)) - (a * cos (theta));

        opp = sin (theta) * hyp;
        adj = cos (theta) * hyp;

        QPointF point( opp, adj);
        result.push_back(point);

    }

    return result;
}
