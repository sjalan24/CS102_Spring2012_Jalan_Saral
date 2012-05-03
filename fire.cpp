#include "fire.h"
#include <iostream>
//Saral Jalan
//Fire class. These are the moving balls in the game.
Fire::Fire()
{
    image.load("fireBullets.png");//loads image from file.

  rect = image.rect();
   rect.setWidth(10);//sets the dimensions of the ball.
   rect.setHeight(8);
  

}

Fire::~Fire() {//destructor.
  std::cout << ("Fire deleted\n");
}


void Fire::movePositioning(int xcoordinate, int ycoordinate)//moves the obstacle to this X and Y coordinate in the window.
{
   rect.moveTo(xcoordinate,ycoordinate);
}

void Fire::autoMoveUp()
{
  rect.translate(0, ydir);
  if(rect.y()==1000)
  {
      ydir=0;
      rect.moveTo(-200,-200);
  }

}

void Fire:: setYDirection(int value)
{
    ydir= value;
}




QRect Fire::getRect()//returns the rectangle type.
{
  return rect;
}

QImage & Fire::getImage()//sets the image as the rectangle.
{
  return image;
}
