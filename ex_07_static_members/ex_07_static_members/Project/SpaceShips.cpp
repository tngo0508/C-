#include "SpaceShips.h"

int SpaceShips::totalSpaceShips;
int SpaceShips::totalPoints;

// Function definitions
SpaceShips::SpaceShips()
{
	points = 0;
	bonus = false;
	totalSpaceShips = 0;
	totalPoints = 0;
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
	--totalSpaceShips;
	totalPoints += points;
}