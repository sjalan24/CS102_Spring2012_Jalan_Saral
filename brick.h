#ifndef BRICK_H
#define BRICK_H

#include <QImage>
#include <QRect>
//Brick.h
//Saral Jalan
class Brick
{

  public:
    Brick(int, int);
    ~Brick();

  public:
    void resetState();
    bool isDestroyed();
    void setDestroyed(bool);
    QRect getRect();
    void setRect(QRect);
    QImage & getImage();
    int getWidth();
    int getHeight();
    void movePositioning(int, int);
    
    

  private:
    QImage image;
    QRect rect;
    int position;
    bool destroyed;
    int X,Y;
    int width, height;

};

#endif
