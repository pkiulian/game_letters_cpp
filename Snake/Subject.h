#ifndef SUBJECT_H
#define SUBJECT_H
#include "Observer.h"
#include <iostream>
#include <string>

class Subject
{
public:
	Subject();
	virtual ~Subject();
	virtual void attach(Observer*);
	virtual void detach(Observer*);
	virtual void notify(std::string str);
	
protected: 
	Observer* observer = {};
};

#endif // SUBJECT_H
