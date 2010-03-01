#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

#define PI 3.14159265

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

     // Comments added
   // scene.addText("Hello, world!");
   // scene.addLine(0,0,10,0, QPen( "black" ));
    ui->graphicsView->setScene(&scene);
    oldXpos = 0;
    oldYpos = 0;

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

void MainWindow::calculateCurve(){

     // Not used any more
     //scene.addText("Hello, world!");
     //QGraphicsView view(&scene);
     //view.show();
     //ui->graphicsView->setScene(&scene);
     //ui->graphicsView->repaint();
    //scene.addLine(0,0,10,0, QPen( "black" ));
    //scene.addLine()
    //drawCurve(10,10);
    //drawCurve(0, 10);

    // Ik zie nu dat ik niet goed bezig ben, morgen weer een dag

    // Formule
    // r(theta)= cos(2theta) - (a cos(theta))
    // domein van -phi t/m phi

    double param, result;
    bool firstTry = true;
   // param = -PI;
   // result = cos (param*PI/180);
    result = cos (2 * param);

    for(param = -PI ;param <= PI; (param = param + 0.1))
    {
        result = cos (2 * param);

        if(firstTry){
            oldXpos = param;
            oldYpos = result;
            firstTry = false;
        }

       drawCurve(param,result);


    }



}

void MainWindow::drawCurve(double xPos, double yPos){

    int scaleFactor = 10;
    xPos = xPos * scaleFactor;
    yPos = yPos * scaleFactor;

     // Not used any more
     //scene.addText("Hello, world!");
     //QGraphicsView view(&scene);
     //view.show();
     //ui->graphicsView->setScene(&scene);
     //ui->graphicsView->repaint();
    scene.addLine(oldXpos,oldYpos,xPos,yPos, QPen( "black" ));
    oldXpos = xPos;
    oldYpos = yPos;
    //scene.addLine()

}
