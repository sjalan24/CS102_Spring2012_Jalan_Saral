#ifndef FIRE_H
#define FIRE_H
//Saral Jalan
#include <QImage>
#include <QRect>
//Bullet.h
class Fire
{

  public:
    Fire();//Constructor
    ~Fire();//Destructor

  public:
    
    QRect getRect();
    QImage & getImage();
    void movePositioning(int, int);
   
    void autoMoveUp();
    void setYDirection(int);
    

  private:
    int angle;
    int speed;
    bool fire;
    int ydir;
    
    QImage image;
    QRect rect;

};

#endif
