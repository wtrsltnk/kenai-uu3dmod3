#ifndef SCARABAEUS_H
#define SCARABAEUS_H

#include <QVector>
#include <QPointF>

class Scarabaeus
{
public:
    Scarabaeus(double a, double sampleDensity);
    virtual ~Scarabaeus();

    double getA() { return this->a; }
    void setA(double a) { this->a = a; }

    double getSampleDensity() { return this->sampleDensity; }
    void setSampleDensity(double sampleDensity) { this->sampleDensity = sampleDensity; }

    QVector<QPointF> generatePoints();

protected:
    double a;
    double sampleDensity;

};

#endif // SCARABAEUS_H
