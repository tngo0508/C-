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

void DoublyList::deleteNode(int deleteData)
{
	if (count == 0)
	{
		cerr << "List is empty.\n";
	}
	else
	{
		Node *current = first;
		if (first->getData() == deleteData)
		{
			first = first->getNext();
			if (first == NULL)
				last = NULL;
			else
				first->setPrev(NULL);
			delete current;
			current = NULL;
			--count;
		}
		else
		{
			bool found = false;
			while (current != NULL && !found)
			{
				if (current->getData() == deleteData)
					found = true;
				else
					current = current->getNext();
			}

			if (current == NULL)
				cerr << "Cannot find the item to be deleted.\n";
			else
			{
				if (current != last)
				{
					current->getPrev()->setNext(current->getNext());
					current->getNext()->setPrev(current->getPrev());
				}
				else
				{
					last = last->getPrev();
					last->setNext(NULL);
				}

				delete current;
				current = NULL;
				--count;
			}
		}
	}
}

void DoublyList::print() const
{
	if (count == 0)
	{
		cerr << "List is empty.\n";
	}
	else
	{
		Node *temp = first;
		while (temp != NULL)
		{
			cout << temp->getData() << " ";
			temp = temp->getNext();
		}
	}
}

void DoublyList::destroyList()
{
	Node *current;
	while (first != NULL)
	{
		current = first;
		first = first->getNext();
		delete current;
		current = NULL;
	}

	last = NULL;
	count = 0;
}

DoublyList::~DoublyList()
{
	destroyList();
}