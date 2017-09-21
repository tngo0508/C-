#include "Circle.h"

#ifndef CYLINDER_H
#define CYLINDER_H

#include <iostream>
#include <string>

using namespace std;

class Cylinder : public Circle
{
public:
	Cylinder();
	Cylinder(const double newRadius, const double newPi, double newHeight);
	double getHeight() const;
	void setHeight(double newHeight);
	double calculateVolume();
	void printDimensions() const;
	~Cylinder();
private:
	double height;
};

#endif
