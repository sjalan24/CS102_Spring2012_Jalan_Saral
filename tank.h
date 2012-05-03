#ifndef TANK_H
#define TANK_H

#include <QImage>
#include <QRect>
#include "bullet.h"

//Saral Jalan
class Tank
{

  public:
    Tank();
    ~Tank();

   
    int getWidth();
    int getHeight();
    QRect getRect();
    QImage & getImage();
    void movePositioning(int, int);
    void autoMove();
    int getXCoordinate() const;
    int getYCoordinate() const;
    void setYDirection(int);

  private:
    QImage image;
    QRect rect;
     int yDir;
     


};

#endif

