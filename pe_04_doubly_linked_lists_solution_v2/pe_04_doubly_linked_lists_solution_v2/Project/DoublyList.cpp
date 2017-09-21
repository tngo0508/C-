#include "DoublyList.h"

	// constructor
DoublyList::DoublyList()
{
	first = NULL;
	last = NULL;
	count = 0;
}

	// destructor
DoublyList::~DoublyList()
{
	destroyList();
}

	// insertFront
void DoublyList::insertFront(int newData)
{
	Node *newNode = new Node(newData, first, NULL);

	if(first == NULL) 
    {
       first = newNode;		//set "first" to be the new node
       last = newNode;		//set "last" to be the new node
    }
    else
	{
        first->setPrev(newNode);	//make first's previous link point to the new node
		newNode->setNext(first);	//make new node's next link point to first
		first = newNode;			//set "first" to the the new node
	}

	++count;
}

	// destroyList
void DoublyList::destroyList()
{ 
    Node  *temp; //pointer to delete the node
	
    while (first != NULL)
    {
        temp = first;
        first = first->getNext();
        delete temp;
		temp = NULL;
    }

    last = NULL;
	count = 0;
}
