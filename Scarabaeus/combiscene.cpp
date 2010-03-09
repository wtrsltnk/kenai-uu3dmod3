#include "combiscene.h"
#include "scarabaeus.h"
#include "cardinal.h"
#include <QGraphicsRectItem>

CombiScene::CombiScene()
    : sampleDensityValue(0.4f), tensionValue(1.0f), aValue(0.0f)
{
}

CombiScene::~CombiScene()
{
}

void CombiScene::updateCombiPoints()
{
    /// The scarabaeus generating instances
    Scarabaeus cardinalSamplePoints(this->aValue, this->sampleDensityValue);
    Scarabaeus realPoints(this->aValue, 0.05f);

    /// Clear all the last points in this scene
    this->clear();

    /// Generate and draw the scarabaeus generated control points for the cardinal spline
    QVector<QPointF> controlPoints = cardinalSamplePoints.generatePoints();
    Cardinal cardinal(controlPoints, this->tensionValue);
    for (int i = 0; i < controlPoints.size(); i++)
    {
        this->addEllipse(controlPoints[i].x()-0.1f, controlPoints[i].y()-0.1f, 0.2f, 0.2f, QPen(QColor(255, 0, 0)), QBrush(QColor(0, 0, 0), Qt::NoBrush));
    }

    /// Generate the approximation of the scarabaeus by a cardinal and add those with lines in bewteen to this scene
    QVector<QPointF> cardinalPoints = cardinal.generatePoints();
    QPointF vorigPunt = cardinalPoints.at(0);
    for(int i = 1; i <= cardinalPoints.size() - 1; i++){
        QPointF punt = cardinalPoints.at(i);
        this->addLine(vorigPunt.x(),vorigPunt.y(), punt.x(), punt.y(), QPen(QColor(0, 255, 0), 0.05f));
        vorigPunt = punt;
    }

    /// Generate original scarabaeu curve points and put them in a polygon in the scene
    QVector<QPointF> scarabaeuPoints = realPoints.generatePoints();
    QPolygonF poly;
    for(int i = 0; i <= scarabaeuPoints.size() -1; i++)
        poly << scarabaeuPoints.at(i);
    this->addPolygon(poly, QPen(QColor(0, 0, 255), 0.02f), QBrush(QColor(0, 0, 255), Qt::NoBrush));
}

void CombiScene::sampleDensityChanged(double d)
{
    /// Save the new sample density value and update the scene
    this->sampleDensityValue = d;
    this->updateCombiPoints();
}

void CombiScene::tensionChanged(double d)
{
    /// Save the new tension value and update the scene
    this->tensionValue = d;
    this->updateCombiPoints();
}

void CombiScene::aChanged(double d)
{
    /// Save the new a value and update the scene
    this->aValue = d;
    this->updateCombiPoints();
}
