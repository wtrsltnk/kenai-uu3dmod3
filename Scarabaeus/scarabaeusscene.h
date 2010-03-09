#ifndef SCARABAEUSSCENE_H
#define SCARABAEUSSCENE_H

#include <QGraphicsScene>

class ScarabaeusScene : public QGraphicsScene
{
    Q_OBJECT
public:
    ScarabaeusScene();
    virtual ~ScarabaeusScene();

    void updateScarabaeusPoints();

public slots:
    void aChanged(double d);

private:
    double aValue;

};

#endif // SCARABAEUSSCENE_H
