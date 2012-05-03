#ifndef SUPERSHOOTER_H
#define SUPERSHOOTER_H

#include <QImage>
#include <QRect>
#include "tank.h"

//Saral Jalan
class superShooter
{

  public:
    superShooter();
    ~superShooter();

   void autoMovement();
   void setYDirection(int);
   QRect getRect();
    QImage & getImage();
    void movePositioning(int, int);
    
    private:
    QImage image;
    QRect rect;
     int yDirection;
     
     


};

#endif

