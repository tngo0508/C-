#include "PersonType.h"

#include <iostream>
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

void PersonType::setpersonInfo(const string& newFirst, const string& newLast, int newSSN)
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
	cout << firstName << endl;
	cout << lastName << endl;
}
void PersonType::printSSN() const
{
	cout << ssn << endl;
}

PersonType::~PersonType()
{

}