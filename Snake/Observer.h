

#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include <string>

class Subject;

class Observer
{
public:
	Observer();
	virtual ~Observer();
	virtual void  update(std::string str)=0;
};

#endif // OBSERVER_H
