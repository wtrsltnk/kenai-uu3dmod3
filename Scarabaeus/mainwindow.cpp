#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "custompoint.h"
#include "scarabaeus.h"
#include "cardinal.h"

#include <math.h>

#define PI 3.14159265

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Add scene to the QGraphicsViews
    ui->gvScarabaeus_1->setScene(&this->scarabaeusScene);
    ui->gvCardinal_2->setScene(&this->cardinalScene);
    this->ui->gvCardinal_2->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform | QPainter::TextAntialiasing);
    //this->cardinalScene.setSceneRect(0, 0, 10, 10);

    Cardinal cardinal(0);

    QPointF point(0.0f, 0.0f);
    this->cardinalScene.addCustomPoint(new CustomPoint(point));
    cardinal.addControlPoint(point);

    point.setX(50.0f);
    point.setY(20.0f);
    this->cardinalScene.addCustomPoint(new CustomPoint(point));
    cardinal.addControlPoint(point);

    point.setX(70.0f);
    point.setY(50.0f);
    this->cardinalScene.addCustomPoint(new CustomPoint(point));
    cardinal.addControlPoint(point);

    point.setX(50.0f);
    point.setY(80.0f);
    this->cardinalScene.addCustomPoint(new CustomPoint(point));
    cardinal.addControlPoint(point);

    point.setX(10.0f);
    point.setY(150.0f);
    this->cardinalScene.addCustomPoint(new CustomPoint(point));
    cardinal.addControlPoint(point);

    point.setX(30.0f);
    point.setY(150.0f);
    this->cardinalScene.addCustomPoint(new CustomPoint(point));
    cardinal.addControlPoint(point);
    
    point.setX(80.0f);
    point.setY(20.0f);
    this->cardinalScene.addCustomPoint(new CustomPoint(point));
    cardinal.addControlPoint(point);

    // Create new Scarabaeus class
    Scarabaeus scarabaeus (ui->dsbA_1->value(), 0.05);
    QVector<QPointF> result;
    result = scarabaeus.generatePoints();
    QPen pen(QColor(0, 255, 0));


    // Draw the curve
    int scaleValue = 100;

    /// TODO: Add the last section of the curve
    for(int i = 1; i <= result.size() -1; i++){
        QPointF vorigPunt = result.at(i -1);
        QPointF punt = result.at(i);
        ui->gvScarabaeus_1->scene()->addLine((vorigPunt.x() * scaleValue),( vorigPunt.y() * scaleValue), (punt.x() * scaleValue),( punt.y() * scaleValue), pen);
    }

    result.clear();
    result = cardinal.generatePoints();
    scaleValue = 1;
    // Draw the curve
    /// TODO: Add the last section of the curve
    for(int i = 1; i <= result.size() -1; i++){
        QPointF vorigPunt = result.at(i -1);
        QPointF punt = result.at(i);
        ui->gvCardinal_2->scene()->addLine((vorigPunt.x() * scaleValue),( vorigPunt.y() * scaleValue), (punt.x() * scaleValue),( punt.y() * scaleValue), pen);
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
