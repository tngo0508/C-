//This program creates partially-filled arrays
//  of integers.

#include "DArray.h"
#include "DArray.cpp"
#include "Movie.h"

#include <iostream>
#include <string>

using namespace std;

template<typename T>
bool operator==(const DArray<T>& Array, const DArray<T>& otherArray);
bool operator==(const Movie& movie, const Movie& otherMovie);

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

	if (!a1.isEmpty())
	{
		cout << "Call function getCapacity...\n";
		cout << a1.getCapacity();
		cout << endl;
		cout << "Call function getUsed...\n";
		cout << a1.getUsed();
		cout << endl;
		cout << "Call function getElement...\n";
		cout << a1.getElement(2);
		cout << endl;
		cout << "print the array...\n";
		cout << a1;
		cout << endl;
		cout << "Call function delete element...\n";
		cout << "delete element 3.\n";
		a1.deleteElement(3);
		cout << a1;
		cout << endl;
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
	int m;
	cin >> m;
	while (m != -1)
	{
		a2.addElement(m);
		cin >> m;
	}

	cout << "Test the operator ==...\n";
	if (a1 == a2)
	{
		cout << "a1 == a2";
	}
	else
		cout << "a1 != a2";

	cout << endl << endl;
	//Ask the user to enter the capacity
	cout << "Enter the capacity of the array: ";
	int cap3;
	cin >> cap3;
	cout << endl;
	//Create the new array
	DArray<Movie> a3(cap3);

	int year = 0;
	string movieTitle;
	char reponse = 'y';
	int i = 0;

	while (reponse == 'y' || reponse == 'Y')
	{
		cout << "Enter the name of movie and year of production: " << endl;
		cin >> movieTitle >> year;

		Movie newMovie(movieTitle, year);
		a3.addElement(newMovie);
		++i;

		cout << endl;
		if (i < cap3)
		{
			cout << "Add another movie?(y/n)";
			cin >> reponse;
		}
		else
		{
			reponse = 'n';
		}
	}

	if (!a3.isEmpty())
	{
		cout << "\nCall function get capacity...\n";
		cout << a3.getCapacity();
		cout << endl;
		cout << "\nCall funciton get used...\n";
		cout << a3.getUsed();
		cout << endl;
		cout << "\nPrint the array...\n";
		cout << a3;
		cout << endl;
		cout << "\nCall function delete element...\n";
		cout << a3;
		cout << endl;
	}
	
	cout << "\nTesting the delete function...\n\n";
	int cap4 = 5;
	DArray<Movie> a4(cap4);
	Movie m1("batman", 2007), m2("superman", 2000), m3("bird",1999);
	a4.addElement(m1);
	a4.addElement(m2);
	a4.addElement(m3);
	cout << a4 << endl;
	cout << "Deleting movie2 using deleteElement...\n\n";
	a4.deleteElement(m2);
	cout << a4;
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

bool operator==(const Movie& movie, const Movie& otherMovie)
{
	if (movie.getMovieTitle() == otherMovie.getMovieTitle() && movie.getYear() == otherMovie.getYear())
	{
		return true;
	}
	else
		return false;
}