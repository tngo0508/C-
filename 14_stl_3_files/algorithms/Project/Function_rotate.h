/****************************************************************************

	rotate
	
	- Rotates the order of the elements in the range [first,last), 
	  in such a way that the element pointed by middle becomes the 
	  new first element.

	Containers: vector, list

	THE FOLLOWING IS THE INFORMATION THAT WILL BE AVAILABLE TO YOU ON THE EXAM:

	template <class ForwardIterator>
	void rotate (ForwardIterator first, ForwardIterator middle,
               ForwardIterator last);

****************************************************************************/

#ifndef FUNCTION_ROTATE_H
#define FUNCTION_ROTATE_H

void function_rotate()
{
	ostream_iterator<int> screen(cout, " ");

	cout << "\n\n*** FUNCTION rotate...\n";

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

	vector<int>::iterator iterVector = myVector.begin();

	rotate(myVector.begin(), iterVector + 2 ,myVector.end());

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

	list<int>::iterator iterList = myList.begin();

	iterList++;
	iterList++;

	rotate(myList.begin(), iterList, myList.end());

	cout << "Rotated list: ";
	copy(myList.begin(), myList.end(), screen);	
	cout << endl;
}

#endif