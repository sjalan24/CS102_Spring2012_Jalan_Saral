#ifndef SIDEOBSTACLES_H
#define SIDEOBSTACLES_H

#include <QImage>
#include <QRect>

//Saral Jalan
class sideObstacles
{

  public:
    sideObstacles();
    ~sideObstacles();

    void moveLeft(int);
    void moveRight(int);
    void moveTop(int);
    void moveBottom(int);
    int getWidth();
    int getHeight();
    QRect getRect();
    QImage & getImage();
    void movePositioning(int, int);
    void autoMoveRight();
    void autoMoveDown();
    void randomMove();
    void randomMovement();

  private:
    QImage image;
    QRect rect;

};

#endif

