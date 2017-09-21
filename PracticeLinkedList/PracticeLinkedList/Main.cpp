#include "AnyList.h"
#include <iostream>

using namespace std;

int main()
{
	AnyList list1;

	cout << "Trying to print an empty list.\n";
	list1.print();
	cout << endl;

	list1.insertBack(3);
	list1.insertBack(6);
	list1.insertBack(2);
	list1.insertBack(4);

	cout << "Print data in list1: ";
	list1.print();
	cout << endl << endl;

	cout << "find max in list1: ";
	cout << list1.findMax();
	cout << endl;

	cout << "Delete first item in list1: ";
	list1.deleteFirstNode();
	list1.print();
	cout << endl << endl;

	cout << "Switch data first and last item: ";
	list1.switchData();
	list1.print();
	cout << endl << endl;

	cout << "Search for 4 in list1: ";
	cout << list1.search(4);
	cout << endl << endl;

	AnyList list2;

	list2.insertFront(5);
	list2.insertFront(6);
	list2.insertFront(7);
	list2.insertFront(8);

	cout << "Print data in list2: ";
	list2.print();
	cout << endl << endl;

	cout << "Delete last item in list2: ";
	list2.deleteLastNode();
	list2.print();
	cout << endl;

	cout << "Search for 2 in list2: ";
	cout << list2.search(2);
	cout << endl;

	cout << "Replace 6 by 7 in list2: ";
	list2.replace(6, 7);
	list2.print();
	cout << endl;

	cout << "Get max in list2: ";
	cout << list2.findMax();
	cout << endl;

	cout << endl;
	system("Pause");
	return 0;
}
