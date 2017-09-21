#include "AnyList.h"

	//constructor
AnyList::AnyList()
{
	ptrToFirst = NULL;
	count = 0;
}

	//print
void AnyList::print() const
{
	if (ptrToFirst == NULL)
		cerr << "List is empty." << endl;
	else
	{
		Node *current;	//create a pointer to traverse the list 
		current = ptrToFirst;	//set the current pointer to point to the first node

		while (current != NULL)	//while the current pointer is not pointing to NULL
		{						//  that is, the current pointer has not reached the 
			//  end of the list
			cout << current->getData() << " ";	//output the data 
			current = current->getPtrToNext();		//move the current pointer forward
		}
	}
}

	//destroyList
void AnyList::destroyList()
{ 
    Node  *temp; //pointer to delete the node
	
	while (ptrToFirst != NULL)
    {
		temp = ptrToFirst;
		ptrToFirst = ptrToFirst->getPtrToNext();
        delete temp;
		temp = NULL;
    }

	count = 0;
}

	//destructor
AnyList::~AnyList()
{
	destroyList();
}

/*************************************************

		Write your code below this line.

*************************************************/

//Definition function getNumOfItems
int AnyList::getNumOfItems() const
{
	return count;
}

//Definition function insertBack
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
		{
			current = current->getPtrToNext();
		}
		current->setPtrToNext(ptrToNewNode);
	}
	

	++count;
}

//Definition function deleteFirstNode
void AnyList::deleteFirstNode()
{
	if (count == 0)
	{
		cerr << "Cannot delete. List is empty." << endl;
	}
	else if (count == 1)
	{
		delete ptrToFirst;
		ptrToFirst = NULL;
		--count;
	}
	else
	{
		Node *temp = ptrToFirst;

			ptrToFirst = ptrToFirst->getPtrToNext();

			delete temp;
			temp = NULL;

			--count;
	}
}

//Definition function deleteLastNode
void AnyList::deleteLastNode()
{
	Node *trailCurrent = ptrToFirst;
	Node *current = current->getPtrToNext();
	
	while (current->getPtrToNext != NULL)
	{
			trailCurrent = current;
			current = current->getPtrToNext();
	}

	trailCurrent->setPtrToNext(NULL);
	delete current;

	current = NULL;
	trailCurrent = NULL;
}

//Definition function search
//Assumption: All keys are unique
bool AnyList::search(int key) const
{
	if (count == 0)
	{
		cerr << "Cannot search from an empty list." << endl;
		return false;
	}
	else
	{
		Node *current = ptrToFirst;

		while (current != NULL)
		{
			if (current->getData() == key)
				return true;
			else
				current = current->getPtrToNext();
		}

		return false;
	}
}
//Definition function findMax


//Definition function replaceData
//Assumption: All keys are unique


//Definition function commonEnds
bool AnyList::commonEnd(const AnyList& otherList) const
{
	if (count == 0 || otherList.count == 0)
	{
		cerr << "One of the lists is empty." << endl;
	}
	else
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
}