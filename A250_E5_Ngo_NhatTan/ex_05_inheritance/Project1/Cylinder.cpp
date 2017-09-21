#include "Cylinder.h"

Cylinder::Cylinder()
{
	height = 0;
}

Cylinder::Cylinder(double newRadius, double newPi, double newHeight) 
	: Circle(newRadius, newPi)
{
	height = newHeight;
}

double Cylinder::getHeight() const
{
	return height;
}

void Cylinder::setHeight(double newHeight)
{
	height = newHeight;
}

double Cylinder::calculateVolume()
{
	return (getPi() * getRadius() * getRadius()) * height;
}

void Cylinder::printDimensions() const
{
	Circle::printDimensions();
	cout << "Height: " << height << endl;
}

Cylinder::~Cylinder()
{
}