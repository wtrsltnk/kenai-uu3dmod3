#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

     // Comments added
    scene.addText("Hello, world!");
    ui->graphicsView->setScene(&scene);

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

void MainWindow::addCurve(){

     // Not used any more
     //scene.addText("Hello, world!");
     //QGraphicsView view(&scene);
     //view.show();
     //ui->graphicsView->setScene(&scene);
     //ui->graphicsView->repaint();

}
