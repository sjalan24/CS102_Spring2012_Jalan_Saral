#ifndef CATCHER_H
#define CATCHER_H

#include <QImage>
#include <QRect>
//catcher.h
//Saral Jalan
class Catcher
{

  public:
    Catcher();
    ~Catcher();

  public:
    void resetState();
    void moveLeft(int);
    void moveRight(int);
    void moveTop(int);
    void moveBottom(int);
    int getWidth();
    int getHeight();
    QRect getRect();
    QImage & getImage();
    int getXCoordinate();
    int getYCoordinate();


  private:
    QImage image;
    QRect rect;

};

#endif
