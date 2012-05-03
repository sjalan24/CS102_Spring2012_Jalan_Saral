#include "superShooter.h"
#include "tank.h"
#include <iostream>
//Saral Jalan
superShooter::superShooter()//Constructor

{
  image.load("superShooter.png");//sets the image of the catcher object.
 
  //yDir = 1;
  rect = image.rect();
    rect.setWidth(30);//sets the dimensions of the object.
  rect.setHeight(15);

}

superShooter::~superShooter()//Destructor.
{
 std::cout << ("Horizontal Obstacle deleted\n");
}

void superShooter::setYDirection(int y)
{
   yDirection = y;
}

void superShooter::autoMovement()//moves in the direction. moves automatically depending on what wall and side it hits.
{
  rect.translate(0,yDirection);
  if (rect.bottom()==500)
  {
     yDirection = -1;
  }
  
  if (rect.top() == 0)
  {
     yDirection = 1;
  }
  
 
}

QRect superShooter::getRect() //returns the rect.
{
  return rect;
}

QImage & superShooter::getImage() //returns the image.
{
  return image;
}

void superShooter::movePositioning(int x, int y)//resets the position of the catcher.
{
  rect.moveTo(x, y);
}





