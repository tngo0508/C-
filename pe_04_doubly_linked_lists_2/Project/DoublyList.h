#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
#include <iostream>
using namespace std;

class Node
{
public:
	Node() : data(0), next(NULL), prev(NULL) {}
	Node(int newData, Node *newPrev, Node *newNext)
		: data(newData), prev(newPrev), next(newNext){}
    Node *getNext( ) const { return next; }
    Node *getPrev( ) const { return prev; }
    int getData( ) const { return data; }
    void setData(const int& newData) { data = newData; }
	void setNext(Node *newNext) { next = newNext; }
	void setPrev(Node *newPrev) { prev = newPrev; }
	~Node(){}
private:
    int data;
    Node *next;
    Node *prev;
};


class DoublyList
{
public:
	DoublyList(); 
	
	void insertFront(int newData);

	~DoublyList();

	void destroyList();

	/********************************************************
		Functions to implement
	*********************************************************/

	//print - Prints all elements in the list, starting from
	//		  the first element.
	void print() const;


	//reversePrint - Prints all elements in the list,
	//				 starting from the last element.
	void reversePrint() const;


	//front - Returns the first element of the list
	//				without removing it. If the list is empty, 
	//				the program terminates.
	int front() const;


	//back - Returns the last element of the list
	//			   without removing it. If the list is empty, 
	//			   the program terminates.
	int back() const;

	//copyToList - Copies in reverse order all the nodes in the 
	//             calling object into the parameter list.
	void copyToList(DoublyList& otherList) const;


	//insertInOrder - Inserts the given element in ascending order.
	void insertInOrder(int insertItem);


private:
    Node *first;	// pointer to the first node on the list
    Node *last;		// pointer to the last node on the list
	int count;		// number of nodes in the list
};

#endif