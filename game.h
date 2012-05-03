#ifndef GAME_H
#define GAME_H

#include "obstacle.h"//1
#include "brick.h"//2
#include "catcher.h"//3
#include "sideObstacles.h"//4
#include "downObstacles.h"//5
#include "tank.h"//6
#include "superShooter.h"//7
#include "bullet.h"//8
#include "bomb.h"//9
#include "bonus.h"//10
#include "rocket.h"//11
#include "fire.h"//12 OBJECTS!!!
#include <QWidget>
#include <QKeyEvent>
//Game.h
//Saral Jalan
class Game : public QWidget
{
  Q_OBJECT

  public:
    Game(QWidget *parent = 0);
    ~Game();

  protected:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void keyPressEvent(QKeyEvent *event);

    void startGame();
    void pauseGame();
    void stopGame();
    void victory();
    void checkCollision();
    

  private:
    int x;
    int timerId;
    Obstacle *obstacle;
    Obstacle *obstacle1;
    Obstacle *obstacle2;
    Obstacle *obstacle3;
    Obstacle *obstacle4;
   
    Catcher *catcher;//OBJECT POINTERS BEING CREATED
    Brick * bricks[32];
    sideObstacles *sides[10];
    sideObstacles *downs[10];
    Bullet *bullets[15];
    Bomb *bombBullets[10];
    Fire *fireBullets[15];
    Tank *tank;
    Rocket *rocket;
    superShooter *shooter;
    Bonus *bonus;
    bool gameOver;
    bool gameWon;
    bool gameStarted;
    bool goHarder;
    bool paused;
    bool fireTheBullets;
    int lives;
    int bricksLeft;
    int bonusCounter;
    int ammo;
    int count;
    int bombAmmo;
    int fireAmmo;
    bool thirdLevel;//LEVEL CREATORS
    bool secondLevel;
    bool firstLevel;

};

#endif

