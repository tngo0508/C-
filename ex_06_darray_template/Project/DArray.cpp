#include "DArray.h"

DArray::DArray( )
{
    capacity = 50;
	a = new int[capacity];	
	used = 0;
}

DArray::DArray(int newCapacity) 
{
	capacity = newCapacity;
    a = new int[capacity];
	used = 0;	 
}

void DArray::addElement(int element) 
{
    if (used >= capacity)
    {
        cerr << "Attempt to exceed capacity in DArray.\n";
        exit(0); 
    }
    a[used] = element;
    ++used;
}

DArray::~DArray( )
{
    delete [] a; //delete the array
	a = NULL;	 //null the pointer
}
