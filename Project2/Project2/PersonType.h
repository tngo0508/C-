#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>
#include <iostream>

using namespace std;

class PersonType
{
public:
	PersonType();
	PersonType(const string& newFirst, const string& newLast, int newSS);

	string getFirstName() const;
	string getLastName() const;
	int getSSN() const;

	void setpersonInfo(const string& newFirst, const string& newLast, int newSSN);
	
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