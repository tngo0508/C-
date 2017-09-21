#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
	Node() : data(0), next(NULL), prev(NULL) {}
	Node(int theData, Node *newNext, Node *newPrev)
		: data(theData), next(newNext), prev(newPrev) {}
	int getData() const { return data; }
	Node *getNext()	const { return next; }
	Node *getPrev() const { return prev; }
	void setData(int theData) { data = theData; }
	void setNext(Node *pointer) { next = pointer;}
	void setPrev(Node *pointer) { prev = pointer; }
	~Node() {}
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
	void deleteNode(int deleteData);
	void print() const;
	void destroyList();
	
	~DoublyList();

	//function
	void insertBack(int newData);
	void reservePrint() const;
	void insertInOrder(int insertData);
	void rotateLeft();
	void rotateright();
	void moveKeyToFirst(int key);
	void moveKeyToLast(int key);
	void moveKeyToSecond(int key);
	void moveKeyToBeforeLast(int key);
	void swapEnds();
private:
	int count;
	Node *first;
	Node *last;
};

#endif