/*
Ngo, Tan
CS A250
February 8, 2016

Project 2
*/

#include "PersonType.h"
#include "CandidateType.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	PersonType john;
	john.setPersonInfo("John", "Smith", 123456789);
	john.printName();
	john.printPersonInfo();
	john.printSSN();
	cout << endl;
	john.~PersonType();

	PersonType jane("Jane", "Smith", 987654321);
	//jane.setpersonInfo("Jane", "Smith", 987654321);
	jane.printName();
	jane.printPersonInfo();
	jane.printSSN();
	jane.~PersonType();

	//cout << jane.getFirstName() << endl;
	//cout << jane.getLastName() << endl;
	//cout << jane.getSSN() << endl;

	cout << endl;
	system("Pause");
	return 0;
}