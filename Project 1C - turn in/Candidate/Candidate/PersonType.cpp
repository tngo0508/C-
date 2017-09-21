#include "PersonType.h"

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

void PersonType::setPersonInfo(const string& newFirst, const string& newLast, int newSSN)
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
	cout << (ssn / 1000000) << "-" << ((ssn % 1000000) / 10000) << "-" << (ssn % 10000);
}

PersonType::~PersonType()
{
}