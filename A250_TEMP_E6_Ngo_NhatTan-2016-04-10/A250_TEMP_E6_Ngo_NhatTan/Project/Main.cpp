//This program creates partially-filled arrays
//  of integers.

#include "DArray.h"
#include "DArray.cpp"

#include <iostream>
using namespace std;

template<typename T>
bool operator==(const DArray<T>& Array, const DArray<T>& otherArray);

int main( )
{
	//Ask the user to enter the capacity
	cout << "Enter the capacity of the array: ";
	int cap;
	cin >> cap;

	//Create the new array
	DArray<int> a1(cap);

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

	//Ask the user to enter the capacity
	cout << "Enter the capacity of the array2: ";
	int cap1;
	cin >> cap1;

	//Create the new array
	DArray<int> a2(cap1);

	//Ask the user to enter values for the array
	cout << "\nEnter positive numbers "
		<< "(enter -1 to quit)" << endl;
	int n1;
	cin >> n1;
	while (n1 != -1)
	{
		a2.addElement(n1);
		cin >> n1;
	}

	if (!a1.isEmpty() && !a2.isEmpty())
	{
		cout << a1[3];
		cout << endl;
		cout << a1 << endl;

		cout << a1.getCapacity() << endl;
		cout << a1.getElement(3) << endl;
		a1.deleteElement(1);

		cout << a1 << endl;

		cout << (a1 == a2);
	}
	cout << endl;
	system("Pause");
    return 0;
}

template<typename T>
bool operator==(const DArray<T>& Array, const DArray<T>& otherArray) 
{
	if (Array.getUsed() != otherArray.getUsed())
		return false;
	else
	{
		for (int i = 0; i < Array.getCapacity(); ++i)
		{
			if (Array.getElement(i) != otherArray.getElement(i))
			{
				return false;
			}
		}
	}

	return true;
}