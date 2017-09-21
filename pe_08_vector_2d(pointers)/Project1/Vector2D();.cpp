#include "Vector2D.h"

ostream& operator << (ostream& o, const Vector2D& v)
{
	o << "< " << v.x << ", " << *(v.y) << ">";
	return o;
}

Vector2D::Vector2D()
{
	x = 0;
	y = new int;
	*y = 0;
}

Vector2D::Vector2D(int newX, int newY)
{
	x = newX;
	y = new int;
	*y = newY;
}

int Vector2D::operator * (const Vector2D& otherVector) const
{
	return ((x * otherVector.x) + ((*y) * (*(otherVector.y))));
}

bool Vector2D::operator == (const Vector2D& otherVector) const
{
	return (x == otherVector.x && *y == *(otherVector.y));
}

Vector2D::~Vector2D()
{
	delete y;
	y = NULL;
}