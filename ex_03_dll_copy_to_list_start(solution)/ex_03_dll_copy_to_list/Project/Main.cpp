/***********************************************

	Class DoublyList

************************************************/

#include "DoublyList.h"
#include "Functions.cpp"

#include <iostream>
using namespace std;

int main()
{
	DoublyList list1, list2;	// calling object is empty

	list2.insertFront(3);
	list2.insertFront(6);
	list2.insertFront(9);
	list2.insertFront(4);

	list1.copyToList(list2);

	// list1 - Data stored in the first node:
	// list1 - Data stored in the last node:
	// list1 - Address stored in pointer first:
	// list1 - Address stored in pointer last:
	// list1 - Address stored in ptr next of last node:
	// list1 - Address stored in ptr prev of first node:
	// list1 - count:
	// list2 - Data stored in the first node:
	// list2 - Data stored in the last node:
	// list2 - Address stored in pointer first:
	// list2 - Address stored in pointer last:
	// list2 - Address stored in ptr next of last node:
	// list2 - Address stored in ptr prev of first node:
	// list2 - count:
	
	DoublyList list3, list4;	// objects have same number of nodes

	list3.insertFront(3);
	list3.insertFront(6);
	list3.insertFront(9);
	list3.insertFront(5);
	list3.insertFront(2);

	list4.insertFront(7);
	list4.insertFront(8);
	list4.insertFront(1);
	list4.insertFront(4);
	list4.insertFront(6);

	list3.copyToList(list4);

	// list3 - Data stored in the first node:
	// list3 - Data stored in the last node:
	// list3 - Address stored in pointer first:
	// list3 - Address stored in pointer last:
	// list3 - Address stored in ptr next of last node:
	// list3 - Address stored in ptr prev of first node:
	// list3 - count:
	// list4 - Data stored in the first node:
	// list4 - Data stored in the last node:
	// list4 - Address stored in pointer first:
	// list4 - Address stored in pointer last:
	// list4 - Address stored in ptr next of last node:
	// list4 - Address stored in ptr prev of first node:
	// list4 - count:

	DoublyList list5, list6;	// objects have same number of nodes

	list5.insertFront(3);

	list6.insertFront(7);

	list5.copyToList(list6);

	// list5 - Data stored in the first node:
	// list5 - Data stored in the last node:
	// list5 - Address stored in pointer first:
	// list5 - Address stored in pointer last:
	// list5 - Address stored in ptr next of last node:
	// list5 - Address stored in ptr prev of first node:
	// list5 - count:
	// list6 - Data stored in the first node:
	// list6 - Data stored in the last node:
	// list6 - Address stored in pointer first:
	// list6 - Address stored in pointer last:
	// list6 - Address stored in ptr next of last node:
	// list6 - Address stored in ptr prev of first node:
	// list6 - count:

	DoublyList list7, list8;	// parameter object has more nodes than calling object

	list7.insertFront(3);
	list7.insertFront(6);
	list7.insertFront(9);
	list7.insertFront(5);
	list7.insertFront(2);

	list8.insertFront(7);
	list8.insertFront(8);
	list8.insertFront(1);
	list8.insertFront(4);
	list8.insertFront(6);
	list8.insertFront(2);
	list8.insertFront(3);
	list8.insertFront(9);

	list7.copyToList(list8);

	// list7 - Data stored in the first node:
	// list7 - Data stored in the last node:
	// list7 - Address stored in pointer first:
	// list7 - Address stored in pointer last:
	// list7 - Address stored in ptr next of last node:
	// list7 - Address stored in ptr prev of first node:
	// list7 - count:
	// list8 - Data stored in the first node:
	// list8 - Data stored in the last node:
	// list8 - Address stored in pointer first:
	// list8 - Address stored in pointer last:
	// list8 - Address stored in ptr next of last node:
	// list8 - Address stored in ptr prev of first node:
	// list8 - count:

	DoublyList list9, list10;	// parameter object has less nodes than calling object

	list9.insertFront(7);
	list9.insertFront(8);
	list9.insertFront(1);
	list9.insertFront(4);
	list9.insertFront(6);
	list9.insertFront(2);
	list9.insertFront(3);
	list9.insertFront(9);

	list10.insertFront(3);
	list10.insertFront(6);
	list10.insertFront(9);
	list10.insertFront(5);
	list10.insertFront(2);

	list9.copyToList(list10);

	// list9 - Data stored in the first node:
	// list9 - Data stored in the last node:
	// list9 - Address stored in pointer first:
	// list9 - Address stored in pointer last:
	// list9 - Address stored in ptr next of last node:
	// list9 - Address stored in ptr prev of first node:
	// list9 - count:
	// list10 - Data stored in the first node:
	// list10 - Data stored in the last node:
	// list10 - Address stored in pointer first:
	// list10 - Address stored in pointer last:
	// list10 - Address stored in ptr next of last node:
	// list10 - Address stored in ptr prev of first node:
	// list10 - count:

	DoublyList list11, list12;	// parameter object is empty

	list11.insertFront(3);
	list11.insertFront(6);
	list11.insertFront(9);
	list11.insertFront(2);
	list11.insertFront(1);

	list11.copyToList(list12);

	// list11 - Data stored in the first node:
	// list11 - Data stored in the last node:
	// list11 - Address stored in pointer first:
	// list11 - Address stored in pointer last:
	// list11 - Address stored in ptr next of last node:
	// list11 - Address stored in ptr prev of first node:
	// list11 - count:
	// list12 - Data stored in the first node:
	// list12 - Data stored in the last node:
	// list12 - Address stored in of pointer first:
	// list12 - Address stored in pointer last:
	// list12 - Address stored in ptr next of last node:
	// list12 - Address stored in ptr prev of first node:
	// list12 - count:


	DoublyList list13, list14;	// calling object has only one node (fewer than parameter object)

	list13.insertFront(3);

	list14.insertFront(5);
	list14.insertFront(6);
	list14.insertFront(2);
	list14.insertFront(4);

	list13.copyToList(list14);
	// list13 - Data stored in the first node:
	// list13 - Data stored in the last node:
	// list13 - Address stored in pointer first:
	// list13 - Address stored in pointer last:
	// list13 - Address stored in ptr next of last node:
	// list13 - Address stored in ptr prev of first node:
	// list13 - count:
	// list14 - Data stored in the first node:
	// list14 - Data stored in the last node:
	// list14 - Address stored in pointer first:
	// list14 - Address stored in pointer last:
	// list14 - Address stored in ptr next of last node:
	// list14 - Address stored in ptr prev of first node:
	// list14 - count:

	cout << endl << endl;
	system("Pause");
	return 0;
}
