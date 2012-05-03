#include "rocket.h"
#include <iostream>
//Saral Jalan
Rocket::Rocket()//Constructor

{
  image.load("rocket.png");//sets the image of the catcher object.
 

  rect = image.rect();
    rect.setWidth(20);//sets the dimensions of the object.
   rect.setHeight(15);

}

Rocket::~Rocket()//Destructor.
{
 std::cout << ("Horizontal Obstacle deleted\n");
}

int Rocket::getHeight()//returns the height of the object.
{
 return rect.height();
}

int Rocket::getWidth()//returns the width of the object.
{
    return rect.width();
}

int Rocket::getXCoordinate() const
{
   return rect.x();
}

int Rocket::getYCoordinate() const
{
   return rect.y();
}

void Rocket::movePositioning(int x, int y)//resets the position of the catcher.
{
  rect.moveTo(x, y);
}

QRect Rocket::getRect() //returns the rect.
{
  return rect;
}

QImage & Rocket::getImage() //returns the image.
{
  return image;
}

void Rocket::setXDirection(int x)
{
   xDir = x;
}


void Rocket::autoMove()//moves in the direction. moves automatically depending on what wall and side it hits.
{
  rect.translate(xDir,0);
  if (rect.right()>495)
  {
     xDir = -1;
  }
  
  if (rect.left() < 5)
  {
     xDir = 1;
  }
  
 
}





