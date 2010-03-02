#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void calculateCurve();
    void drawCurve(double xPos, double yPos);
    QGraphicsScene scene;

    int oldXpos;
    int oldYpos;


protected:
    void changeEvent(QEvent *e);

protected:
    QGraphicsScene scarabaeusScene;
    QGraphicsScene cardinalScene;
    QGraphicsScene combiScene;

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
