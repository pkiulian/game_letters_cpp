#ifndef SCROLLPOSITION
#define SCROLLPOSITION

class ScrollPosition
{
public:
	ScrollPosition(char, char);
	~ScrollPosition();
	void setX(char x) {this->x=x;}
	void setY(char y) {this->y=y;}
	inline char getX(){return this->x;}
	inline char getY(){return this->y;}

private: 
	char x;
	char y;
};



#endif // SCROLLPOSITION
