#include "downObstacles.h"
#include <iostream>
//Saral Jalan
downObstacles::downObstacles()
:sideObstacles()//Constructor
{
  image.load("downs.png");//sets the image of the catcher object.

  rect = image.rect();
    rect.setWidth(5);//sets the dimensions of the object.
   rect.setHeight(5);

}

downObstacles::~downObstacles()//Destructor.
{
 std::cout << ("Down Obstacle deleted\n");
}

void downObstacles::autoMoveDown()//moves in the direction. moves automatically depending on what wall and side it hits.
{
  rect.translate(0,1);
}



