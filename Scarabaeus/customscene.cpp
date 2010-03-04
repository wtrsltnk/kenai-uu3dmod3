#include "customscene.h"

CustomScene::CustomScene()
{
}

CustomScene::~CustomScene()
{
}

void CustomScene::addCustomPoint(CustomPoint* point)
{
    this->addItem(point);
    this->points << point;
}
