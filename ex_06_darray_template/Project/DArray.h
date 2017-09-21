#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

class DArray
{
public:
    DArray( );
    //Default constructor -	initializes array 
	//						with a capacity of 50.

    DArray(int);
	//Constructor - initializes array with a given capacity.
	//@param int - capacity of the array.

    void addElement(int);
    //addElement - adds an element to the array.
	//@param int - the element to add to the array.

	~DArray( ); 
	//Destructor

private:
    int *a;			//will point to an int (it will be an array)
    int capacity;	//capacity of the array
    int used;		//total number of elements in the array

};

#endif