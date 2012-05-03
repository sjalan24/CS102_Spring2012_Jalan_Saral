#ifndef ROCKET_H
#define ROCKET_H

#include <QImage>
#include <QRect>


//Saral Jalan
class Rocket
{

  public:
    Rocket();
    ~Rocket();

   
    int getWidth();
    int getHeight();
    QRect getRect();
    QImage & getImage();
    void movePositioning(int, int);
    void autoMove();
    int getXCoordinate() const;
    int getYCoordinate() const;
    void setXDirection(int);

  private:
    QImage image;
    QRect rect;
     int xDir;
     


};

#endif

