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
	a = new int[capacity];	
	used = 0;
}

template<typename T>
DArray<T>::DArray(const T& newCapacity) 
{
	capacity = newCapacity;
    a = new int[capacity];
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
T DArray<T>::getCapacity() const
{
	return capacity;
}

template<typename T>
T DArray<T>::getElement(const T& number) const
{
	return a[number];
}

template<typename T>
T DArray<T>::getUsed() const
{
	return used;
}

template<typename T>
void DArray<T>::setElement(const T& number, const T& newElement)
{
	a[number] = newElement;
}

template<typename T>
void DArray<T>::deleteElement(const T& number)
{
	for (int i = number; i < used; ++i)
		a[i] = a[i + 1];
	--used;
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
T DArray<T>::operator[](const T& number) const
{
	return a[number];
}





