#ifndef CUSTOMSCENE_H
#define CUSTOMSCENE_H

#include <QGraphicsScene>
#include <QVector>
#include "custompoint.h"

class CardinalScene : public QGraphicsScene
{
    Q_OBJECT
public:
    CardinalScene();
    virtual ~CardinalScene();

    void updateCardinalPoints();
    void setCardinalPoints(QVector<CustomPoint*> points);

public slots:
    void tensionChanged(double d);

protected:
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* mouseEvent);

private:
    QVector<CustomPoint*> points;
    double tensionValue;

};

#endif // CUSTOMSCENE_H
