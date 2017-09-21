/****************************************************************************

	replace_if

	- Assigns new_value to all the elements in the range [first,last) 
	  for which pred returns true.

	Containers: vector, list

	THE FOLLOWING IS THE INFORMATION THAT WILL BE AVAILABLE TO YOU ON THE EXAM:

		template <class ForwardIterator, class UnaryPredicate, class T>
		void replace_if (ForwardIterator first, ForwardIterator last,
					   UnaryPredicate pred, const T& new_value );

****************************************************************************/

#ifndef FUNCTION_REPLACE_IF_H
#define FUNCTION_REPLACE_IF_H

bool equalTo10(int num);	// UnaryPredicate

void function_replace_if()
{
	ostream_iterator<int> screen(cout, " ");

	cout << "\n\n*** FUNCTION replace_if...\n";

	//---------------------------------------------------------------
	// vector

	vector<int> myVector = { 10, 10, 62, 19, 31, 10, 24, 79, 10, 72 };

	cout << "\nVector: ";					
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;

	replace_if(myVector.begin(), myVector.end(), equalTo10, 0);

	cout << "Vector: ";
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;

	//---------------------------------------------------------------
	// list

	list<int> myList;
	myList.push_back(65);
	myList.push_back(10);
	myList.push_back(52);
	myList.push_back(11);
	myList.push_back(83);
	myList.push_back(10);
	cout << "\nList: ";
	copy(myList.begin(), myList.end(), screen);
	cout << endl;

	replace_if(myList.begin(), myList.end(), equalTo10, 100);

	cout << "List: ";
	copy(myList.begin(), myList.end(), screen);
	cout << endl;
}

bool equalTo10(int num)
{
	return (num == 10);
}

#endif