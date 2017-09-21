#include <iostream>
#include <vector>
using namespace std;

int main()
{
	/*********************************************************************
	
								FIRST EXAMPLE

	Note how the capacity is changed automatically. 

	**********************************************************************/
	//cout << "-------------- FIRST VECTOR --------------\n\n";
	//
	//vector<int> v1;
	//
	//cout << "Capacity of the vector when empty: " << v1.capacity() << "\n\n";
	//
	////insert 100 elements in the vector
	//for (int i = 0; i < 100; ++i)
	//{
	//	v1.push_back(i);	
	//	cout << "Inserted item " << i + 1 << " => Capacity is: "
	//		<< v1.capacity() << endl;
	//}

	//cout << "\nSize of v1: " << v1.size();
	//cout << "\nCapacity of v1: " << v1.capacity();
	//cout << "\nMaximum size of v1: " << v1.max_size();


	/*********************************************************************

								SECOND EXAMPLE

	We reserve the capacity to be increased to 40 right after inserting
	item 9. Once we reach capacity 40, then the vector will keep on 
	growing automatically.

	**********************************************************************/

	cout << "\n\n\n-------------- SECOND VECTOR --------------\n\n";	

	vector<int> v2;
	
	cout << "Capacity of the vector when empty: " << v2.capacity() << "\n\n";

	cout << "\nStart inserting in the empty vector...\n";
	for (int i = 0; i < 10; ++i)
	{
		v2.push_back(i);	
		cout << "Inserted item " << i << " => Capacity is: "
			<< v2.capacity() << endl;
	}

	//reserve the capacity to 40
	v2.reserve(40);
	cout << "\nv2.reserve(40);";
	cout << "\nSize of v2: " << v2.size();
	cout << "\nCapacity of v2: " << v2.capacity();
	cout << endl << endl;

	//insert another 60 elements in the vector
	for (int i = 0; i < 60; ++i)
	{
		v2.push_back(i + 11);	
		cout << "Inserted item " << (i + 11) << " => Capacity is: "
			<< v2.capacity() << endl;
	}
	
	cout << "\nSize of v2: " << v2.size();
	cout << "\nCapacity of v2: " << v2.capacity();
	cout << "\nMaximum size of v2: " << v2.max_size();

	cout << endl;
	system("Pause");
	return 0;
}