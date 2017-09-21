/****************************************************************************

	fill
	
	- Assigns val to all the elements in the range [first,last).

	Containers: vector, list

	THE FOLLOWING IS THE INFORMATION THAT WILL BE AVAILABLE TO YOU ON THE EXAM:

		template <class ForwardIterator, class T>
		void fill (ForwardIterator first, ForwardIterator last, const T& val);

****************************************************************************/

#ifndef FUNCTION_FILL_H
#define FUNCTION_FILL_H

void function_fill()
{	
	ostream_iterator<int> screen(cout, " ");

	cout << "\n\n*** FUNCTION fill...\n";

	//---------------------------------------------------------------
	// vector

	vector<int> myVector(5);

	fill(myVector.begin() + 2, myVector.end(), 9);		// Vector: 0 0 9 9 9 

	cout << "\nVector: ";
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;   

	//---------------------------------------------------------------
	// list

	list<int> myList(6);

	fill(myList.begin(), myList.end(), 4);			// List: 4 4 4 4 4 4

	cout << "\nList: ";
	copy(myList.begin(), myList.end(), screen);
	cout << endl;
}

#endif