#include "sideObstacles.h"
#include <iostream>
//Saral Jalan
sideObstacles::sideObstacles()//Constructor
{
  image.load("sides.png");//sets the image of the catcher object.

  rect = image.rect();
    rect.setWidth(5);//sets the dimensions of the object.
   rect.setHeight(5);

}

sideObstacles::~sideObstacles()//Destructor.
{
 std::cout << ("Horizontal Obstacle deleted\n");
}

int sideObstacles::getHeight()//returns the height of the object.
{
 return rect.height();
}

int sideObstacles::getWidth()//returns the width of the object.
{
    return rect.width();
}


void sideObstacles::movePositioning(int x, int y)//resets the position of the catcher.
{
  rect.moveTo(x, y);
}

void sideObstacles::randomMove()
{
   int random = rand()%500;
   rect.moveTo(500,random);
   
}

QRect sideObstacles::getRect() //returns the rect.
{
  return rect;
}

QImage & sideObstacles::getImage() //returns the image.
{
  return image;
}

void sideObstacles::autoMoveRight()//moves in the direction. moves automatically depending on what wall and side it hits.
{
  rect.translate(-1,0);
}

void sideObstacles::autoMoveDown()//moves in the direction. moves automatically depending on what wall and side it hits.
{
  rect.translate(0,1);
}

void sideObstacles::randomMovement()
{
   int random = rand()%500;
   rect.moveTo(random,0);
   
}

