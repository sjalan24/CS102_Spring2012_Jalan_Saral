#include "bullet.h"
#include <iostream>
//Saral Jalan
//Bullet class. These are the moving balls in the game.
Bullet::Bullet()
{
    image.load("bullets.png");//loads image from file.

  rect = image.rect();
   rect.setWidth(15);//sets the dimensions of the ball.
   rect.setHeight(10);
  

}

Bullet::~Bullet() {//destructor.
  std::cout << ("Bullet deleted\n");
}

void Bullet::getRidofBullets
() //moves the obstable to this initialized spot.
{
  rect.moveTo(-50,-50);
}

void Bullet::movePositioning(int xcoordinate, int ycoordinate)//moves the obstacle to this X and Y coordinate in the window.
{
   rect.moveTo(xcoordinate,ycoordinate);
}

void Bullet::autoMoveRight()
{
  rect.translate(xdir,0);
  if(rect.right()==1000)
  {
      xdir=0;
      rect.moveTo(-150,-150);
  }

}

void Bullet:: setXDirection(int value)
{
    xdir= value;
}
void Bullet::setBulletStatus(bool option)
{ 
    fire = option;
}

bool Bullet::getBulletStatus()
{
    return fire;
}



QRect Bullet::getRect()//returns the rectangle type.
{
  return rect;
}

QImage & Bullet::getImage()//sets the image as the rectangle.
{
  return image;
}


