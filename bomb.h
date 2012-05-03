#ifndef BOMB_H
#define BOMB_H
//Saral Jalan
#include <QImage>
#include <QRect>
//Bullet.h
class Bomb
{

  public:
    Bomb();//Constructor
    ~Bomb();//Destructor

  public:
    
    QRect getRect();
    QImage & getImage();
    void movePositioning(int, int);
   
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
