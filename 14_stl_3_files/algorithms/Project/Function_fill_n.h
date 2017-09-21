/****************************************************************************

	fill_n

	- Assigns val to the first n elements of the sequence pointed by first.
	Overwrites old values.

	Containers: vector, list

	THE FOLLOWING IS THE INFORMATION THAT WILL BE AVAILABLE TO YOU ON THE EXAM:

		template <class OutputIterator, class Size, class T>
		void fill_n (OutputIterator first, Size n, const T& val);

****************************************************************************/

#ifndef FUNCTION_FILL_N_H
#define FUNCTION_FILL_N_H

void function_fill_n()
{
	ostream_iterator<int> screen(cout, " ");

	cout << "\n\n*** FUNCTION fill_n...\n";

	//---------------------------------------------------------------
	// vector

	vector<int> myVector(8);                                   

	fill_n(myVector.begin(), 3, 5);					// Vector: 5 5 5 0 0 0 0 0

	cout << "\nVector: ";
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;   

	fill_n(myVector.begin() + 5, 2, 7);				// Vector: 5 5 5 0 0 7 7 0 

	cout << "Vector: ";
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;

	//---------------------------------------------------------------
	// list

	list<int> myList(10);

	fill_n(myList.begin(), 3, 4);					// List: 4 4 4 0 0 0 0 0 0

	cout << "\nList: ";
	copy(myList.begin(), myList.end(), screen);
	cout << endl;

	/* -------------------------------------------------------------
	NOTE: Cannot do this
	fill_n(myList.begin() + 2, 3, 4);

	List does not have random access and cannot use "+2"

	We can do the following:
	---------------------------------------------------------------- */

	list<int>::iterator iterList = myList.begin();
	for (int i = 0; i < 4; ++i)
		++iterList;

	fill_n(iterList, 2, 6);							// List: 4 4 4 0 6 6 0 0 0

	cout << "List: ";
	copy(myList.begin(), myList.end(), screen);
	cout << endl;
}

#endif