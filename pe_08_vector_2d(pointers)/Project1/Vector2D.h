#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
#include <string>

using namespace std;

class Vector2D
{
	friend ostream& operator << (ostream& o, const Vector2D& v);
public:
	Vector2D();
	Vector2D(int newX, int newY);

	int operator * (const Vector2D& otherVector) const;
	bool operator == (const Vector2D& otherVector) const;

	~Vector2D();
private:
	int x;
	int *y;
};

#endif