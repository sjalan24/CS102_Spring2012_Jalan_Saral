#include "bomb.h"
#include <iostream>
//Saral Jalan
//Bomb class. These are the moving balls in the game.
Bomb::Bomb()
{
    image.load("bombBullets.png");//loads image from file.

  rect = image.rect();
   rect.setWidth(15);//sets the dimensions of the ball.
   rect.setHeight(10);
  

}

Bomb::~Bomb() {//destructor.
  std::cout << ("Bomb deleted\n");
}


void Bomb::movePositioning(int xcoordinate, int ycoordinate)//moves the obstacle to this X and Y coordinate in the window.
{
   rect.moveTo(xcoordinate,ycoordinate);
}

void Bomb::autoMoveRight()
{
  rect.translate(xdir,0);
  if(rect.right()==-1000)
  {
      xdir=0;
      rect.moveTo(-200,-200);
  }

}

void Bomb:: setXDirection(int value)
{
    xdir= value;
}




QRect Bomb::getRect()//returns the rectangle type.
{
  return rect;
}

QImage & Bomb::getImage()//sets the image as the rectangle.
{
  return image;
}
