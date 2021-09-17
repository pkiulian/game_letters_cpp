#include "Subject.h"
#include <string>
#include <iostream>

Subject::Subject()
{
}

Subject::~Subject()
{
}


void Subject::attach(Observer* observer){
	this->observer=observer;
}
void Subject::detach(Observer*){
	delete this->observer;
}
void Subject::notify(std::string str){
	this->observer->update(str);
}
