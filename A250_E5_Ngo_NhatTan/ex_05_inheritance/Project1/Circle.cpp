#include "Circle.h"

Circle::Circle()
{
	radius = 0.0;
	pi = 3.142;
}

Circle::Circle(double newRadius, double newPi)
{
	radius = newRadius;
	pi = newPi;
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getPi() const
{
	return pi;
}

void Circle::setRadius(double newRadius)
{
	radius = newRadius;
}

void Circle::setPi(double newPi)
{
	pi = newPi;
}

double Circle::calculateArea()
{
	return (pi * radius * radius);
}

void Circle::printDimensions() const
{
	cout << "Radius: " << radius;
	cout << endl;
	cout << "Pi: " << pi << endl;
}

Circle::~Circle()
{
}