#include "DoublyList.h"

void DoublyList::moveKeyToLast(int key)
{
	if (count == 0)
	{
		cerr << "empty list\n";
	}
	else if (count != 1)
	{

		Node *current = first;

		if (first->getData() == key)
		{
			first = first->getNext();
			first->setPrev(NULL);
			current->setPrev(last);
			current->setNext(NULL);
			last->setNext(current);
		}
		else
		{
			bool found = false;

			while (current != NULL && !found)
			{
				if (current->getData() == key)
					found = true;
				else
					current = current->getNext();
			}
			if (found)
			{
				if (current != last)
				{
					current->getPrev()->setNext(current->getNext());
					current->getNext()->setPrev(current->getPrev());
					current->setPrev(last);
					last->setNext(current);
					last = last->getNext();
					last->setNext(NULL);
				}
			}
		}
	}
}

void DoublyList::moveKeyToSecond(int key)
{
	if (count == 0)
	{
		cerr << "List is empty.\n";
	}
	else if (count != 1)
	{

		Node *current = first->getNext();

		if (first->getData() == key)
		{
			if (current->getNext() == NULL)
			{
				first->setNext(current->getNext());
				current->setNext(first);
				current->setPrev(NULL);
				first->setPrev(current);
				first = first->getPrev();
				last = last->getNext();
			}
			else
			{
				first->setNext(current->getNext());
				current->getNext()->setPrev(first);
				current->setNext(first);
				current->setPrev(NULL);
				first->setPrev(current);
				first = first->getPrev();
			}
		}
		else
		{
			current = current->getNext();
			bool found = false;
			while (current != NULL && !found)
			{
				if (current->getData() == key)
					found = true;
				else
					current = current->getNext();
			}
			if (found)
			{
				if (current->getNext() != NULL)
				{
					current->getPrev()->setNext(current->getNext());
					current->getNext()->setPrev(current->getPrev());
					current->setPrev(first);
					current->setNext(first->getNext());
					first->getNext()->setPrev(current);
					first->setNext(current);
				}
				else
				{
					last = last->getPrev();
					last->setNext(NULL);
					current->setPrev(first);
					current->setNext(first->getNext());
					first->getNext()->setPrev(current);
					first->setNext(current);
				}
			}
		}
	}
}

void DoublyList::movekeyTofirst(int key)
{
	if (count == 0)
	{
		cerr << "List is empty.\n";
	}
	else if (count != 1)
	{
		Node *current = first->getNext();
		bool found = false;

		while (current != NULL && !found)
		{
			if (current->getData() == key)
				found = true;
			else
				current = current->getNext();
		}

		if (found)
		{
			if (current->getNext() != NULL)
			{
				current->getPrev()->setNext(current->getNext());
				current->getNext()->setPrev(current->getPrev());
				current->setNext(first);
				first->setPrev(current);
				first = first->getPrev();
				first->setPrev(NULL);
			}
			else
			{
				last = last->getPrev();
				last->setNext(NULL);
				current->setNext(first);
				first->setPrev(current);
				first = first->getPrev();
				first->setPrev(NULL);
			}
		}
	}
}


void DoublyList::moveKeyToBeforeLast(int key)
{
	if (count == 0)
	{
		cerr << "List is empty.\n";
	}
	else if (count != 1)
	{
		Node *current = first->getNext();

		if (first->getData() == key)
		{
			if (current->getNext() == NULL)
			{
				first->setNext(current->getNext());
				current->setNext(first);
				current->setPrev(NULL);
				first->setPrev(current);
				first = first->getPrev();
				last = last->getNext();
			}
			else
			{
				first->setNext(last);
				last->setPrev(first);
				first->setPrev(current);
				current->setNext(first);
				first = first->getPrev();
				first->setPrev(NULL);
			}
		}
		else
		{

			bool found = false;

			while (current != NULL && !found)
			{
				if (current->getData() == key)
					found = true;
				else
					current = current->getNext();
			}

			if (found)
			{
				if (current != last)
				{
					current->getPrev()->setNext(current->getNext());
					current->getNext()->setPrev(current->getPrev());
					current->setPrev(last->getPrev());
					current->setNext(last);
					last->getPrev()->setNext(current);
					last->setPrev(current);
				}
				else
				{
					last = last->getPrev();
					last->setNext(NULL);
					current->setPrev(last->getPrev());
					current->setNext(last);
					last->getPrev()->setNext(current);
					last->setPrev(current);
				}
			}
		}
	}
}

void DoublyList::swapEnds()
{
	if (count == 2)
	{
		first->setPrev(last);
		last->setNext(first);
		first->setNext(NULL);
		last->setPrev(NULL);
		first = first->getPrev();
		last = last->getNext();
	}
	else
	{
		first->setPrev(last->getPrev());
		last->setNext(first->getNext());
		first = first->getPrev()->getNext();
		last = last->getNext()->getPrev();
		first->getPrev()->setNext(last);
		last->getNext()->setPrev(first);
		first->setPrev(NULL);
		last->setNext(NULL);
	}
}