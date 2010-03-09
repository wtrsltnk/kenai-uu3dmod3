#ifndef COMBISCENE_H
#define COMBISCENE_H

#include <QGraphicsScene>

class CombiScene : public QGraphicsScene
{
    Q_OBJECT
public:
    CombiScene();
    virtual ~CombiScene();

    void updateCombiPoints();

public slots:
    void sampleDensityChanged(double d);
    void tensionChanged(double d);
    void aChanged(double d);

private:
    double sampleDensityValue;
    double tensionValue;
    double aValue;
};

#endif // COMBISCENE_H
