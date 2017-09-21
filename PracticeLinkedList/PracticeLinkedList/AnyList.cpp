#include "AnyList.h"

AnyList::AnyList()
{
	count = 0;
	ptrToFirst = NULL;
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

AnyList::~AnyList()
{
	deleteList();
}

void AnyList::insertFront(int newData)
{
	Node *ptrToNewNode = new Node;

	ptrToNewNode->setData(newData);
	ptrToNewNode->setPtrToNext(ptrToFirst);
	ptrToFirst = ptrToNewNode;

	++count;
}

void AnyList::insertBack(int newData)
{
	Node *ptrToNewNode = new Node(newData, NULL);

	if (count == 0)
	{
		ptrToFirst = ptrToNewNode;
	}
	else
	{
		Node *current = ptrToFirst;

		while (current->getPtrToNext() != NULL)
			current = current->getPtrToNext();

		current->setPtrToNext(ptrToNewNode);
	}

	++count;
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

void AnyList::deleteNode(int deleteData)
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

			while ((current != NULL) && (!found))
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
			cout << "Cannot find the item.\n";
		}
	}
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

void AnyList::switchData()
{
	Node *temp = ptrToFirst->getPtrToNext();
	int number = ptrToFirst->getData();

	while (temp->getPtrToNext() != NULL)
		temp = temp->getPtrToNext();

	ptrToFirst->setData(temp->getData());
	temp->setData(number);
}

bool AnyList::search(int key) const
{
	if (count == 0)
	{
		cerr << "Cannot search from an empty list.\n";
		return false;
	}
	else
	{
		Node *current = ptrToFirst;

		while (current != NULL)
		{
			if (current->getData() == key)
			{
				return true;
			}
			else
			{
				current = current->getPtrToNext();
			}
		}
		return false;
	}
}

void AnyList::replace(int key, int newKey)
{
	if (count < 2)
	{
		cerr << "Cannot replace a list containing less than 2 items.\n";
	}
	else
	{
		Node *current = ptrToFirst;

		while (current != NULL)
		{
			if (current->getData() == key)
			{
				current->setData(newKey);
			}
			else
			{
				current = current->getPtrToNext();
			}
		}
	}
}

int AnyList::findMax()
{
	if (count == 0)
	{
		cerr << "Cannot find max in an empty list.\n";
	}
	else if (count == 1)
	{
		return ptrToFirst->getData();
	}
	else
	{
		int max = ptrToFirst->getData();
		Node *current = ptrToFirst->getPtrToNext();

		while (current != NULL)
		{
			if (max < current->getData())
			{
				max = current->getData();
			}
			else
			{
				current = current->getPtrToNext();
			}
		}

		return max;
	}
}