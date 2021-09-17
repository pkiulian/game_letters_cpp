#ifndef RENDERERE_H
#define RENDERERE_H

#include <string>
#include <iostream>
#include "Observer.h"
#include "Game.h"
#include "Subject.h"

//forward declaration
class Subject;
class Game;

class Renderer  : public Observer
{
public:
	Renderer(Game*);
	~Renderer();
	void draw();
	std::thread startDraw();
	void update(std::string str);
	
private: 
	Game* _subject;
	std::string strValueReceived;
	int snakeSize=5;
	
	void shiftSnake(int myX[], int myY[], int snakeLenghth);
};

#endif // RENDERERE_H
