#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>

using namespace std;

class Circle
{
public:
	Circle();
	Circle(double newRadius, double newPi);
	double getRadius() const;
	double getPi() const;
	void setRadius(double newRadius);
	void setPi(double newPi);
	double calculateArea();
	void printDimensions() const;
	~Circle();
private:
	double radius;
	double pi;
};

#endif
