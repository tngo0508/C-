#include "PersonType.h"

PersonType::PersonType()
{
	SSN = 0;
}

PersonType::PersonType(const string& newFirst, const string& newLast, int newSSN)
{
	firstName = newFirst;
	lastName = newLast;
	SSN = newSSN;
}

void PersonType::setPersonInfo(const string& newFirst, const string& newLast, int newSSN)
{
	firstName = newFirst;
	lastName = newLast;
	SSN = newSSN;
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
	return SSN;
}

void PersonType::printName() const
{
	cout << lastName << ", " << firstName << endl;
}

void PersonType::printPersonInfo() const
{
	printSSN();
	cout << " ";
	printName();
}

void PersonType::printSSN() const
{
	int group1, group2, group3;
	int temp;

	group1 = SSN / 1000000;
	temp = SSN % 1000000;
	group2 = temp / 10000;
	group3 = temp % 10000;

	cout << group1 << "-" << group2 << "-" << group3;
}

PersonType::~PersonType()
{
}