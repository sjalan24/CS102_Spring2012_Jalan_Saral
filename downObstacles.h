#ifndef DOWNOBSTACLES_H
#define DOWNOBSTACLES_H

#include <QImage>
#include <QRect>
#include "sideObstacles.h"

//Saral Jalan
class downObstacles: public sideObstacles//Inheritance and Polymorphism
{

  public:
    downObstacles();
    ~downObstacles();
    void autoMoveDown();
    

    private:
    QImage image;
    QRect rect;

};

#endif

