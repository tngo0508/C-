/****************************************************************************

	binary_search

	- Returns true if any element in the range [first,last) is equivalent 
	  to val, and false otherwise.
	- Elements need to be sorted.

	Containers: vector, set
	
	THE FOLLOWING IS THE INFORMATION THAT WILL BE AVAILABLE TO YOU ON THE EXAM:

			template <class ForwardIterator, class T>
			bool binary_search (ForwardIterator first, ForwardIterator last,
							  const T& val);
							  
****************************************************************************/

#ifndef FUNCTION_BINARY_SEARCH_H
#define FUNCTION_BINARY_SEARCH_H

void function_binary_search()
{
	ostream_iterator<int> screen(cout, " ");

	cout << "\n\n*** FUNCTION binary_search...\n";

	//---------------------------------------------------------------
	// vector

	vector<int> myVector = { 12, 24, 35, 48, 61, 78, 82, 94 }; 

	cout << "\nVector: ";
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;   

	if (binary_search(myVector.begin() + 2, myVector.begin() + 5, 35))
		cout << "Element 35 was found." << endl;
	else
		cout << "Element 35 was not found." << endl;

	if (binary_search(myVector.begin(), myVector.end(), 51))
		cout << "Element 51 was found." << endl;
	else
		cout << "Element 51 was not found." << endl;


	//---------------------------------------------------------------
	// list --> lists do not have random access


	//---------------------------------------------------------------
	// map --> does not work --> other ways?


	//---------------------------------------------------------------
	// set

	set<int> mySet; 
	mySet.insert(12); 
	mySet.insert(10); 
	mySet.insert(11);
	mySet.insert(13);
	
	cout << "\nSet: ";
	copy(mySet.begin(), mySet.end(), screen);
	cout << endl;

	if (binary_search(mySet.begin(), mySet.end(), 11))
		cout << "Element 11 was found." << endl;
	else
		cout << "Element 11 was not found." << endl;

	if (binary_search(mySet.begin(), mySet.end(), 14))
		cout << "Element 14 was found." << endl;
	else
		cout << "Element 14 was not found." << endl;

}

#endif