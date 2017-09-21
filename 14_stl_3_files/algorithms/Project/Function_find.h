/****************************************************************************

	find

	- Returns an iterator to the first element in the range [first,last)
	that compares equal to val. If no such element is found, the function
	returns last.

	BE CAREFUL: Function find is NOT a void function and does NOT return a 
				boolean value.

	Containers: vector, list, set

	THE FOLLOWING IS THE INFORMATION THAT WILL BE AVAILABLE TO YOU ON THE EXAM:

		template <class InputIterator, class T>
		InputIterator find (InputIterator first, InputIterator last, const T& val);

****************************************************************************/

#ifndef FUNCTION_FIND_H
#define FUNCTION_FIND_H

void function_find()
{
	ostream_iterator<int> screen(cout, " ");

	cout << "\n\n*** FUNCTION find...\n";

	//---------------------------------------------------------------
	// vector

	vector<int> myVector = { 45, 95, 76, 21, 35, 62, 85 };

	cout << "\nVector: ";
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;

	vector<int>::const_iterator iterVector = myVector.begin(); 
	
	iterVector = find(myVector.begin(), myVector.end(), 62);

	if (iterVector != myVector.end())
		cout << "Element 62 found at position "
		 << (iterVector - myVector.begin()) << endl;	// Why this expression?														
	else                                     
		cout << "Element 62 is not in the vector."
		 << endl;

	//---------------------------------------------------------------
	// list

	list<int> myList; 
	myList.push_back(4); 
	myList.push_back(5); 
	myList.push_back(6);
	myList.push_back(1);
	myList.push_back(2);

	cout << "\nList: ";
	copy(myList.begin(), myList.end(), screen);			// List: 4 5 6 1 2
	cout << endl;

	list<int>::iterator iterList = myList.begin();		// not a constant iterator, because
														// we will be assigning a value 
	
	iterList = find(myList.begin(), myList.end(), 62);

	if (iterList != myList.end())
		cout << "Element 62 was found." << endl;		
	else
		cout << "Element 62 is not in the list."
		<< endl;

	/*
		NOTE: This is a linked list and should not have random access; 
		therefore, we would be interested in the location only if we 
		we want to modify the element.

		Example:
	*/

	iterList = find(myList.begin(), myList.end(), 1);

	if (iterList != myList.end())
		cout << "Element 1 was found." << endl;
	else
		cout << "Element 1 is not in the list."
		<< endl;

	*iterList = 999;

	cout << "\nList: ";
	copy(myList.begin(), myList.end(), screen);			// List: 4 5 6 999 2
	cout << endl;

	//---------------------------------------------------------------
	// set

	set<int> mySet; 
	mySet.insert(12); 
	mySet.insert(10); 
	mySet.insert(11);
	mySet.insert(13);
	mySet.insert(15);
	mySet.insert(14);

	cout << "\nSet: ";
	copy(mySet.begin(), mySet.end(), screen);			// Set: 10 11 12 13 14 15
	cout << endl;

	set<int>::const_iterator iterSet = mySet.begin();

	iterSet = find(mySet.begin(), mySet.end(), 13);

	if (iterSet != mySet.end())
		cout << "Element 13 was found." << endl;
	else
		cout << "Element 13 is not in the set."
		<< endl;
}

#endif