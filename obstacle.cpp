#include "obstacle.h"
#include <iostream>
//Saral Jalan
//Obstacle class. These are the moving balls in the game.
Obstacle::Obstacle()
{

  xdir = 1;
  ydir = -1;

  image.load("ballObstacle.png");//loads image from file.

  rect = image.rect();
   rect.setWidth(12);//sets the dimensions of the ball.
   rect.setHeight(12);
  resetState();

}

Obstacle::~Obstacle() {//destructor.
  std::cout << ("Obstacle deleted\n");
}


void Obstacle::autoMove()//moves in the direction. moves automatically depending on what wall and side it hits.
{
  rect.translate(xdir, ydir);

  if (rect.left() == 0) {
    xdir = 1;
  }

  if (rect.right() == 500) {
    xdir = -1;
  }

  if (rect.top() == 0) {
    ydir = 1;
  }

 if(rect.bottom()==500){
    ydir=-1;}

}

void Obstacle::resetState() //moves the obstable to this initialized spot.
{
  rect.moveTo(230, 355);
}

void Obstacle::movePositioning(int xcoordinate, int ycoordinate)//moves the obstacle to this X and Y coordinate in the window.
{
   rect.moveTo(xcoordinate,ycoordinate);
}

QRect Obstacle::getRect()//returns the rectangle type.
{
  return rect;
}

QImage & Obstacle::getImage()//sets the image as the rectangle.
{
  return image;
}


