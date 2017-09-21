/****************************************************************************

	remove

	- Removes every occurrence of val in the range [first,last).
	- Returns an iterator positioned at the new end of the vector.
	- IMPORTANT: It does not update the size of the vector.

	Containers: vector, list

	*** The STL list class has its own remove function => void remove(elem)

	THE FOLLOWING IS THE INFORMATION THAT WILL BE AVAILABLE TO YOU ON THE EXAM:

		template <class ForwardIterator, class T>
		ForwardIterator remove (ForwardIterator first, ForwardIterator last, const T& val);

****************************************************************************/

#ifndef FUNCTION_REMOVE_H
#define FUNCTION_REMOVE_H

void function_remove()
{
	ostream_iterator<int> screen(cout, " ");

	cout << "\n\n*** FUNCTION remove...\n";

	//---------------------------------------------------------------
	// vector

	int a[10] = { 10, 10, 62, 19, 31, 10, 24, 79, 10, 72 };

	vector<int> myVector(a, a + 10);        

	cout << "\nVector: ";               
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;                                       

	vector<int>::iterator lastElem;           

	
	lastElem = remove(myVector.begin(), myVector.end(), 10);		
												//By removing, we are shrinking the container.
												//The return value is an iterator that points
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
	myList.push_back(6);
	myList.push_back(4);
	myList.push_back(2);
	myList.push_back(1);
	myList.push_back(3);
	myList.push_back(5);
	cout << "\nList: ";
	copy(myList.begin(), myList.end(), screen);
	cout << endl;

	list<int>::iterator iterList;

	iterList = remove(myList.begin(), myList.end(), 1);

	cout << "List: ";
	copy(myList.begin(), iterList, screen);
	cout << endl;
}

#endif