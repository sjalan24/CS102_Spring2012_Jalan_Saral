#include "bonus.h"
#include <iostream>
//Saral Jalan
Bonus::Bonus()//Constructor
{
  image.load("bonus.png");//sets the image of the catcher object.

  rect = image.rect();
    rect.setWidth(30);//sets the dimensions of the object.
   rect.setHeight(20);
  
}

Bonus::~Bonus()//Destructor.
{
 std::cout << ("Bonus deleted\n");
}

int Bonus::getHeight()//returns the height of the object.
{
 return rect.height();
}

int Bonus::getWidth()//returns the width of the object.
{
	return rect.width();
}

void Bonus:: autoMove(int x,int y)
{
      
     

      
            rect.moveTo(x,y);
      

    
}

/*void Bonus::movePositioning(int xCoordinate, int yCoordinate)//resets the position of the catcher.
{
  rect.moveTo(xCoordinate, yCoordinate);
}*/



QRect Bonus::getRect() //returns the rect.
{
  return rect;
}

QImage & Bonus::getImage() //returns the image.
{
  return image;
}
