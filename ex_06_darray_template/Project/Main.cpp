//This program creates partially-filled arrays
//  of integers.

#include "DArray.h"

#include <iostream>
using namespace std;

int main( )
{
	//Ask the user to enter the capacity
	cout << "Enter the capacity of the array: ";
	int cap;
	cin >> cap;

	//Create the new array
	DArray a1(cap);

	//Ask the user to enter values for the array
	cout << "\nEnter positive numbers "
		<< "(enter -1 to quit)" << endl;
	int n;
	cin >> n;
	while(n != -1)
	{
		a1.addElement(n);
		cin >> n;
	}

	cout << endl;
	system("Pause");
    return 0;
}

