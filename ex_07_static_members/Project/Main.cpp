#include "SpaceShips.h"
#include <iostream>
using namespace std;

int main()
{
	SpaceShips s0, s1, s2, s3, s4, s5, s6, s7, s8, s9;

	s0.addSpaceShip(10, false);
	s1.addSpaceShip(10, false);
	s2.addSpaceShip(20, false);
	s3.addSpaceShip(30, true);
	s4.addSpaceShip(10, true);
	s5.addSpaceShip(10, true);
	s6.addSpaceShip(20, true);
	s7.addSpaceShip(10, false);
	s8.addSpaceShip(10, false);
	s9.addSpaceShip(10, false);

	cout << "Total number of space ships on screen: " << s0.getTotalSpaceShips() << endl;
	cout << "Total points: " << s0.getTotalPoint() << endl;

	cout << "\nGame begins..." << endl;
	cout << "Hit... successful" << endl;
	s0.~SpaceShips();
	if (s0.hasBonus()) cout << "\tBONUS!!!" << endl;
	cout << "\tTotal number of space ships on screen: " << s0.getTotalSpaceShips() << endl;
	cout << "\tTotal points: " << s0.getTotalPoint() << endl;
	
	cout << "Hit... unsuccessful" << endl;
	cout << "Hit... successful" << endl;
	s3.~SpaceShips();
	if (s3.hasBonus()) cout << "\tBONUS!!!" << endl;
	cout << "\tTotal number of space ships on screen: " << s0.getTotalSpaceShips() << endl;
	cout << "\tTotal points: " << s0.getTotalPoint() << endl;
	
	cout << "Hit... unsuccessful" << endl;
	cout << "Hit... unsuccessful" << endl;
	cout << "Hit... unsuccessful" << endl;
	cout << "Hit... unsuccessful" << endl;
	cout << "Hit... unsuccessful" << endl;
	cout << "Hit... unsuccessful" << endl;
	cout << "Hit... unsuccessful" << endl;		
	cout << "Hit... successful" << endl;
	s9.~SpaceShips();
	if (s9.hasBonus()) cout << "\tBONUS!!!" << endl;
	cout << "\tTotal number of space ships on screen: " << s0.getTotalSpaceShips() << endl;
	cout << "\tTotal points: " << s0.getTotalPoint() << endl;
	
	cout << "Hit... unsuccessful" << endl;
	cout << "Hit... unsuccessful" << endl;
	cout << "Hit... unsuccessful" << endl;
	cout << "Hit... successful" << endl;
	s2.~SpaceShips();
	if (s2.hasBonus()) cout << "\tBONUS!!!" << endl;
	cout << "\tTotal number of space ships on screen: " << s0.getTotalSpaceShips() << endl;
	cout << "\tTotal points: " << s0.getTotalPoint() << endl;
	
	cout << "Hit... successful" << endl;
	s4.~SpaceShips();
	if (s4.hasBonus()) cout << "\tBONUS!!!" << endl;
	cout << "\tTotal number of space ships on screen: " << s0.getTotalSpaceShips() << endl;
	cout << "\tTotal points: " << s0.getTotalPoint() << endl;
	
	cout << "Hit... successful" << endl;
	s7.~SpaceShips();
	if (s7.hasBonus()) cout << "\tBONUS!!!" << endl;
	cout << "\tTotal number of space ships on screen: " << s0.getTotalSpaceShips() << endl;
	cout << "\tTotal points: " << s0.getTotalPoint() << endl;

	cout << endl;
	system("Pause");
	return 0;
}

