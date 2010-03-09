#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include "cardinalscene.h"
#include "scarabaeusscene.h"
#include "combiscene.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    ScarabaeusScene scarabaeusScene;
    CardinalScene cardinalScene;
    CombiScene combiScene;

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
