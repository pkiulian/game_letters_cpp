#ifndef GAME_H
#define GAME_H

#include<iostream>
#include<ctime>
#include<vector>
#include <stdio.h>
#include <thread>


#include "Subject.h"
#include "Observer.h"
#include "ScrollPosition.h"
#include "Renderer.h"


#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 77
#define KEY_RIGHT 75


class Game : public Subject
{
public:

	int mX;
	int mY;

	Game();
	~Game();
	void drawAMatrix(int, int, ScrollPosition&);
	void startPlay();
	void goTo(short, short);
	
private:
	

	char key;

	const char horizontalLineCell = (char)196;
	const char verticalLineCell = (char)124;
	const char cornerUpperRight = (char)191;
	const char cornerUpperLeft = (char)218;
	const char cornerBottomRight = (char)217;
	const char cornerBottomLeft = (char)192;

	const char midUp = (char)194;
	const char midBottom = (char)193;
	const char cross = (char)197;

	void drawALineOfCells(int, ScrollPosition&, bool);
	void drawACell(ScrollPosition&, bool, bool);
	void executeCommand();
	

};

#endif // GAME_H
