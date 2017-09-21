#include <iostream>
#include <vector>
#include <iterator>  // need to be included for the ostream iterator

using namespace std;

void example1();
void example2();
void example3();

void fillVector(vector<char>&);

int main()
{
	example1();		// vector iterator
	cout << "\n----------------------------------\n";
	example2();		// reverse iterator
	cout << "\n----------------------------------\n";
	example3();		// ostream iterator
	cout << "\n----------------------------------\n";

	cout << endl;
	system("Pause");
	return 0;
}

	// populate the vector
void fillVector(vector<char>& v)
{
	v.push_back('A');
	v.push_back('B');
	v.push_back('C');
	v.push_back('D');
	v.push_back('E');
}

	// vector iterator
void example1()		
{	
	cout << "EXAMPLE 1: Vector Iterator\n\n";

	vector<char> container;			//declare a vector of characters

	fillVector(container);			//insert integers in the vector

	vector<char>::iterator iter;		//declare iterator

	cout << "Print vector using an iterator: ";
	for (iter = container.begin(); iter != container.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	/* OUTPUT
				Print vector using an iterator:	A B C D E
	*/

	cout << "Re-set entries to X and print again: ";
	for (iter = container.begin(); iter != container.end(); ++iter)
		*iter = 'X';
	for (iter = container.begin(); iter != container.end(); ++iter)
		cout << *iter << " ";
	cout << endl;
	/* OUTPUT
				Re-set entries to X and print again: X X X X X
	*/
}

	// reverse iterator
void example2()		
{
	cout << "EXAMPLE 2: Reverse Iterator\n\n";

	vector<char> v;

	fillVector(v);

	vector<char>::const_iterator iter;

	cout << "Print forward: ";
	for (iter = v.begin(); iter != v.end(); ++iter)
		cout << *iter << " ";
	/*
	OUTPUT:
			Print forward: A B C D E
	*/

	cout << endl;

	// To print backwards you cannot do:
	// for (iter = ct.end( ); iter != ct.begin( ); ++iter) 
	// --> use a reverse iterator
	vector<char>::const_reverse_iterator revIter;

	cout << "Print backwards: ";
	for (revIter = v.rbegin(); revIter != v.rend(); ++revIter)
		cout << *revIter << " ";
	/*
	OUTPUT:
			Print backwards: E D C B A
	*/

	cout << endl;
}

	// ostream iterator
void example3()
{
	cout << "EXAMPLE 3: Ostream Iterator\n\n"; 
	
	vector<int> v;

	v.push_back(10);
	v.push_back(11);
	v.push_back(12);
	v.push_back(13);
	v.push_back(14);

	ostream_iterator<int> screen1(cout);

	cout << "Vector contains (no delimiter): ";
	copy(v.begin(), v.end(), screen1);
	/*
	OUTPUT:
			No delimiter: 1011121314
	*/

	ostream_iterator<int> screen2(cout, " ");

	cout << "\nVector contains (with delimiter): ";
	copy(v.begin(), v.end(), screen2);
	/*
	OUTPUT:
			With delimiter: 10 11 12 13 14
	*/

	cout << endl;
}