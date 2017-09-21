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

	// list1 - Data stored in the first node: none
	// list1 - Data stored in the last node: none
	// list1 - Address stored in pointer first: NULL
	// list1 - Address stored in pointer last: NULL
	// list1 - Address stored in ptr next of last node: none
	// list1 - Address stored in ptr prev of first node: none
	// list1 - count: 0
	// list2 - Data stored in the first node: none
	// list2 - Data stored in the last node: none
	// list2 - Address stored in pointer first: NULL
	// list2 - Address stored in pointer last: NULL
	// list2 - Address stored in ptr next of last node: none
	// list2 - Address stored in ptr prev of first node: none
	// list2 - count: 0
	
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

	// list3 - Data stored in the first node: 2
	// list3 - Data stored in the last node: 3

	// list3 - Address stored in pointer first: 0x00d2b4b0
	// list3 - Address stored in pointer last: 0x00d251c0
	// list3 - Address stored in ptr next of last node: NULL
	// list3 - Address stored in ptr prev of first node: NULL
	// list3 - count: 5
	// list4 - Data stored in the first node:2
	// list4 - Data stored in the last node: 3
	// list4 - Address stored in pointer first: 0x00d2b618 
	// list4 - Address stored in pointer last: 0x00d2b4f8
	// list4 - Address stored in ptr next of last node: NULL
	// list4 - Address stored in ptr prev of first node: NULL
	// list4 - count: 5

	DoublyList list5, list6;	// objects have same number of nodes

	list5.insertFront(3);

	list6.insertFront(7);

	list5.copyToList(list6);

	// list5 - Data stored in the first node: 3
	// list5 - Data stored in the last node: 3
	// list5 - Address stored in pointer first: 0x00d2b660
	// list5 - Address stored in pointer last: 0x00d2b660
	// list5 - Address stored in ptr next of last node: NULL
	// list5 - Address stored in ptr prev of first node: NULL
	// list5 - count: 1
	// list6 - Data stored in the first node: 3
	// list6 - Data stored in the last node: 3
	// list6 - Address stored in pointer first: 0x00d2b6a8
	// list6 - Address stored in pointer last: 0x00d2b6a8
	// list6 - Address stored in ptr next of last node: NULL
	// list6 - Address stored in ptr prev of first node: NULL
	// list6 - count: 1

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

	// list7 - Data stored in the first node: 2
	// list7 - Data stored in the last node: 3
	// list7 - Address stored in pointer first: 0x00d2b810
	// list7 - Address stored in pointer last: 0x00d2b6f0
	// list7 - Address stored in ptr next of last node: NULL
	// list7 - Address stored in ptr prev of first node: NULL
	// list7 - count: 5
	// list8 - Data stored in the first node:2
	// list8 - Data stored in the last node: 3
	// list8 - Address stored in pointer first: 0x00d2ba50
	// list8 - Address stored in pointer last: 0x00d2b930
	// list8 - Address stored in ptr next of last node: NULL
	// list8 - Address stored in ptr prev of first node: NULL
	// list8 - count: 5

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

	// list9 - Data stored in the first node: 9
	// list9 - Data stored in the last node: 7
	// list9 - Address stored in pointer first: 0x00d2bc90
	// list9 - Address stored in pointer last: 0x00d2ba98
	// list9 - Address stored in ptr next of last node: NULL
	// list9 - Address stored in ptr prev of first node: NULL
	// list9 - count: 8
	// list10 - Data stored in the first node: 9
	// list10 - Data stored in the last node: 7
	// list10 - Address stored in pointer first: 0x00d2bdf8
	// list10 - Address stored in pointer last: 0x00d2bed0
	// list10 - Address stored in ptr next of last node: NULL
	// list10 - Address stored in ptr prev of first node: NULL
	// list10 - count: 8

	DoublyList list11, list12;	// parameter object is empty

	list11.insertFront(3);
	list11.insertFront(6);
	list11.insertFront(9);
	list11.insertFront(2);
	list11.insertFront(1);

	list11.copyToList(list12);

	// list11 - Data stored in the first node: 1
	// list11 - Data stored in the last node: 3
	// list11 - Address stored in pointer first: 0x00d2c038
	// list11 - Address stored in pointer last: 0x00d2bf18
	// list11 - Address stored in ptr next of last node: NULL
	// list11 - Address stored in ptr prev of first node: NULL
	// list11 - count: 5
	// list12 - Data stored in the first node: 1
	// list12 - Data stored in the last node: 3
	// list12 - Address stored in of pointer first: 0x00d2c1a0
	// list12 - Address stored in pointer last: 0x00d2c080
	// list12 - Address stored in ptr next of last node: NULL
	// list12 - Address stored in ptr prev of first node: NULL
	// list12 - count: 5


	DoublyList list13, list14;	// calling object has only one node (fewer than parameter object)

	list13.insertFront(3);

	list14.insertFront(5);
	list14.insertFront(6);
	list14.insertFront(2);
	list14.insertFront(4);

	list13.copyToList(list14);

	// list13 - Data stored in the first node: 3
	// list13 - Data stored in the last node: 3
	// list13 - Address stored in pointer first: 0x00d2c1e8
	// list13 - Address stored in pointer last: 0x00d2c1e8
	// list13 - Address stored in ptr next of last node: NULL
	// list13 - Address stored in ptr prev of first node: NULL
	// list13 - count: 1
	// list14 - Data stored in the first node: 3
	// list14 - Data stored in the last node: 3
	// list14 - Address stored in pointer first: 0x00d2c308
	// list14 - Address stored in pointer last: 0x00d2c308 
	// list14 - Address stored in ptr next of last node: NULL
	// list14 - Address stored in ptr prev of first node: NULL
	// list14 - count: 1

	cout << endl << endl;
	system("Pause");
	return 0;
}
