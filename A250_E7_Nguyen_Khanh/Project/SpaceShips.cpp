/*
Ngo, Nhat Tan
Nguyen, Khanh
CS A250
April 11, 2016

Exercise 7: Static Members
*/

#include "SpaceShips.h"

int SpaceShips::totalSpaceShips = 0;
int SpaceShips::totalPoints = 0;
// Function definitions

SpaceShips::SpaceShips()
{
	points = 0;
	bonus = false;
	++totalSpaceShips;
}

SpaceShips::SpaceShips(int newPoints, bool newBonus)
{
	points = newPoints;
	bonus = newBonus;
	++totalSpaceShips;
}

void SpaceShips::addSpaceShip(int newPoints, bool newBonus)
{
	points = newPoints;
	bonus = newBonus;
	++totalSpaceShips;
}

int SpaceShips::getTotalSpaceShips()
{
	return totalSpaceShips;
}

int SpaceShips::getTotalPoint()
{
	return totalPoints;
}

bool SpaceShips::hasBonus() const
{
	return bonus;
}

SpaceShips::~SpaceShips()
{
	totalPoints += points;
	--totalSpaceShips;
}