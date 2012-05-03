#ifndef OBSTACLE_H
#define OBSTACLE_H
//Saral Jalan
#include <QImage>
#include <QRect>
//Obstacle.h
class Obstacle
{

  public:
    Obstacle();//Constructor
    ~Obstacle();//Destructor

  public:
    void resetState();
    void moveBottom(int);
    void moveTop(int);
    void moveLeft(int);
    void moveRight(int);
    void autoMove();
    QRect getRect();
    QImage & getImage();
    void movePositioning(int, int);

  private:
    int angle;
    int speed;
    int xdir;
    int ydir;
    bool stuck;
    QImage image;
    QRect rect;

};

#endif
