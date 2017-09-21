#include "DoublyList.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	DoublyList l1;

	/*l1.insertFront(4);
	l1.insertFront(3);
	l1.insertFront(2);
	l1.insertFront(1);
	l1.insertFront(0);

	l1.print();
	cout << endl;

	l1.deleteNode(4);*/

	DoublyList l2;
	/*l2.insertBack(1);
	l2.insertBack(2);
	l2.insertBack(3);
	l2.insertBack(4);

	l2.reservePrint();*/
	/*l2.insertInOrder(3);
	l2.insertInOrder(5);
	l2.insertInOrder(3);
	l2.insertInOrder(4);
	l2.insertInOrder(5);*/

	//l2.rotateLeft();
	//l2.rotateright();

	l2.insertBack(3);
	l2.insertBack(5);
	//l2.insertBack(1);
	//l2.insertBack(2);
	//l2.insertBack(1);
	//l2.insertBack(7);

	//l2.moveKeyToSecond(5);
	//l1.print();
	l2.swapEnds();
	cout << endl;
	system("Pause");
	return 0;
}