#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <gamebase.h>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();
    ~MainWindow();

private:
    GameType game_type;
    void initgame();
    void initPVPGame();
    void initPVCGame();
    void initPVPOLGame();




};

#endif // MAINWINDOW_H
