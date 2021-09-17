#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <list>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "Renderer.h"




Renderer::Renderer(Game* game)
{
	this->_subject=game;	
	this->_subject->attach(this);
}

Renderer::~Renderer()
{
	this->_subject->detach(this);
}

void Renderer::draw(){
	std::list<int> X;  
	std::list<int> Y;  
	
	

	//columns
	for (int i=0;i<this->_subject->mX*2+2;i++){
		if (i%2==1) 
			X.push_back(i);
	}
	//rows
	for (int i=3;i<this->_subject->mY*2+3;i++){
		if (i%2==0)
			Y.push_back(i);
	}
 
    std::cout<<X.size()<<std::endl;
	std::cout<<Y.size()<<std::endl;
 
 
    std::list<int>::iterator itX = X.begin();
	std::list<int>::iterator itY = Y.begin();
	
	// initial position:
	itY++;	
	itY++;	
	itY++;	
	itY++;	
	itX = X.begin();
	
	int snakeLength=5;
	int timeSleepMS=500;
	
	int myX[snakeLength]; //columns
	int myY[snakeLength];  // rows
	
	int randomnLine[snakeLength*4];
	int randomnColumn[snakeLength*4];
	
	std::srand(std::time(nullptr));
	for (int i=0;i<snakeLength*4;i++){		
		randomnLine[i]=std::rand()%(2*(this->_subject->mY))+3;
		if (randomnLine[i]%2==1){
			randomnLine[i]+=1;
		}
		randomnColumn[i]=std::rand()%(2*(this->_subject->mX));
		if (randomnColumn[i]%2==0){
			randomnColumn[i]+=1;
		}
	}
	
	for (int i=0;i<snakeLength*4;i++){		
		this->_subject->goTo (randomnColumn[i], randomnLine[i]);
		std::cout<<(char)(65+i)<<std::flush;
	}
	
	for (int j=0;j<snakeLength;j++,itX++)
	{			
        myX[j]=*itX;
		myY[j]=*itY;
		this->_subject->goTo (*itX, *itY );
		std::cout<<(char)178;
	}		
	
	
    std::string up= "Up pressed";
	std::string right= "Right Pressed";
	std::string left= "Left Pressed";
	std::string down = "Down Pressed";

	bool obstacleAte = false;
	
	int k =0;
	while (true)
	{		
		double improveSpeedSnake = 0.15;
		
		if (obstacleAte==true){
			int sunstracted = improveSpeedSnake*timeSleepMS;
			timeSleepMS-=sunstracted; // speed up with 5% from the current speed					
		}
		
		std::this_thread::sleep_for(std::chrono::milliseconds(timeSleepMS));							
			
		obstacleAte = false;
		if (this->strValueReceived.compare(up)==0)
		{						
			shiftSnake(myX, myY, snakeLength);		
			int shiftedHead =  (myY[snakeLength-1]-2);			
			if (shiftedHead>3)
			{
				myY[snakeLength-1]=shiftedHead;
			} else {
				shiftedHead =  myY[snakeLength-1]+this->_subject->mY*2-2;	// ok				
				myY[snakeLength-1]=shiftedHead;	
			}			
		} 
		else if (this->strValueReceived.compare(down)==0)
		{					
			shiftSnake(myX, myY, snakeLength);			
			int shiftedHead =  (myY[snakeLength-1]+2);			
			if (shiftedHead<_subject->mY*2+3)
			{
				myY[snakeLength-1]=shiftedHead;
			} else {
				shiftedHead =  4;	
				myY[snakeLength-1]=shiftedHead;	// ok
			}
						
		}
		else if (this->strValueReceived.compare(right)==0) 
		{			
			
			shiftSnake(myX, myY, snakeLength);			
			int shiftedHead =  myX[snakeLength-1]+2; 
			if (shiftedHead<this->_subject->mX*2+2)
			{				
				myX[snakeLength-1]=shiftedHead;
			} else {
				shiftedHead =  1;	
				myX[snakeLength-1]=shiftedHead;	// ok
			}
		} 
		else if (this->strValueReceived.compare(left)==0)
		{
			shiftSnake(myX, myY, snakeLength);
			int shiftedHead = myX[snakeLength-1]-2;
			if (shiftedHead > 0)
			{
				myX[snakeLength-1]=myX[snakeLength-1]-2;
			}
			else 
			{
				shiftedHead =  this->_subject->mX*2+2-1;
				myX[snakeLength-1]=shiftedHead;	
			}			
		}
		for (int i=0;i<snakeLength*2;i++)
		{		
				if (randomnColumn[i]==myX[snakeLength-1] &&  randomnLine[i]==myY[snakeLength-1])
				{					
					obstacleAte = true;	
					this->_subject->goTo (70+k, 0);					
					std::cout<<(char)(65+i);					
					std::this_thread::sleep_for(std::chrono::milliseconds(40));	
					k+=2;
					break;
				}
		}
		this->_subject->goTo (myX[snakeLength-1], myY[snakeLength-1]);
		std::cout<<(char)178<<std::flush;
	}	
}

void Renderer::shiftSnake(int myX[], int myY[], int snakeLength) 
{	
		this->_subject->goTo (myX[0], myY[0]);
		std::cout<<(char)0<<std::flush;	
		for (int i=0;i<snakeLength-1;i++)
		{
			myY[i]=myY[1+i];
			myX[i]=myX[1+i];					
		}	
}

std::thread Renderer::startDraw(){
	return std::thread(&Renderer::draw, this);	
}

void Renderer::update(std::string str){
	this->strValueReceived=str;	
}
