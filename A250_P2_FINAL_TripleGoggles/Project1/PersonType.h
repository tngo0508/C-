#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>
#include <iostream>

using namespace std;

class PersonType
{
public:
	PersonType();
	PersonType(const string &newFirst, const string &newLast, 
		int newSSN);

	void setPersonInfo(const string &newFirstName,
		const string &newLastName, int newSSN);

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
	int ssn;
};

#endif