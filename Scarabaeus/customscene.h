#ifndef CUSTOMSCENE_H
#define CUSTOMSCENE_H

#include <QGraphicsScene>
#include <QVector>
#include "custompoint.h"

class CustomScene : public QGraphicsScene
{
public:
    CustomScene();
    virtual ~CustomScene();

    void addCustomPoint(CustomPoint* point);

private:
    QVector<CustomPoint*> points;

};

#endif // CUSTOMSCENE_H
