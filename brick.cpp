#include "brick.h"
#include <iostream>
//Saral Jalan
Brick::Brick(int x, int y) //takes in where to position the object.
{
  image.load("bricks.png");//puts in the image of the brick.
  destroyed = FALSE;
  rect = image.rect();
  rect.translate(x, y);
}

Brick::~Brick() {//destructor.

   std::cout << ("Brick deleted\n");
}

QRect Brick::getRect()//returns the rect.
{
  return rect;
}

void Brick::movePositioning(int xcoord, int ycoord)
{
  rect.moveTo(xcoord,ycoord);//moves the position of the brick to the X,Y location of the window.
}

void Brick::setRect(QRect rct)
{
  rect = rct;//sets the rect.
}

QImage & Brick::getImage()
{
  return image; //returns the image.
}

bool Brick::isDestroyed()
{
  return destroyed;//returns if the brick is destroyed or not. if not destroyed then true.
}

void Brick::setDestroyed(bool destr)
{
  destroyed = destr;//sets if the brick was destoyed or not.
}

int Brick::getHeight()
{
 return rect.height(); //returns the height of the brick
}

int Brick::getWidth()
{
	return rect.width();
}//returns the width of the brick.







 


