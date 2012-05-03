#include "game.h"
#include <QDesktopWidget>
#include <QApplication>
//Saral Jalan
//Homework4
//Tejada
//1969689257
void center(QWidget &widget)//The window is created.
{
  int x, y;
  int screenWidth;
  int screenHeight;

  int WIDTH = 500;//Dimensions of the window.
  int HEIGHT = 500;
  

  QDesktopWidget *desktop = QApplication::desktop();

  screenWidth = desktop->width();
  screenHeight = desktop->height();
 
  x = (screenWidth - WIDTH) / 2;
  y = (screenHeight - HEIGHT) / 2;

  widget.setGeometry(x, y, WIDTH, HEIGHT);//screen being set.
  widget.setFixedSize(WIDTH, HEIGHT);
}


int main(int argc, char *argv[])
{
  QApplication app(argc, argv);  
    
  Game window;//instance of game is being created.
  
  window.setWindowTitle("Saral's Game");//Game's name.
  window.show();//shows what happening in the game.
  center(window);

  return app.exec();
}
