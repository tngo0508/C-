#ifndef ANYLIST_H
#define ANYLIST_H

#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
	Node() : data(0), ptrToNext(NULL) {}
	Node(int theData, Node *newPtrToNext) : data(theData), ptrToNext(newPtrToNext) {}
	Node *getPtrToNext() const { return ptrToNext; }
	int getData() const { return data; }
	void setData(int theData) { data = theData; }
	void setPtrToNext(Node *newPtrToNext) { ptrToNext = newPtrToNext; }
	~Node() {}
private:
	int data;
	Node *ptrToNext;
};

class AnyList
{
public:
	AnyList();
	void deleteList();
	void insertFront(int);
	void insertBack(int);
	void print() const;
	void deleteNode(int);
	void deleteFirstNode();
	void deleteLastNode();
	void switchData();
	bool search(int) const; 
	void replace(int, int);
	int findMax();
	int findMin();
	~AnyList();
private:
	int count;
	Node *ptrToFirst;
};

#endif