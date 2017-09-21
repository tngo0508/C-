/****************************************************************************

	replace

	- Assigns new_value to all the elements in the range [first,last) 
	  that compare equal to old_value.

	Containers: vector, list	

	THE FOLLOWING IS THE INFORMATION THAT WILL BE AVAILABLE TO YOU ON THE EXAM:

		template <class ForwardIterator, class T>
		void replace (ForwardIterator first, ForwardIterator last,
						const T& old_value, const T& new_value);

****************************************************************************/

#ifndef FUNCTION_REPLACE_H
#define FUNCTION_REPLACE_H

void function_replace()
{
	ostream_iterator<int> screen(cout, " ");

	cout << "\n\n*** FUNCTION replace...\n";

	//---------------------------------------------------------------
	// vector

	vector<int> myVector = { 10, 10, 62, 19, 31, 10, 24, 79, 10, 72 };

	cout << "\nVector: ";						
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;

	replace(myVector.begin(), myVector.end(), 10, 999);

	cout << "Vector: ";						
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;	

	//---------------------------------------------------------------
	// list

	list<int> myList;
	myList.push_back(65);
	myList.push_back(41);
	myList.push_back(52);
	myList.push_back(11);
	myList.push_back(83);
	myList.push_back(35);

	cout << "\nList: ";
	copy(myList.begin(), myList.end(), screen);
	cout << endl;

	replace(myList.begin(), myList.end(), 83, 100);

	cout << "\nList: ";
	copy(myList.begin(), myList.end(), screen);
	cout << endl;
}

#endif