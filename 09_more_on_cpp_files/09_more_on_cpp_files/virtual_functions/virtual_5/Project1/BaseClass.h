#ifndef BASECLASS_H
#define BASECLASS_H

#include <iostream>
#include <string>
using namespace std;

class BaseClass
{
public:
	BaseClass();
	BaseClass(const string& bVar);

	virtual void print() const;

	virtual ~BaseClass();

private:
	string baseVar;
};

#endif