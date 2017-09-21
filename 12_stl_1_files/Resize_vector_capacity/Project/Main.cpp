#include <iostream>
#include <vector>

using namespace std;

void example1(); // without re-sizing
void example2(); // explicitly re-sizing

int main()
{
	example1();		// without re-sizing
	cout << "\n----------------------------------\n";
	example2();		// explicitly re-sizing
	cout << "\n----------------------------------\n";
	
	cout << endl;
	system("Pause");
	return 0;
}

	// without resizing
void example1()
{
	/*********************************************************************

								FIRST EXAMPLE

	After inserting 100 elements, the capacity of the vector is 141.
	After deleting 90 elements, the capacity is still 141.
	After deleting the remaining elements, the capacity is still 141.

	We re-insert 100 elements (capacity is still 141).
	We call function clear(), and capacity is still 141.

	**********************************************************************/
	//cout << "EXAMPLE 1: Without resizing\n\n"; 
	//
	//vector<int> v;

	//// Empty vector: Show size and capacity
	//cout << "Empty vector...";
	//cout << "\nCAPACITY: " << static_cast<int>(v.capacity());
	//cout << "\nSIZE: " << static_cast<int>(v.size());
	//cout << endl;

	//// Insert 1-100 integers 
	//for (int i = 0; i < 100; ++i)
	//	v.push_back(i + 1);

	//// Print vector of 100 elements
	//cout << "After inserting 100 elements...\n";
	//int size = static_cast<int>(v.size());
	//for (int i = 0; i < size; ++i)
	//	cout << v[i] << " ";
	//cout << endl;

	//// Show size and capacity of vector containing 100 elements
	//cout << "\nCAPACITY: " << static_cast<int>(v.capacity());
	//cout << "\nSIZE: " << static_cast<int>(v.size());
	//cout << endl;


	//// Delete 90 elements from the vector containing 100 elements
	//for (int i = 0; i < 90; ++i)
	//	v.erase(v.begin() + 2);

	//// Print vector after deleting	
	//cout << "\nAfter deleting 90 elements...";
	//cout << "\nVector is now...\n";
	//size = static_cast<int>(v.size());
	//for (int i = 0; i < size; ++i)
	//	cout << v[i] << " ";
	//cout << endl;

	//// Show size and capacity of vector containing 10 elements
	//cout << "\nCAPACITY: " << static_cast<int>(v.capacity());
	//cout << "\nSIZE: " << static_cast<int>(v.size());
	//cout << endl;

	//// Delete all elements from the vector 
	//cout << "\nRemove all...";
	//for (int i = 0; i < 10; ++i)
	//	v.erase(v.begin());

	//// Show size and capacity of the empty vector
	//cout << "\nCAPACITY: " << static_cast<int>(v.capacity());
	//cout << "\nSIZE: " << static_cast<int>(v.size());
	//cout << endl;

	//// Print empty vector
	//cout << "\nVector is now...\n";
	//size = static_cast<int>(v.size());
	//for (int i = 0; i < size; ++i)
	//	cout << v[i] << " ";

	//cout << "\nDid it print?" << endl;
	//cout << "\nWhat if we use the function clear()?" << endl;

	//// Insert 1-100 integers 
	//for (int i = 0; i < 100; ++i)
	//	v.push_back(i + 1);

	//// Print vector of 100 elements
	//cout << "\nAfter inserting 100 elements again...\n";
	//size = static_cast<int>(v.size());
	//for (int i = 0; i < size; ++i)
	//	cout << v[i] << " ";
	//cout << endl;

	//// Clear the vector
	//v.clear();

	//// Show size and capacity of the empty vector
	//cout << "\nAfter using clear()...";
	//cout << "\nCAPACITY: " << static_cast<int>(v.capacity());
	//cout << "\nSIZE: " << static_cast<int>(v.size());
	//cout << endl;
}

	// explicitly re-sizing
void example2()
{
	/*********************************************************************

								SECOND EXAMPLE


	When resizing to shrink, elements are lost.
	When resizing to expand, new elements will be set to zeros.

	**********************************************************************/

	cout << "EXAMPLE 2: Explicitly resizing\n\n"; 
	
	vector <int> v;
	
	// Insert 1-50 integers 
	for (int i = 0; i < 50; ++i)
		v.push_back(i + 1);

	// Print vector of 50 elements
	cout << "After inserting 50 elements...\n";
	int size = static_cast<int>(v.size());
	for (int i = 0; i < size; ++i)
		cout << v[i] << " ";
	cout << endl;

	// Show size and capacity of vector containing 100 elements
	cout << "\nCAPACITY: " << static_cast<int>(v.capacity());
	cout << "\nSIZE: " << static_cast<int>(v.size());
	cout << endl;

	// Resize vector to 20 <= all elements will be lost!
	v.resize(20);

	// Print vector after re-sizing	
	cout << "\nAfter re-sizing to 20...";
	cout << "\nVector is now...\n";
	size = static_cast<int>(v.size());
	for (int i = 0; i < size; ++i)
		cout << v[i] << " ";
	cout << endl;

	// Resize vector to 40 <= you are not INCREASING the capacity of the vector
	v.resize(40);

	// Print vector of 40 elements
	cout << "\nRe-sizing the vector from capacity 20 to capacity 40...\n"
		<< "Additional elements will be zeros...\n";	
	size = static_cast<int>(v.size());
	for (int i = 0; i < size; ++i)
		cout << v[i] << " ";
	cout << endl;

	// Resize vector to +50 <= you are not INCREASING by 50 the capacity of the vector
	v.resize(v.size() + 50);

	// Print all elements
	cout << "\nRe-sizing the vector by adding 50 more slots...\n"
		<< "Additional elements will be zeros...\n";
	size = static_cast<int>(v.size());
	for (int i = 0; i < size; ++i)
		cout << v[i] << " ";
	cout << endl;

}