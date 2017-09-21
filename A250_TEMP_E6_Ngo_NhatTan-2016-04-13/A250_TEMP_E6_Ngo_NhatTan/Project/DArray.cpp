#include "DArray.h"

template<typename T>
ostream& operator<<(ostream& out, const DArray<T>& otherArray)
{
	for (int i = 0; i < otherArray.used; ++i)
		out << otherArray.a[i] << " ";
	return out;
}

template<typename T>
DArray<T>::DArray( )
{
    capacity = 50;
	a = new T [capacity];	
	used = 0;
}

template<typename T>
DArray<T>::DArray(int newCapacity) 
{
	capacity = newCapacity;
    a = new T [capacity];
	used = 0;	 
}

template<typename T>
void DArray<T>::addElement(const T& element) 
{
    if (used >= capacity)
    {
        cerr << "Attempt to exceed capacity in DArray.\n";
		system("Pause");
        exit(0); 
    }
    a[used] = element;
    ++used;
}

template<typename T>
DArray<T>::~DArray( )
{
    delete [] a; //delete the array
	a = NULL;	 //null the pointer
}

template<typename T>
int DArray<T>::getCapacity() const
{
	return capacity;
}

template<typename T>
T DArray<T>::getElement(int index) const
{
	return a[index];
}

template<typename T>
int DArray<T>::getUsed() const
{
	return used;
}

template<typename T>
void DArray<T>::deleteElement(const T& elem)
{
	bool found = false;
	for (int i = 0; i < used; ++i)
	{
		if (a[i] == elem)
		{
			for (int j = i; j < used; ++j)
			{
				a[j] = a[j + 1];
			}
			--used;
			found = true;
		}
	}
	if (!found)
	{
		cerr << "Cannot find the item to be deleted.\n";
	}
}


template<typename T>
void DArray<T>::emptyArray()
{
	used = 0;
}

template<typename T>
bool DArray<T>::isEmpty() const
{
	return (used == 0);
}

template<typename T>
bool DArray<T>::isFull() const
{
	return (used == capacity);
}

template<typename T>
DArray<T>& DArray<T>::operator=(const DArray<T>& otherArray)
{
	if (&otherArray != this) //avoid self assignment
	{
		if (capacity != otherArray.capacity)
		{
			delete[] a; //release space
			a = new T[otherArray.capacity]; //re-create array
			capacity = otherArray.capacity;
		}
		for (T i = 0; i < otherArray.capacity; ++i) //copy a[i] = rightSide.a[i];
			a[i] = otherArray.a[i];
	}
	else
		cerr << "Attempted assignment to itself.";
	return*this;
}

template<typename T>
T DArray<T>::operator[](int index) const
{
	return a[index];
}



