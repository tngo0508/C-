#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

template<typename T>
class DArray
{
	template<typename T>
	friend ostream& operator<<(ostream& out, const DArray<T>& otherArray);
public:
    DArray( );
    //Default constructor -	initializes array 
	//						with a capacity of 50.

    DArray(int);
	//Constructor - initializes array with a given capacity.
	//@param int - capacity of the array.

    void addElement(const T&);
    //addElement - adds an element to the array.
	//@param int - the element to add to the array.

	~DArray( ); 
	//Destructor
	int getCapacity() const;
	T getElement(int index) const;
	int getUsed() const;
	void deleteElement(const T& elem);
	void emptyArray();
	bool isEmpty() const;
	bool isFull() const;
	DArray<T>& operator=(const DArray<T>& otherArray);
	T operator[](int index) const;

private:
    T *a;			//will point to an int (it will be an array)
    int capacity;	//capacity of the array
    int used;		//total number of elements in the array
};

#endif