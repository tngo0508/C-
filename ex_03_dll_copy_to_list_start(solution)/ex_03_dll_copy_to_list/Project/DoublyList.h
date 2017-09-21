#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
#include <iostream>
using namespace std;

class Node
{
public:
	Node() : data(0), prev(NULL), next(NULL) {}
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
		Function copyToList

		Use the debugger to check that your list is 
	*********************************************************/

	// copyToList
	void copyToList(DoublyList& otherList) const;
private:
    Node *first;	// pointer to the first node on the list
    Node *last;		// pointer to the last node on the list
	int count;		// number of nodes in the list
};

#endif