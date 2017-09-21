/*
	Name header
*/

#include "DoublyList.h"

// print
void DoublyList::print() const
{
	if (first == NULL)
		cerr << "List is empty." << endl;
	else
	{
		Node *current = first;; //set pointer current to point to the first node

		while (current != NULL)
		{
			cout << current->getData() << "  ";  //output info
			current = current->getNext();
		}
	}

}

// reversePrint
void DoublyList::reversePrint() const
{
	if (first == NULL)
		cerr << "List is empty." << endl;
	else
	{
		Node *current = last;  //set pointer current to point to the last node

		while (current != NULL)
		{
			cout << current->getData() << "  ";
			current = current->getPrev();
		}
	}
}

// front
int DoublyList::front() const
{
	if (first == NULL)
	{
		cerr << "List is empty. Cannot access front node." << endl;
		system("Pause");
		exit(1);
	}

	return first->getData();
}

// back
int DoublyList::back() const
{
	if (first == NULL)
	{
		cerr << "List is empty. Cannot access back node." << endl;
		system("Pause");
		exit(1);
	}
	
	return last->getData();
}

// copyToList
void DoublyList::copyToList(DoublyList& otherList) const
{
	if (first == NULL)	// calling object is empty
		cerr << "Cannot copy from empty list.";
	else
	{
		if (otherList.first != NULL)	// if other list has nodes
			otherList.destroyList();

		Node *temp = last;
			
		while (temp != NULL)
		{
			otherList.insertFront(temp->getData());
			temp = temp->getPrev();
		}
	}
}

// insertInOrder
void DoublyList::insertInOrder(int insertItem) 
{
	Node *newNode = new Node(insertItem, NULL, NULL);

	//if the list is empty, the new node will be the first and only node
	if (first == NULL)
	{
		first = newNode;
		last = newNode;
	}
	//else if the new node needs to be inserted before the first node
	else if (insertItem < first->getData())
	{
		newNode->setNext(first);
		first->setPrev(newNode);
		first = newNode;
	}
	//else the new node needs to be inserted somewhere after the first node
	else
	{
		Node *current;      //pointer to traverse the list
		bool found = false;

		current = first;

		while (current != NULL && !found) //search the list
		{
			if (current->getData() >= insertItem)
				found = true;
			else
				current = current->getNext();
		}

		//insert the new node somewhere in the middle of the list
		if (current != NULL)
		{
			newNode->setPrev(current->getPrev());
			newNode->setNext(current);
			current->getPrev()->setNext(newNode);
			current->setPrev(newNode);
		}
		//insert newNode at the end of the list
		else
		{
			last->setNext(newNode);
			newNode->setPrev(last);
			last = newNode;
		}
	}

	++count;
	newNode = NULL;
}