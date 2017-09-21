/****************************************************************************

	reverse

	- Reverses the order of the elements in the range [first,last).

	Containers: vector, list

	*** The STL list class has its own reverse function => void reverse()

	THE FOLLOWING IS THE INFORMATION THAT WILL BE AVAILABLE TO YOU ON THE EXAM:

		template <class BidirectionalIterator>
		void reverse (BidirectionalIterator first, BidirectionalIterator last);

****************************************************************************/

#ifndef FUNCTION_REVERSE_H
#define FUNCTION_REVERSE_H

void function_reverse()
{
	ostream_iterator<int> screen(cout, " ");

	cout << "\n\n*** FUNCTION reverse...\n";

	//---------------------------------------------------------------
	// vector

	vector<int> myVector;
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(4);
	myVector.push_back(5);

	cout << "\nVector: ";
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;	
	
	reverse(myVector.begin(), myVector.end());

	cout << "Vector: ";
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;


	//---------------------------------------------------------------
	// list

	list<int> myList;
	myList.push_back(1);
	myList.push_back(2);
	myList.push_back(3);
	myList.push_back(4);
	myList.push_back(5);

	cout << "\nList: ";
	copy(myList.begin(), myList.end(), screen);
	cout << endl;

	reverse(myList.begin(), myList.end());

	cout << "List: ";
	copy(myList.begin(), myList.end(), screen);
	cout << endl;
}

#endif