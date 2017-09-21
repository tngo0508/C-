//SalariedEmployee.cpp 
//This is the implementation for the class SalariedEmployee.

#include "SalariedEmployee.h"

	//default constructor
SalariedEmployee::SalariedEmployee( ) 
{
    salary = 0.0;
}

	//overloaded constructor
SalariedEmployee::SalariedEmployee(const string& newSSN,
             double newWeeklyPay) :Employee(newSSN)
{
	salary = newWeeklyPay;
}

	//getSalary
double SalariedEmployee::getSalary( ) const 
{
    return salary;
}

	//setSalary
void SalariedEmployee::setSalary(double newSalary)
{
    salary = newSalary;
}

	//print
void SalariedEmployee::print() const
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

	cout << "Salary: $" << salary << endl;
}

	//destructor
SalariedEmployee::~SalariedEmployee()
{
}