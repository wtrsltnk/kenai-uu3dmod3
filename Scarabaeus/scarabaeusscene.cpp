#include "scarabaeusscene.h"
#include "scarabaeus.h"

ScarabaeusScene::ScarabaeusScene()
    : aValue(1.0f)
{
}

ScarabaeusScene::~ScarabaeusScene()
{
}

void ScarabaeusScene::updateScarabaeusPoints()
{
    /// Clear all the old points
    this->clear();

    /// Generate the new scarabaeus points
    Scarabaeus scarabaeus(this->aValue, 0.05);
    QVector<QPointF> result = scarabaeus.generatePoints();

    /// Create a polygon from the generated points and
    QPolygonF poly;
    for(int i = 0; i <= result.size() -1; i++)
        poly << result.at(i);

    this->addPolygon(poly, QPen(QColor(0, 255, 0)), QBrush(QColor(0, 0, 255), Qt::NoBrush));
}

void ScarabaeusScene::aChanged(double d)
{
    /// Save the new a value and update the scene
    this->aValue = d;
    this->updateScarabaeusPoints();
}
