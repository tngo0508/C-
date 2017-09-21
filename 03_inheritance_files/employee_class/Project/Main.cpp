#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	cout << "HOURLY EMPLOYEE\n\n";

	//Create an object of the HourlyEmployee class
	HourlyEmployee john("111-22-3333", 16.75);
	
	//Call a public base-class member function
	cout << john.getSSN() << endl;

	cout << endl;

	//Call public derived-class member functions
	john.setRate(20.00);
	cout << fixed << setprecision(2) << "New rate: $" 
		<< john.getRate() << endl;

	//Call function print from the derived class
	cout << "Call function print from the derived class...\n\n";
	john.print();

	cout << "\n-------------------------------\n";

	cout << "\nSALARIED EMPLOYEE\n\n";

	//Create an object of the SalariedEmployee class
	SalariedEmployee jane("999-88-7777", 400.00);
	
	//Call a public base-class member function
	cout << jane.getSSN() << endl;

	//Call public derived-class member functions
	jane.setSalary(500.00);
	cout << fixed << setprecision(2) << "New salary: $" 
		<< jane.getSalary() << endl;

	cout << endl;

	//Call function print from the derived class
	cout << "Call function print from the derived class...\n\n";
	john.print();

    cout << endl;
    system("Pause");
    return 0;
}


