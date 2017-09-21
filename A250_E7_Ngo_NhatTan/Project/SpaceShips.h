#ifndef SPACESHIPS_H
#define SPACESHIPS_H

#include <iostream>

using namespace std;

const int BONUS = 50;

class SpaceShips
{
public:

	//Function declarations
	SpaceShips();
	SpaceShips(int, bool);
	void addSpaceShip(int, bool);
	static int getTotalSpaceShips();
	static int getTotalPoint();
	bool hasBonus() const;
	~SpaceShips();
private:
	static int totalSpaceShips;
	static int totalPoints;	
	int points;
	bool bonus;
};

#endif