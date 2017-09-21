#include "AnyList.h"

AnyList::AnyList()
{
	ptrToFirst = NULL;
	count = 0;
}

void AnyList::insertFront(int newData)
{
	Node *ptrToNewNode = new Node(newData, ptrToFirst);
	ptrToFirst = ptrToNewNode;
	++count;
}

void AnyList::deleteNote(int deleteData)
{
	if (count == 0)
	{
		cerr << "Cannot delete from an empty list.\n";
	}
	else
	{
		Node *current;
		bool found = false;

		if (ptrToFirst->getData() == deleteData)
		{
			current = ptrToFirst;
			ptrToFirst = ptrToFirst->getPtrToNext();
			delete current;
			current = NULL;
			--count;
			found = true;
		}
		else
		{
			Node *trailCurrent = ptrToFirst;
			current = ptrToFirst->getPtrToNext();

			while ((current!=NULL)&&(!found))
			{
				if (current->getData() == deleteData)
				{
					trailCurrent->setPtrToNext(current->getPtrToNext());
					delete current;
					current = NULL;
					--count;
					found = true;
				}
				else
				{
					trailCurrent = current;
					current = current->getPtrToNext();
				}
			}
		}
		if (!found)
		{
			cout << "Cannot find the deleted item.\n";
		}
	}
}

void AnyList::print() const
{
	if (count == 0)
	{
		cerr << "Cannot print an empty list.\n";
	}
	else
	{
		Node *temp = ptrToFirst;

		while (temp != NULL)
		{
			cout << temp->getData() << " ";
			temp = temp->getPtrToNext();
		}
	}
}

void AnyList::deleteList()
{
	Node *current;

	while (ptrToFirst != NULL)
	{
		current = ptrToFirst;
		ptrToFirst = ptrToFirst->getPtrToNext();
		delete current;
		current = NULL;
	}

	count = 0;
}

void AnyList::insertBack(int newData)
{
	Node *ptrToNewNode = new Node(newData, NULL);
	if (count == 0)
	{
		ptrToFirst = ptrToNewNode;
	//	++count;
	}
	else
	{
		Node *current = ptrToFirst;

		while (current->getPtrToNext() != NULL)
			current = current->getPtrToNext();

		current->setPtrToNext(ptrToNewNode);

	//	++count;
	}

	++count;
}

void AnyList::deleteFirstNode()
{
	if (count == 0)
	{
		cerr << "Cannot delete from an empty list.\n";
	}
	else if (count == 1)
	{
		delete ptrToFirst;
		ptrToFirst = NULL;
		--count;
	}
	else
	{
		Node *current = ptrToFirst;

		ptrToFirst = ptrToFirst->getPtrToNext();
		delete current;
		current = NULL;
		--count;
	}
}

void AnyList::deleteLastNode()
{
	if (count == 0)
	{
		cerr << "Cannot delete from an empty list.\n";
	}
	else if (count == 1)
	{
		delete ptrToFirst;
		ptrToFirst = NULL;
		--count;
	}
	else
	{
		Node *trailCurrent = ptrToFirst;
		Node *current = ptrToFirst->getPtrToNext();

		while (current->getPtrToNext() != NULL)
		{
			trailCurrent = current;
			current = current->getPtrToNext();
		}

		trailCurrent->setPtrToNext(NULL);
		delete current;
		current = NULL;
		--count;
	}
}

void AnyList::replaceData(int key, int newKey)
{
	if (count == 0)
	{
		cerr << "Cannot replace data in an empty list.\n";
	}
	else
	{
		Node *current = ptrToFirst;
		bool found = false;

		while ((current != NULL)&&(!found))
		{
			if (current->getData() == key)
			{
				current->setData(newKey);
				found = true;
			}
			else
			{
				current = current->getPtrToNext();
			}
		}

		if (!found)
		{
			cout << "Cannot find the replaced item.\n";
		}
	}
}

void AnyList::switchData()
{
	if (count < 2)
	{
		cerr << "Cannot switch data from a list containing less than two data.\n";
	}
	else
	{
		int number = ptrToFirst->getData();
		Node *temp = ptrToFirst->getPtrToNext();

		while (temp->getPtrToNext() != NULL)
		{
			temp = temp->getPtrToNext();
		}

		ptrToFirst->setData(temp->getData());
		temp->setData(number);
	}
}

bool AnyList::searchData(int key) const
{
	if (count == 0)
	{
		cerr << "Cannot search an empty list.\n";
	}
	else
	{
		Node *current = ptrToFirst;
		bool found = false;

		while (current != NULL)
		{
			if (current->getData() == key)
			{
				cout << "Item is found.\n";
				return true;
			}
			else
			{
				current = current->getPtrToNext();
			}
		}
		
		if (!found)
			cout << "Cannot find the item.\n";
		return false;
	}
}

int AnyList::findMax() const
{
	if (first == NULL)
	{
		cerr << "Cannot find max.\n";
		return -1;
	}
	else
	{
		Node *current = first->getNext();
		int max = first->getData();

		while (current != NULL)
		{
			if (max < current->getData())
			{
				max = current->getData();
			}

			current = current->getNext();
		}

		return max;
	}
}

int AnyList::findMin() const
{
	if (first == NULL)
	{
		cerr << "Cannot find max.\n";
		return -1;
	}
	else
	{
		Node *current = first->getNext();
		int min = first->getData();

		while (current != NULL)
		{
			if (min > current->getData())
			{
				min = current->getData();
			}

			current = current->getNext();
		}

		return min;
	}
}

bool AnyList::commonEnd(const AnyList& otherList) const
{
	Node *callingObj = ptrToFirst;
	Node *parameterObj = otherList.ptrToFirst;

	while (callingObj->getPtrToNext() != NULL)
	{
		callingObj = callingObj->getPtrToNext();
	}
	
	while (parameterObj->getPtrToNext() != NULL)
	{
		parameterObj = parameterObj->getPtrToNext();
	}

	return (callingObj->getData() == parameterObj->getData());
}

AnyList::~AnyList()
{
	deleteList();
}