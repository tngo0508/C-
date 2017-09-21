/****************************************************************************

	remove_if

	- Transforms the range [first,last) into a range with all the elements 
	  for which pred returns true removed.
	- Returns an iterator to the new end of that range.
	- It does not update the size of the vector.

	Containers: vector, list

	THE FOLLOWING IS THE INFORMATION THAT WILL BE AVAILABLE TO YOU ON THE EXAM:

		template <class ForwardIterator, class T>
		ForwardIterator remove_if (ForwardIterator first, ForwardIterator last,
                             UnaryPredicate pred);

****************************************************************************/

#ifndef FUNCTION_REMOVE_IF_H
#define FUNCTION_REMOVE_IF_H

bool lessOrEqualTo50(int num);	// UnaryPredicate

void function_remove_if()
{
	ostream_iterator<int> screen(cout, " ");

	cout << "\n\n*** FUNCTION remove_if...\n";

	//---------------------------------------------------------------
	// vector

	int a[10] = { 45, 89, 12, 63, 35, 10, 28, 95, 67, 22 };

	vector<int> myVector(a, a + 10);        

	cout << "\nVector: ";               
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;                                       

	vector<int>::iterator lastElem, newLastElem;   

	lastElem = remove_if(myVector.begin(), myVector.end(), lessOrEqualTo50);
												//By removing, we are shrinking the container.
												//The return value is an iterators that points
												// to the new end of the list. 

	cout << "Vector: ";		
	copy(myVector.begin(), lastElem, screen);	//Note that we are using lastElem.
	cout << endl;								//If you use myVector.end(), it will
												// show the rest of the vector.
	cout << "Size of the vector: ";
	cout << myVector.size() << endl;			//Size of the vector has not changed.		

	
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

	list<int>::iterator iterList;

	iterList = remove_if(myList.begin(), myList.end(), lessOrEqualTo50);

	cout << "List: ";
	copy(myList.begin(), iterList, screen);
	cout << endl;
}

bool lessOrEqualTo50(int num)
{
	return (num <= 50);
}


#endif