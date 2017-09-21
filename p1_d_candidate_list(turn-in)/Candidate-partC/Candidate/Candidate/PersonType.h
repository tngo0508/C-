#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <iostream>
#include <string>
using namespace std;

class PersonType
{
public:
	PersonType();
	PersonType(const string& newFirst, const string& newLast, int newSSN);

	void setPersonInfo(const string& newFirst, const string& newLast, int newSSN);

	string getFirstName() const;
	string getLastName() const;
	int getSSN() const;

	void printName() const;
	void printPersonInfo() const;
	void printSSN() const;

	~PersonType();

private:
	string firstName;
	string lastName;
	int SSN;
};

#endif