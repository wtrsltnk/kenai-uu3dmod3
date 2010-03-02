/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Tue Mar 2 12:46:33 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QGraphicsView *gvScarabaeus_1;
    QSpacerItem *horizontalSpacer;
    QLabel *lblA_1;
    QDoubleSpinBox *dsbA_1;
    QWidget *tab_3;
    QGridLayout *gridLayout_3;
    QGraphicsView *gvCardinal_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lblTension_2;
    QDoubleSpinBox *dsbTension_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QGraphicsView *gvCombi_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblSampleDensity_3;
    QDoubleSpinBox *dsbSampleDensity_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lblA_3;
    QDoubleSpinBox *dsbA_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lblTension_3;
    QDoubleSpinBox *dsbTension_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 468);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setMargin(11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gvScarabaeus_1 = new QGraphicsView(tab);
        gvScarabaeus_1->setObjectName(QString::fromUtf8("gvScarabaeus_1"));

        gridLayout_2->addWidget(gvScarabaeus_1, 0, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(401, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        lblA_1 = new QLabel(tab);
        lblA_1->setObjectName(QString::fromUtf8("lblA_1"));

        gridLayout_2->addWidget(lblA_1, 1, 1, 1, 1);

        dsbA_1 = new QDoubleSpinBox(tab);
        dsbA_1->setObjectName(QString::fromUtf8("dsbA_1"));

        gridLayout_2->addWidget(dsbA_1, 1, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_3 = new QGridLayout(tab_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setMargin(11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gvCardinal_2 = new QGraphicsView(tab_3);
        gvCardinal_2->setObjectName(QString::fromUtf8("gvCardinal_2"));

        gridLayout_3->addWidget(gvCardinal_2, 0, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(432, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        lblTension_2 = new QLabel(tab_3);
        lblTension_2->setObjectName(QString::fromUtf8("lblTension_2"));

        gridLayout_3->addWidget(lblTension_2, 1, 1, 1, 1);

        dsbTension_2 = new QDoubleSpinBox(tab_3);
        dsbTension_2->setObjectName(QString::fromUtf8("dsbTension_2"));

        gridLayout_3->addWidget(dsbTension_2, 1, 2, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setMargin(11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gvCombi_3 = new QGraphicsView(tab_2);
        gvCombi_3->setObjectName(QString::fromUtf8("gvCombi_3"));

        gridLayout_4->addWidget(gvCombi_3, 0, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        lblSampleDensity_3 = new QLabel(tab_2);
        lblSampleDensity_3->setObjectName(QString::fromUtf8("lblSampleDensity_3"));

        gridLayout_4->addWidget(lblSampleDensity_3, 1, 1, 1, 1);

        dsbSampleDensity_3 = new QDoubleSpinBox(tab_2);
        dsbSampleDensity_3->setObjectName(QString::fromUtf8("dsbSampleDensity_3"));

        gridLayout_4->addWidget(dsbSampleDensity_3, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 2, 0, 1, 1);

        lblA_3 = new QLabel(tab_2);
        lblA_3->setObjectName(QString::fromUtf8("lblA_3"));

        gridLayout_4->addWidget(lblA_3, 2, 1, 1, 1);

        dsbA_3 = new QDoubleSpinBox(tab_2);
        dsbA_3->setObjectName(QString::fromUtf8("dsbA_3"));

        gridLayout_4->addWidget(dsbA_3, 2, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(378, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 3, 0, 1, 1);

        lblTension_3 = new QLabel(tab_2);
        lblTension_3->setObjectName(QString::fromUtf8("lblTension_3"));

        gridLayout_4->addWidget(lblTension_3, 3, 1, 1, 1);

        dsbTension_3 = new QDoubleSpinBox(tab_2);
        dsbTension_3->setObjectName(QString::fromUtf8("dsbTension_3"));

        gridLayout_4->addWidget(dsbTension_3, 3, 2, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Scarabaeus", 0, QApplication::UnicodeUTF8));
        lblA_1->setText(QApplication::translate("MainWindow", "Parameter A", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Assignment 1", 0, QApplication::UnicodeUTF8));
        lblTension_2->setText(QApplication::translate("MainWindow", "Tension", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Assignment 2", 0, QApplication::UnicodeUTF8));
        lblSampleDensity_3->setText(QApplication::translate("MainWindow", "Sample Density", 0, QApplication::UnicodeUTF8));
        lblA_3->setText(QApplication::translate("MainWindow", "Parameter A", 0, QApplication::UnicodeUTF8));
        lblTension_3->setText(QApplication::translate("MainWindow", "Tension", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Assignment 3", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
