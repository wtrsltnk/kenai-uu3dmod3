#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "custompoint.h"
#include "scarabaeus.h"

#include <math.h>

#define PI 3.14159265

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Add scene to the QGraphicsView
    ui->gvScarabaeus_1->setScene(&this->scarabaeusScene);
    ui->gvCardinal_2->setScene(&this->cardinalScene);

    this->ui->gvCardinal_2->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform | QPainter::TextAntialiasing);

    this->cardinalScene.addCustomPoint(new CustomPoint(QPointF(0.0f, 0.0f)));
    this->cardinalScene.addCustomPoint(new CustomPoint(QPointF(5.0f, 2.0f)));
    this->cardinalScene.addCustomPoint(new CustomPoint(QPointF(7.0f, 5.0f)));
    this->cardinalScene.addCustomPoint(new CustomPoint(QPointF(5.0f, 8.0f)));
    this->cardinalScene.addCustomPoint(new CustomPoint(QPointF(1.0f, 15.0f)));

    this->cardinalScene.setSceneRect(0, 0, 10, 10);

    // Create new Scarabaeus class
    Scarabaeus scarabaeus (1, 0.05);
    QVector<QPointF> result;
    result = scarabaeus.generatePoints();

    QPen pen(QColor(0, 255, 0));

    // Draw the curve
    /// TODO: Add the last section of the curve
    for(int i = 1; i <= result.size() -1; i++){
     QPointF vorigPunt = result.at(i -1);
     QPointF punt = result.at(i);
     ui->gvScarabaeus_1->scene()->addLine((vorigPunt.x() * 100),( vorigPunt.y() * 100), (punt.x() * 100),( punt.y() * 100), pen);

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
