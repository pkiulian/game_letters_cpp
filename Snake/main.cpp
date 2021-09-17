#include<iostream>
#include<ctime>
#include<vector>
#include <stdio.h>
//#include <conio.h>
#include <thread>

#include "ScrollPosition.h"
#include "Game.h"
#include "Renderer.h"
#include "Observer.h"
using namespace std;




// starting the game position.
char x = 1;
char y = 3;



//void executeCommand();

int main()
{
	std::system( "gnome-terminal --window" );
	
	// this is the Subject. 
	Game *game = new Game();	
	
	// this renderer is the observer	
	Renderer *renderer = new Renderer(game);		

	ScrollPosition *p = new ScrollPosition(x, y);		
		
	// Game is the the Subject, that is observed
	// 20 for the number of lines 
	// 50 for the number of columns
	game->drawAMatrix(50, 20, *p); 	
	
	std::thread drawThread = renderer->startDraw();			
	cout<<"\n\n\n\n"<<endl;
	game->startPlay();

	delete p;
	delete renderer;
	//**************************************************************************************
	
	
	delete game;
	return 0;
}






  
