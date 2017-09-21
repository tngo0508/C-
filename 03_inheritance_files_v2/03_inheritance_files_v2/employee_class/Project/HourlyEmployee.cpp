//hourlyemployee.cpp 
//Implementation for the class HourlyEmployee.

#include "HourlyEmployee.h"

	//default constructor
HourlyEmployee::HourlyEmployee() 
{
	//Only need to set up the var of this class.
	hourlyRate = 0;
}

	//overloaded constructor
HourlyEmployee::HourlyEmployee
			(const string& newSSN, double newRate)
			 :Employee(newSSN)
{
	//No need to set ssn.
	//Only need to set up the var of this class.
	hourlyRate = newRate;
}

	//setRate
void HourlyEmployee::setRate(double newRate)
{
    hourlyRate = newRate;
}

	//getRate
double HourlyEmployee::getRate( ) const
{
    return hourlyRate;
}

	//print
void HourlyEmployee::print() const
{
	/* 
		Note that you cannot access the parent's private 
		member variable, because it is private. 
		You have two choices:
		1) Use the parent's print function if it prints in
			the format you need.
		2) Use the parent's access function if you need a
			different format.
	*/
	//printing the output using the parent's accessor function
	cout << "Using accessor function...\n";
	cout << "SSN: " << getSSN() << endl;
	
	cout << endl;
	
	//printing the output using the parent's print function
	cout << "Using parent class print function...\n"; 
	Employee::print();
	
	cout << "Rate: $" << hourlyRate << endl;
}

	//destructor
HourlyEmployee::~HourlyEmployee()
{}






