#include "catcher.h"
#include <iostream>
//Saral Jalan
Catcher::Catcher()//Constructor
{
  image.load("catcher.png");//sets the image of the catcher object.

  rect = image.rect();
    rect.setWidth(20);//sets the dimensions of the object.
   rect.setHeight(13);
  resetState();
}

Catcher::~Catcher()//Destructor.
{
 std::cout << ("Catcher deleted\n");
}

int Catcher::getHeight()//returns the height of the object.
{
 return rect.height();
}

int Catcher::getWidth()//returns the width of the object.
{
	return rect.width();
}


void Catcher::moveLeft(int left)//moves one space to the left.
{
  if (rect.left() >= 0)
    rect.moveTo(left, rect.top());
}

void Catcher::moveRight(int right)//moves one space to the right.
{
  if (rect.right() <= 500)
    rect.moveTo(right, rect.top());
}

void Catcher::moveTop(int top)//moves one space to the top.
{
  if (rect.top() >=0)
	rect.moveTo(rect.left(), top);
}

void Catcher::moveBottom(int bottom)//moves one space to the bottom.
{
  if(rect.bottom() <= 500)
	rect.moveTo(rect.left(), bottom);
}

void Catcher::resetState()//resets the position of the catcher.
{
  rect.moveTo(250, 480);
}

int Catcher::getXCoordinate()
{
  rect.x();
}

int Catcher::getYCoordinate()
{
   rect.y();
}

QRect Catcher::getRect() //returns the rect.
{
  return rect;
}

QImage & Catcher::getImage() //returns the image.
{
  return image;
}
