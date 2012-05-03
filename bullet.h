#ifndef BULLET_H
#define BULLET_H
//Saral Jalan
#include <QImage>
#include <QRect>
//Bullet.h
class Bullet
{

  public:
    Bullet();//Constructor
    ~Bullet();//Destructor

  public:
    void getRidofBullets();
    QRect getRect();
    QImage & getImage();
    void movePositioning(int, int);
    void setBulletStatus(bool);
    bool getBulletStatus();
    void autoMoveRight();
    void setXDirection(int);
    

  private:
    int angle;
    int speed;
    bool fire;
    int xdir;
    
    QImage image;
    QRect rect;

};

#endif
