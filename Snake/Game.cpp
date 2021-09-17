#include "Game.h"
#include <stdio.h>

Game::Game() {
	std::cout << "Snake Games for very small kids. Collected Letters: " << std::endl;
	std::cout << "If you want to exit press 'e' then enter." << std::endl;

}

Game::~Game() {

}

void Game::startPlay() {
	executeCommand();
}

void Game::executeCommand() {
	while (true) {
		switch (key = getchar()) {
		case KEY_UP:
			this->observer->update("Up pressed");
			break;
		case KEY_DOWN:
			this->observer->update("Down Pressed");
			break;
		case KEY_LEFT:
			this->observer->update("Right Pressed");
			break;
		case KEY_RIGHT:
			this->observer->update("Left Pressed");
			break;
		}
		if (key == 'e') {
			break;
		}
	}
}

void Game::drawAMatrix(int lineSize, int colSize, ScrollPosition &initialPos) {
	this->mX = lineSize;
	this->mY = colSize;
	for (int i = 0; i < colSize; i++) {
		if (i >= 1) {
			drawALineOfCells(lineSize, initialPos, true);
		} else {
			drawALineOfCells(lineSize, initialPos, true);
		}
		initialPos.setX(1);
		initialPos.setY(initialPos.getY() + 2);
	}
}

void Game::drawALineOfCells(int lineSize, ScrollPosition &initialPos, bool overrideLine) {
	for (int i = 0; i < lineSize; i++) {
		if (i == 0)
			drawACell(initialPos, true, overrideLine);
		drawACell(initialPos, true, overrideLine);
	}
}

void Game::drawACell(ScrollPosition &initialPos, bool overrideCol, bool overrideLine) {

	if (overrideCol)
		initialPos.setX(initialPos.getX() - 1);
	goTo(initialPos.getX(), initialPos.getY());
	int x = initialPos.getX();
	int y = initialPos.getY();
	if (overrideCol && overrideLine) {
		std::cout << cross;
		x += 1;
	} else {
		std::cout << cornerUpperLeft;
		x += 1;
	}
	std::cout << horizontalLineCell;
	x += 1;
	if (overrideCol && overrideLine) {
		std::cout << cross;
		x += 1;
	} else {
		std::cout << cornerUpperRight;
		x += 1;
	}
	y++;
	x -= 3;
	goTo(x, y);
	std::cout << verticalLineCell;
	x += 1;
	std::cout << " ";
	x += 1;
	std::cout << verticalLineCell;
	x += 1;
	y++;
	x -= 3;
	goTo(x, y);
	if (overrideCol && overrideLine) {
		std::cout << cross;
		x += 1;
	} else {
		std::cout << cornerBottomLeft;
		x += 1;
	}
	std::cout << horizontalLineCell;
	x += 1;
	if (overrideCol && overrideLine) {
		std::cout << cross;
		x += 1;
	} else {
		std::cout << cornerBottomRight;
		x += 1;
	}
	y++;
	y = y - 3;
	initialPos.setX(x);
	initialPos.setY(y);
}

void Game::goTo(short x, short y) {
	printf("\033[%d;%dH",x+1,y+1);
}

