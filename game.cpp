#include "game.h"
#include "sideObstacles.h"
#include "downObstacles.h"
#include "tank.h"
#include "bomb.h"
#include <QPainter>
#include <QApplication>
#include <iostream>
//Saral Jalan
//game.cpp. everything basically happens in this class.



Game::Game(QWidget *parent)
    : QWidget(parent)
{
srand(time(NULL));

  x = 0;//initializing all values.
   lives = 10;
   bricksLeft=30;
  gameOver = FALSE;
  gameWon = FALSE;
  paused = FALSE;
  secondLevel=FALSE;//LEVELS
  thirdLevel=FALSE;
  firstLevel=TRUE;
  bonusCounter=0;
  fireAmmo=0;
   count = 0;
  
  gameStarted = FALSE;
  goHarder=FALSE;
  ammo=0;
   bombAmmo = 0;
  obstacle = new Obstacle();//All objects being initialized/created.
  bonus = new Bonus();
  shooter=new superShooter();
  shooter->movePositioning(420,5);
  shooter->setYDirection(1);
  
  obstacle1= new Obstacle();
  obstacle1->movePositioning(5,380);//Location of objects being places on window.
  obstacle2 = new Obstacle();
  obstacle2->movePositioning(280,100);
  obstacle3 = new Obstacle();
  obstacle3->movePositioning(3,3);
  obstacle4 = new Obstacle();
  obstacle4->movePositioning(250,201);
  catcher = new Catcher();
 
  
  tank= new Tank();
  tank->movePositioning(-50,250);
  tank->setYDirection(-1);
  

	  bricks[0]=new Brick(80,57);//The diagram of the bricks is being drawn. Where the bricks are being placed.
          bricks[1]=new Brick(160,57);
          bricks[2]=new Brick(240,57);
	bricks[24]=new Brick(320,57);
          

          bricks[3]=new Brick(400,57);
          bricks[4]=new Brick(480,57);
          bricks[5]=new Brick(80,120);
         bricks[25]=new Brick(160,120);
     
          bricks[6]=new Brick(240,120);
          bricks[7]=new Brick(320,120);
          bricks[8]=new Brick(400,120);
          bricks[26]=new Brick(480,120);
	  
          bricks[9]=new Brick(80,180);
          bricks[10]=new Brick(160,180);
          bricks[11]=new Brick(240,180);
         bricks[27]=new Brick(320,180);

         bricks[12]=new Brick(400,180);
          bricks[13]=new Brick(480,180);
          bricks[14]=new Brick(80,240);
          bricks[28]=new Brick(160,240);

         bricks[15]=new Brick(240,240);
          bricks[16]=new Brick(320,240);
          bricks[17]=new Brick(400,240);
         bricks[29]=new Brick(480,240);

         bricks[18]=new Brick(80,320);
          bricks[19]=new Brick(160,320);
          bricks[20]=new Brick(240,320);
         bricks[30]=new Brick(320,320);

         bricks[21]=new Brick(400,320);
          bricks[22]=new Brick(480,320);
          bricks[23]=new Brick(123,380);
         bricks[31]=new Brick(246,380);

	
	
		for (int i =0; i<10; i++)//CREATION OF DIFFERENT OBJECTS
                { 
                      sides[i]=new sideObstacles(); 
                 }

		for (int i =0; i < 10; i++)
              {
			int y = rand()%800;
			sides[i]->movePositioning(495,y);
		}

		for (int i=0; i<10; i++)
                {
                     downs[i]=new downObstacles();
                }

		for (int z =0; z < 10; z++)
              {
			
			int y = rand()%800;
			downs[z]->movePositioning(y,5);
		}

             for (int r = 0; r <15; r++)
             {
 		bullets[r]=new Bullet(); 
              
              }

                for (int d = 0; d < 10; d++)
                 {
                    bombBullets[d]=new Bomb();
                 }

            for (int r = 0; r <15; r++)
             {
 		fireBullets[r]=new Fire(); 
              
              }

             rocket = new Rocket();
              rocket->movePositioning(250,0);
                rocket->setXDirection(2);
}

Game::~Game() {//Destructor. deletes all the objects at the termination of the game.
 delete obstacle;
 delete obstacle1;
 delete obstacle2;
 delete obstacle3;
 delete obstacle4;
 delete catcher;
 for (int i=0; i<32; i++) {
   delete bricks[i];
  }
}

void Game::paintEvent(QPaintEvent *event)//Everything that is put onto the window is drawn in this function.
{
  QPainter painter(this);

  if (gameOver) {//depending on if the person or lost the game differnt things are printed.
    QFont font("Courier", 8, QFont::DemiBold);
    QFontMetrics fm(font);
    int textWidth = fm.width("Game Over. Press space to restart.('h'=Harder) ('f' = hardest level");

    painter.setFont(font);
    int h = height();
    int w = width();

    painter.translate(QPoint(w/2, h/2));
    painter.drawText(-textWidth/2, 0, "Game Over. Press space to restart.('h'= Harder) ('f' = hardest level");
  }
  else if(gameWon) {
    QFont font("Courier", 8, QFont::DemiBold);
    QFontMetrics fm(font);
    int textWidth = fm.width("U Broke 15 Bricks. Press 'H' to go Harder! Or 'F' for Final Level");

    painter.setFont(font);
    int h = height();
    int w = width();

    painter.translate(QPoint(w/2, h/2));
   if(firstLevel==TRUE&&secondLevel==TRUE&& thirdLevel==TRUE)//DIFFERENT THINGS ON DIFFERENT LEVELS
   {
        painter.drawText(-textWidth/2, 0, "U beat the game!");
    }
    else if(firstLevel==TRUE&&secondLevel==TRUE)
    {
	painter.drawText(-textWidth/2, 0, "You won. Press F for final Level!");
    }
    
   else if(firstLevel==TRUE)
    {
	
        painter.drawText(-textWidth/2, 0, "U Broke 15 Bricks. Press 'H' to level up");
    }
   
   

    
  }
  
  if(firstLevel==TRUE) {//THINGS TO DRAW ON FIRST LEVEL
    painter.drawImage(obstacle->getRect(), //obstacles being drawn
        obstacle->getImage());
    painter.drawImage(obstacle1->getRect(), obstacle1->getImage());
    painter.drawImage(obstacle2->getRect(), obstacle2->getImage());
    painter.drawImage(obstacle3->getRect(), obstacle3->getImage());
    painter.drawImage(obstacle4->getRect(), obstacle4->getImage());
    painter.drawImage(catcher->getRect(), 
        catcher->getImage());
     
   
   for (int i=0; i<32; i++)
   {//depending on which bricks are destroyed those bricks are drawn
        if (!bricks[i]->isDestroyed()) 
        painter.drawImage(bricks[i]->getRect(), 
        bricks[i]->getImage());
   }

    QFont font("Courier", 10, QFont::DemiBold);//fonts being set.
    QFontMetrics fm(font);

    int textWidth = fm.width("Points");
    painter.setFont(font);

    int h = height();

    int w = width();

    QString bLeft;//string of QT is being created.
    bLeft.append(QString("%1").arg(bricksLeft));//print lives and the number of blocks left.
    QString livesLeft;//another string to place on the screen.
    livesLeft.append(QString("%1").arg(lives));
    QString str="Bricks Left: " + bLeft +"\nLives: " + livesLeft;
    painter.translate(QPoint(w/10, h/20));//location of where to print the string.
     painter.drawText(-textWidth/2, 0, str);

       
       if(bonusCounter%200!=0)
       {painter.drawImage(bonus->getRect(), bonus->getImage());
       }

     bonusCounter++;
  
}

	if(secondLevel==TRUE)//THINGS TO DRAW ON SECOND LEVEL
        {
    		painter.drawImage(tank->getRect(), tank->getImage());
    		painter.drawImage(shooter->getRect(), shooter->getImage());
    		painter.drawImage(rocket->getRect(), rocket->getImage());

   
          	for (int i = 0; i<15; i++)
          	{
			painter.drawImage(bullets[i]->getRect(), bullets[i]->getImage());
          	}

           	for (int d = 0; d < 10; d++)
                {
                    painter.drawImage(bombBullets[d]->getRect(), bombBullets[d]->getImage());
                }

	   	for (int i = 0; i<15; i++)

          	{
	            painter.drawImage(fireBullets[i]->getRect(), fireBullets[i]->getImage());
          	}
        }

        if(thirdLevel==TRUE)//THINGS TO DRAW ON THIRD LEVEL
        {
    		for (int i =0; i < 10; i++)
        	{
			painter.drawImage(sides[i]->getRect(),sides[i]->getImage());
		}

		for (int c =0; c < 10; c++)
        	{
			painter.drawImage(downs[c]->getRect(),downs[c]->getImage());
		}
	}

}

void Game::timerEvent(QTimerEvent *event)//All the movements being commanded in this function.
{
    
    
  if(firstLevel==TRUE)//FIRST LEVEL MOVEMENT
  {
  	obstacle1->autoMove();//moves the obstacles.
  	obstacle2->autoMove();
  	obstacle->autoMove();
        obstacle3->autoMove();
        obstacle4->autoMove();
       
  
   	if(bonusCounter%200==0)
   	{
		int x = rand()%500;
   		int y = rand()%500;
   		bonus->autoMove(x,y);
        }
  }

  if(secondLevel==TRUE)//SECOND LEVEL MOVEMENT
  {
	tank->autoMove();
        shooter->autoMovement();
        rocket->autoMove();

	for (int i =0; i<15; i++)
        { 
	       bullets[i]->autoMoveRight();
               bullets[i]->autoMoveRight();
        }
       
        for (int d =0; d<10; d++)
        { 
		bombBullets[d]->autoMoveRight();
        }

   	for (int i =0; i <15; i++)
  	{		
   		fireBullets[i]->autoMoveUp();
	}
        
  }

  if(thirdLevel==TRUE)//THIRD LEVEL MOVEMENT
  {
       for (int i=0; i <10; i++)
       {
  		sides[i]->autoMoveRight();
  		if (sides[i]->getRect().left()==0)
  		{
     			int y = rand()%800;
			sides[i]->movePositioning(495,y);
		}
	}

 	for (int i=0; i <10; i++)
	{
  		downs[i]->autoMoveDown();
  		if (downs[i]->getRect().bottom()==500)
  		{
     			int y = rand()%800;
			downs[i]->movePositioning(y,5);
		}
	}
  }
 


   checkCollision();//checks for a collision.
   repaint();//repaints everything to screen.
}



void Game::keyPressEvent(QKeyEvent *event)//all input that User puts into keyboard handled through this function.
{
	
	int width = catcher->getWidth();//width of the size of the catcher being returned.
	int height = catcher->getHeight();//height of the size of the catcher being returned.
    switch (event->key()) {
    case Qt::Key_Left:
       {  
         int x = catcher->getRect().x();//returns the current x position of the catcher object.
	if(x>width)
          catcher->moveLeft(x-width);//moves the catcher object to the left however big width is.
        break;
       }
    case Qt::Key_Right:
        { 
          int x = catcher->getRect().x();
          catcher->moveRight(x+width);
        }
        break;

case Qt::Key_Up:
       {  
         int y = catcher->getRect().y();//returns the y position of where the catcher object is.
        catcher->moveTop(y-height);
        break;
       }
    case Qt::Key_Down:
        { 
          int y = catcher->getRect().y();
         catcher->moveBottom(y+height);
        }
        break;
    case Qt::Key_P://pauses the game.
        { 
          pauseGame();
        }
        break;
   case Qt::Key_H://takes you to the next level.
        { secondLevel=TRUE;//enables the next level. So more obstacles are printed at faster speeds.//SECOND WORLD/LEVEL IMPLEMENTED
          lives=10;//lives increased.
          startGame();
        }
        break;
  case Qt::Key_F://takes you to the next level.
        { thirdLevel=TRUE;//enables the next level. So more obstacles are printed at faster speeds.//THRID LEVEL IMPLEMENTED
          lives=10;//lives increased.
          startGame();
        }
        break;
    case Qt::Key_Space:
        { //restarts the game, to the normal level.
          lives = 10; 
          startGame();
        }
        break;
    case Qt::Key_Escape:
        {
          qApp->exit();//exits the game entirely. 
        }
        break;
    case Qt::Key_E:
    {
       if(count<3)
       {lives+=3; count++;}
        break;
     }
    case Qt::Key_C:
    {lives+=3; break;}
    default:
        QWidget::keyPressEvent(event);//takes input from keyboard.
        
      
    }
}



void Game::startGame()//starts the game.
{ 
  if (!gameStarted) {
    obstacle->resetState();
    catcher->resetState();

    for (int i=0; i<32; i++) {//so all the bricks will be printed.when the bricks are on false they are not printed.
      bricks[i]->setDestroyed(FALSE);
    }
    gameOver = FALSE; 
    gameWon = FALSE; 
    gameStarted = TRUE;
    timerId = startTimer(10);
    lives =10;
    bricksLeft=30; 

       bricks[0]=new Brick(80,57);//The diagram of the bricks is being drawn. Where the bricks are being placed.
          bricks[1]=new Brick(160,57);
          bricks[2]=new Brick(240,57);
	bricks[24]=new Brick(320,57);
          

          bricks[3]=new Brick(400,57);
          bricks[4]=new Brick(480,57);
          bricks[5]=new Brick(80,120);
         bricks[25]=new Brick(160,120);
     
          bricks[6]=new Brick(240,120);
          bricks[7]=new Brick(320,120);
          bricks[8]=new Brick(400,120);
          bricks[26]=new Brick(480,120);
	  
          bricks[9]=new Brick(80,180);
          bricks[10]=new Brick(160,180);
          bricks[11]=new Brick(240,180);
         bricks[27]=new Brick(320,180);

         bricks[12]=new Brick(400,180);
          bricks[13]=new Brick(480,180);
          bricks[14]=new Brick(80,240);
          bricks[28]=new Brick(160,240);

         bricks[15]=new Brick(240,240);
          bricks[16]=new Brick(320,240);
          bricks[17]=new Brick(400,240);
         bricks[29]=new Brick(480,240);

         bricks[18]=new Brick(80,320);
          bricks[19]=new Brick(160,320);
          bricks[20]=new Brick(240,320);
         bricks[30]=new Brick(320,320);

         bricks[21]=new Brick(400,320);
          bricks[22]=new Brick(480,320);
          bricks[23]=new Brick(123,380);
         bricks[31]=new Brick(246,380);

        
  obstacle1->movePositioning(5,380);//resets the position of all the obstacles.
  
  obstacle2->movePositioning(280,100);
  
  obstacle3->movePositioning(3,3);
 
  obstacle4->movePositioning(250,201);
  
           
  }
}

void Game::pauseGame()// pauses the game.
{
  if (paused) {
    timerId = startTimer(10);
    paused = FALSE;
  } else {
    paused = TRUE;
    killTimer(timerId); 
   }
}

void Game::stopGame()//stops the game. setting each bool variable to true or false depending on if they won or not.
{
  killTimer(timerId);    
  gameOver = TRUE;      
  gameStarted = FALSE;
}

void Game::victory()//if all 15 blocks are destroyed then this message pops up.
{
  killTimer(timerId);
  gameWon = TRUE;  
  gameStarted = FALSE;
}

void Game::checkCollision()//checks all the collisions of the game.
{
    if ((catcher->getRect()).intersects(bonus->getRect()))
    { 
        lives--;
        bonus->autoMove(-200,-200);
     }

   if ((tank->getRect().top())== (catcher->getRect().top()))
   {
       bullets[ammo]->movePositioning(-10, tank->getRect().top());
       bullets[ammo]->setXDirection(1);
       ammo++;
       
       if(ammo == 14)
       {
          ammo=0;
       }
    }

   if ((rocket->getRect().x())== (catcher->getRect().x()))
   {
       fireBullets[fireAmmo]->movePositioning(rocket->getRect().x(),-10);
       fireBullets[fireAmmo]->setYDirection(3);
       fireAmmo++;

        if(fireAmmo == 14)
       {
          fireAmmo=0;
       }
       fireBullets[fireAmmo]->movePositioning(rocket->getRect().x()-15,-10);
       fireBullets[fireAmmo]->setYDirection(5);
       fireAmmo++;
        if(fireAmmo == 14)
       {
          fireAmmo=0;
       }
       fireBullets[fireAmmo]->movePositioning(rocket->getRect().x()+15,-10);
       fireBullets[fireAmmo]->setYDirection(5);
       fireAmmo++;
       if(fireAmmo == 14)
       {
          fireAmmo=0;
       }
    }

   if ((shooter->getRect().top())== (catcher->getRect().top()))
   {
        if(bombAmmo == 9)
       {
          bombAmmo=0;
       }

       bombBullets[bombAmmo]->movePositioning(510, shooter->getRect().top());
       bombBullets[bombAmmo]->setXDirection(-6);
       bombAmmo++;
   }
        
  for (int i=0, j=0; i<32; i++) {
    if (bricks[i]->isDestroyed()) {
      j++;
    }
    if (j==30) //if all 15 blocks are destroyed then you win the game.
      victory();
  }

  if ((catcher->getRect()).intersects(obstacle->getRect())) //checking intersection with each obstacle.
  {
    lives--;
    obstacle->movePositioning(5,5); //if intersection occurs, the obstacle is instantly moved to another position so more then one collission will not be counted.
  }

   if ((catcher->getRect()).intersects(obstacle1->getRect())) 
  {
    lives--;
    obstacle1->movePositioning(5,380);
  }

   if(thirdLevel==TRUE)
   {
   for (int i =0; i<10; i++)
   {
      if ((catcher->getRect()).intersects(sides[i]->getRect())) 
      {lives--; sides[i]->randomMove();}
      if ((catcher->getRect()).intersects(downs[i]->getRect())) 
      {lives--; downs[i]->randomMovement();}
      
   } 
}  

    if(secondLevel==TRUE)
    {
   for (int i = 0; i<15; i++)
   {
     if ((catcher->getRect()).intersects(bullets[i]->getRect()))
     {
        lives--; bullets[i]->movePositioning(-200,-200); bullets[i]->setXDirection(0);
     }  
     
     if ((catcher->getRect()).intersects(fireBullets[i]->getRect()))
     {
        lives--; fireBullets[i]->movePositioning(-200,-200); fireBullets[i]->setYDirection(0);
	}
     
   }

   for (int i = 0; i<10; i++)
   {
       if ((catcher->getRect()).intersects(bombBullets[i]->getRect())) 
       {lives--; bombBullets[i]->movePositioning(-200,-200); bombBullets[i]->setXDirection(0);}
   }
}
  

  if ((catcher->getRect()).intersects(obstacle2->getRect())) 
  {
    lives--;
    obstacle2->movePositioning(280,100);
  }

  if ((catcher->getRect()).intersects(obstacle3->getRect())) 
  {
    lives--;
    obstacle3->movePositioning(10,10);
  }

  if ((catcher->getRect()).intersects(obstacle4->getRect())) 
  {
    lives--;
    obstacle4->movePositioning(234,251);
  }
  

  if(lives<=0)//if you lose all lives you lose.
  {
    stopGame();
  }


  for (int i=0; i<32; i++) {
    if ((catcher->getRect()).intersects(bricks[i]->getRect())) {//if intersect with brick it disappears.

     

        bricks[i]->setDestroyed(TRUE);
        bricksLeft--;
        bricks[i]->movePositioning(-100,-100);
      
    }

   if(bricksLeft==0)//win if bricksLeft are 0.
   {
	goHarder=FALSE;	
     victory();
     
   }

  
  }

}






