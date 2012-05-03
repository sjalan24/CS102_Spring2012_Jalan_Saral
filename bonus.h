#ifndef BONUS_H
#define BONUS_H

#include <QImage>
#include <QRect>
//catcher.h
//Saral Jalan
class Bonus
{

  public:
    Bonus();
    ~Bonus();

  public:
    
    int getWidth();
    int getHeight();
    QRect getRect();
    QImage & getImage();
    void autoMove(int, int);
    


  private:
    QImage image;
    QRect rect;

};

#endif
