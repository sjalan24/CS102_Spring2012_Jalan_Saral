#include "tank.h"
#include "bullet.h"
#include <iostream>
//Saral Jalan
Tank::Tank()//Constructor

{
  image.load("tank.png");//sets the image of the catcher object.
 

  rect = image.rect();
    rect.setWidth(30);//sets the dimensions of the object.
   rect.setHeight(15);

}

Tank::~Tank()//Destructor.
{
 std::cout << ("Horizontal Obstacle deleted\n");
}

int Tank::getHeight()//returns the height of the object.
{
 return rect.height();
}

int Tank::getWidth()//returns the width of the object.
{
    return rect.width();
}

int Tank::getXCoordinate() const
{
   return rect.x();
}

int Tank::getYCoordinate() const
{
   return rect.y();
}

void Tank::movePositioning(int x, int y)//resets the position of the catcher.
{
  rect.moveTo(x, y);
}

QRect Tank::getRect() //returns the rect.
{
  return rect;
}

QImage & Tank::getImage() //returns the image.
{
  return image;
}

void Tank::setYDirection(int y)
{
   yDir = y;
}


void Tank::autoMove()//moves in the direction. moves automatically depending on what wall and side it hits.
{
  rect.translate(0,yDir);
  if (rect.bottom()==500)
  {
     yDir = -1;
  }
  
  if (rect.top() == 0)
  {
     yDir = 1;
  }
  
 
}





