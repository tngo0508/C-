#include "DoublyList.h"

DoublyList::DoublyList()
{
	first = NULL;
	last = NULL;
	count = 0;
}

void DoublyList::insertFront(int newData)
{
	Node *newNode = new Node(newData, first, NULL);

	if (count == 0)
	{
		first = newNode;
		last = newNode;
	}
	else
	{
		first->setPrev(newNode);
		first = first->getPrev();
	}
	++count;
}

void DoublyList::print() const
{
	Node *current = first;
	while (current != NULL)
	{
		cout << current->getData() << " ";
		current = current->getNext();
	}
}

void DoublyList::destroyList()
{
	Node *temp;
	while (first != NULL)
	{
		temp = first;
		first = first->getNext();
		delete temp;
		temp = NULL;
	}

	count = 0;
	last = NULL;
}

DoublyList::~DoublyList()
{
	destroyList();
}