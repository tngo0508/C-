/****************************************************************************

	sort

	- Sorts the elements in the range [first,last) into ascending order.

	Containers: vector

	*** The STL list class has its own sort function => void sort()

	THE FOLLOWING IS THE INFORMATION THAT WILL BE AVAILABLE TO YOU ON THE EXAM:

		template <class RandomAccessIterator>
		void sort (RandomAccessIterator first, RandomAccessIterator last);

****************************************************************************/

#ifndef FUNCTION_SORT_H
#define FUNCTION_SORT_H

void function_sort()
{
	ostream_iterator<int> screen(cout, " ");

	cout << "\n\n*** FUNCTION sort...\n";

	//---------------------------------------------------------------
	// vector

	vector<int> myVector;
	myVector.push_back(5);
	myVector.push_back(2);
	myVector.push_back(4);
	myVector.push_back(1);
	myVector.push_back(2);

	cout << "\nVector: ";
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;

	sort(myVector.begin(), myVector.end());

	cout << "Sorted vector: ";
	copy(myVector.begin(), myVector.end(), screen);
	cout << endl;
}

#endif