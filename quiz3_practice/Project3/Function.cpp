#include "DoublyList.h"

void DoublyList::insertBack(int newData)
{
	Node *newNode = new Node(newData, NULL, last);
	if (first == NULL)
	{
		first = newNode;
		last = newNode;
	}
	else
	{
		last->setNext(newNode);
		last = last->getNext();
	}
	++count;
}

void DoublyList::reservePrint() const
{
	Node *current = last;
	while (current != NULL)
	{
		cout << current->getData() << " ";
		current = current->getPrev();
	}
}

void DoublyList::insertInOrder(int insertData)
{
	Node *newNode = new Node(insertData, NULL, NULL);

	if (first == NULL)
	{
		first = newNode;
		last = newNode;
	}
	else
	{
		if (first->getData() > insertData)
		{
			first->setPrev(newNode);
			newNode->setNext(first);
			first = newNode;
		}
		else
		{
			Node *current = first->getNext();
			bool found = false;

			while (current != NULL && !found)
			{
				if (current->getData() > insertData)
					found = true;
				else
					current = current->getNext();
			}

			if (current != NULL)
			{
				newNode->setPrev(current->getPrev());
				newNode->setNext(current);
				current->getPrev()->setNext(newNode);
				current->setPrev(newNode);
			}
			else
			{
				last->setNext(newNode);
				newNode->setPrev(last);
				last = newNode;
			}
		}
	}
	++count;
}

void DoublyList::rotateLeft()
{
	first->setPrev(last);
	last->setNext(first);
	first = first->getNext();
	last = last->getNext();
	first->setPrev(NULL);
	last->setNext(NULL);
}

void DoublyList::rotateright()
{
	last->setNext(first);
	first->setPrev(last);
	first = first->getPrev();
	last = last->getPrev();
	first->setPrev(NULL);
	last->setNext(NULL);
}

void DoublyList::moveKeyToFirst(int key)
{
	if (count == 0)
	{
		cerr << "List is empty.\n";
	}
	else if (count != 1)
	{
		
		Node *current = first->getNext();
		if (current->getNext() == NULL)
		{
			first->setPrev(last);
			last->setNext(first);
			first = last;
			last = last->getNext();
			first->setPrev(NULL);
			last->setNext(NULL);
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

			if (current != NULL)
			{
				if (current != last)
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
}

void DoublyList::moveKeyToLast(int key)
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
				first->setPrev(last);
				last->setNext(first);
				first = last;
				last = last->getNext();
				first->setPrev(NULL);
				last->setNext(NULL);
			}
			else
			{
				first->setPrev(last);
				last->setNext(first);
				first = first->getNext();
				last = last->getNext();
				first->setPrev(NULL);
				last->setNext(NULL);
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

			if (current != NULL && current != last)
			{
				if (current->getNext() != last)
				{
					current->getPrev()->setNext(current->getNext());
					current->getNext()->setPrev(current->getPrev());
					last->setNext(current);
					current->setPrev(last);
					last = last->getNext();
					last->setNext(NULL);
				}
				else
				{
					current->getPrev()->setNext(last);
					last->setPrev(current->getPrev());
					last->setNext(current);
					current->setPrev(last);
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
				first->setPrev(last);
				last->setNext(first);
				first = last;
				last = last->getNext();
				first->setPrev(NULL);
				last->setNext(NULL);
			}
			else
			{
				first->setNext(current->getNext());
				current->getNext()->setPrev(first);
				first->setPrev(current);
				current->setNext(first);
				first = current;
				first->setPrev(NULL);
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

			if (current != NULL)
			{
				if (current != last)
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
				first->setPrev(last);
				last->setNext(first);
				first = last;
				last = last->getNext();
				first->setPrev(NULL);
				last->setNext(NULL);
			}
			else
			{
				first->setPrev(last->getPrev());
				first->setNext(last);
				last->getPrev()->setNext(first);
				last->setPrev(first);
				first = current;
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

			if (current != NULL && current != (last->getPrev()))
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
					if (count == 2)
					{
						first->setPrev(last);
						last->setNext(first);
						first = last;
						last = last->getNext();
						first->setPrev(NULL);
						last->setNext(NULL);
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
}

void DoublyList::swapEnds()
{
	if (count == 0)
	{
		cerr << "List is empty.\n";
	}
	else if (count == 2)
	{
		first->setPrev(last);
		last->setNext(first);
		first = last;
		last = last->getNext();
		first->setPrev(NULL);
		last->setNext(NULL);
	}
	else if (count > 3)
	{
		first->setPrev(last->getPrev());
		last->setNext(first->getNext());
		first = first->getPrev()->getNext();
		last = last->getNext()->getPrev();
		last->getNext()->setPrev(first);
		first->getPrev()->setNext(last);
		first->setPrev(NULL);
		last->setNext(NULL);
	}
}