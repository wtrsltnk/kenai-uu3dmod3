#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "custompoint.h"
#include "scarabaeus.h"
#include "cardinal.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /// Make the graphicsviews render our stuff real nice!
    this->ui->gvScarabaeus_1->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform | QPainter::TextAntialiasing);
    this->ui->gvCardinal_2->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform | QPainter::TextAntialiasing);
    this->ui->gvCombi_3->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform | QPainter::TextAntialiasing);

    /// Initialize the graphicsviews
    ui->gvScarabaeus_1->setScene(&this->scarabaeusScene);
    ui->gvScarabaeus_1->scale(100, 100);
    ui->gvCardinal_2->setScene(&this->cardinalScene);
    ui->gvCardinal_2->scale(10, 10);
    ui->gvCombi_3->setScene(&this->combiScene);
    ui->gvCombi_3->scale(140, 140);

    /// Input control points for the cardinal spline
    QVector<CustomPoint*> points;
    double scalex = 2.5f;
    double scaley = 1.5f;
    points.append(new CustomPoint(QPointF(-2.2f*scalex, -8.0f*scaley)));
    points.append(new CustomPoint(QPointF(-1.0f*scalex, -6.0f*scaley)));
    points.append(new CustomPoint(QPointF(-2.0f*scalex, -2.0f*scaley)));
    points.append(new CustomPoint(QPointF( 0.0f*scalex, -0.0f*scaley)));
    points.append(new CustomPoint(QPointF( 2.0f*scalex, -4.0f*scaley)));
    points.append(new CustomPoint(QPointF( 6.0f*scalex, -0.4f*scaley)));
    points.append(new CustomPoint(QPointF( 7.0f*scalex,  2.0f*scaley)));
    points.append(new CustomPoint(QPointF( 3.0f*scalex,  3.0f*scaley)));
    points.append(new CustomPoint(QPointF(-1.0f*scalex,  3.5f*scaley)));
    points.append(new CustomPoint(QPointF(-3.0f*scalex,  5.0f*scaley)));
    points.append(new CustomPoint(QPointF( 1.0f*scalex,  7.0f*scaley)));
    points.append(new CustomPoint(QPointF( 4.0f*scalex,  9.0f*scaley)));

    /// Make scenes react to the UI elements
    connect(this->ui->dsbTension_2, SIGNAL(valueChanged(double)), &this->cardinalScene, SLOT(tensionChanged(double)));
    connect(this->ui->dsbA_1, SIGNAL(valueChanged(double)), &this->scarabaeusScene, SLOT(aChanged(double)));
    connect(this->ui->dsbSampleDensity_3, SIGNAL(valueChanged(double)), &this->combiScene, SLOT(sampleDensityChanged(double)));
    connect(this->ui->dsbTension_3, SIGNAL(valueChanged(double)), &this->combiScene, SLOT(tensionChanged(double)));
    connect(this->ui->dsbA_3, SIGNAL(valueChanged(double)), &this->combiScene, SLOT(aChanged(double)));

    /// Update and draw the scene for the first time
    this->cardinalScene.setCardinalPoints(points);
    this->scarabaeusScene.updateScarabaeusPoints();
    this->combiScene.updateCombiPoints();
}


MainWindow::~MainWindow()
{
    delete ui;
}
