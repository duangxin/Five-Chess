#include "mainwindow.h"
#include <QMainWindow>
#include <QWidget>
const int CheckerBoardNum = 15;   //每行每列的格子数量
const int Edge = 10;   //边缘距
const int BoardEdge = 3;   //每个格子的长宽

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent)
{
    setFixedSize(2*Edge+CheckerBoardNum*BoardEdge,2*Edge+CheckerBoardNum*BoardEdge);
    // 添加菜单
    QMenu *gameMenu = menuBar()->addMenu(tr("Game")); // menuBar默认是存在的，直接加菜单就可以了
    QAction *actionPVP = new QAction("Person VS Person", this);
    connect(actionPVP, SIGNAL(triggered()), this, SLOT(initPVPGame()));
    gameMenu->addAction(actionPVP);

    QAction *actionPVC = new QAction("Person VS Computer", this);
    connect(actionPVC, SIGNAL(triggered()), this, SLOT(initPVCGame()));
    gameMenu->addAction(actionPVC);

    QAction *actionPVPOL = new QAction("Person VS Person Online", this);
    connect(actionPVPOL, SIGNAL(triggered()), this, SLOT(initPVPOLGame()));
    gameMenu->addAction(actionPVPOL);


}

MainWindow::~MainWindow()
{

}

MainWindow::initgame()
{

}

MainWindow::initPVPGame()
{

}

MainWindow::initPVCGame()
{

}

MainWindow::initPVPOLGame()
{

}
