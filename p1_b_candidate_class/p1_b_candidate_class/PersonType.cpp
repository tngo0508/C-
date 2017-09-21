#include "PersonType.h"

#include <iostream>
#include <cmath>
using namespace std;

PersonType::PersonType()
{
	ssn = 0;
}

PersonType::PersonType(const string& newFirst, const string& newLast, int newSSN)
{
	firstName = newFirst;
	lastName = newLast;
	ssn = newSSN;
}

string PersonType::getFirstName() const
{
	return firstName;
}

string PersonType::getLastName() const
{
	return lastName;
}

int PersonType::getSSN() const
{
	return ssn;
}

void PersonType::setPersonInfo(const string& newFirst, const string& newLast, int newSSN)
{
	firstName = newFirst;
	lastName = newLast;
	ssn = newSSN;
}

void PersonType::printName() const
{
	cout << lastName << ", " << firstName << endl;
}

void PersonType::printPersonInfo() const
{
	PersonType::printSSN();
	cout << " " << firstName << " " << lastName;
	cout << endl;

}

void PersonType::printSSN() const
{
	int group1, group2, group3;
	int temp;

	group1 = ssn / 1000000;
	temp = ssn % 1000000;
	
	group2 = temp / 10000;
	group3 = temp % 10000;

	cout << group1 << "-" << group2 << "-" << group3;

}

PersonType::~PersonType()
{
}