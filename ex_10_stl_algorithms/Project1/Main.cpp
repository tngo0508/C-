#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <utility>

using namespace std;

int main()
{
	/***************************************************************************
			ALGORITHM
	***************************************************************************/

	cout << "  ***  A FEW ALGORITHM FUNCTIONS  ***  \n\n\n";

	ostream_iterator<int> screen1(cout, " ");

	vector<int> v1(10);	

	// Use the <algorithm> fill function to fill the vector with 2's
	// Your code here...



	copy(v1.begin(), v1.end(), screen1);
	cout << endl;

	// Use the <algorithm> fill_n function to change the vector to: 5 5 5 2 2 2 2 2 2 2
	// Your code here...



	copy(v1.begin(), v1.end(), screen1);
	cout << endl;

	/***************************************************************************/

	char c1[10] = {'a','i','c','d','e','f','o','h','u','j'};
	vector<char> v2(c1, c1 + 10);
	vector<char>::iterator location;

	// Use the <algorithm> find function to find the index of the character 'h'
	// Your code here... 



	// Using the iterator location, output the character right after 'h'
	// Your code here...
	


	/***************************************************************************/
	
	ostream_iterator<char> screen2(cout, " ");

	char c2[10] = {'A','a','A','B','A','c','D','e','F','A'};
	vector<char> v3(c2, c2 + 10);
	vector<char>::iterator lastElem;

	// This is tricky. Use the <algorithm> remove function to remove all A's.
	// Your code here...
	


	// Use the copy function to output the elements in the vector after removing all A's.
	// If you are not getting the expected results, you need
	//   to read about the remove function more carefully.
	// Your code here...
	


	cout << endl;

	/***************************************************************************/

	int a1[14] = {1,2,3,4,1,3,4,1,4,2,4,1,1,1};
	vector<int> v4(a1, a1 + 14);

	// Use the <algorithm> replace function to replace all 1's with 0's.
	// Your code here...
	


	copy(v4.begin(), v4.end(), screen1);
	cout << endl;

	/***************************************************************************/

	int a2[10] = {4,0,5,3,1,9,8,7,6,2};
	vector<int> v5(a2, a2 + 10);

	// Use the <algorithm> binary_search function to find number 2.
	// Output "Found" or "Not found."
	// If you are getting "Not found" is because you are forgetting
	//   the main assumption about binary search. What do you need to 
	//   do before you can actually perform a binary search?
	// Your code here...
	


	/***************************************************************************/

	int a3[10] = {0,1,2,3,4,5,6,7,8,9};
	vector<int> v6(a3, a3 + 10);

	// Use <algorithm> reverse function to reverse the elements in the vector.
	// Your code here...
	


	copy(v6.begin(),v6.end(),screen1);
	cout << endl;

	/***************************************************************************/

	int a4[10] = {1,2,2,1,2,2,1,1,1,1};
	vector<int> v7(a4, a4 + 10);

	// Use the <algorithm> count function to output how many 1's are in the vector.
	// Your code here...
	


	/***************************************************************************/

	vector<int> v8 = { 13, 75, 28, 35 };
	
	// Use function insert from the STL <vector> to insert 88 at index 2,
	// in between 75 and 28.
	// Your code here...
	

	
	cout << "\nVector elements: ";		// 13 75 88 28 35
	copy(v8.begin(), v8.end(), screen1);

	/***************************************************************************/

	vector<int> v9 = { 23, 15, 93, 98, 58, 58, 58, 36, 15, 58 };
	list<int> intList1;            

	// Insert all the elements of v9 into intList1 by using the 
	//  function insert of the STL <list>.
	// Your code here...	
	


	cout << "\nList elements: ";		// 23 15 93 98 58 58 58 36 15 58
	copy(intList1.begin(), intList1.end(), screen1);

	/***************************************************************************/
	
	//Sort all elements in the list (browse the list of functions in 
	//  cplusplus.com to figure out which function you need to use).
	// --> This is ONE statement only.
	// Your code here...
    


	cout << "\nAfter sorting the list..."
	    << "\nFirst list: "; // 15 15 23 36 58 58 58 58 93 98	
	copy(intList1.begin(), intList1.end(), screen1);

	//Remove all consecutive duplicates in the list (browse the list of 
	//  functions in cplusplus.com to figure out which function you need to use).
	// --> This is ONE statement only.
	// Your code here...
	


	cout << "\nAfter removing consecutive duplicates in the first list..." 
		<< "\nFirst list: ";  // 15 23 36 58 93 98
	copy(intList1.begin(), intList1.end(), screen1);	

	/***************************************************************************/

	set<int> intSet;	
	intSet.insert(16);
	intSet.insert(8);
	intSet.insert(20);
	intSet.insert(43);
	intSet.insert(9);
	intSet.insert(27);
	intSet.insert(38);
	
	//Erase 43 from the set using the C++98 STL <set> erase void function.
	//Your code here...
	


	cout << "\nSet is: "; // 8 9 16 20 27 38 
	copy(intSet.begin(), intSet.end(), screen1);

	set<int>::const_iterator iterSet = intSet.begin();

	//Erase 20 from the set using the C++11 STL <set> erase function that 
	//  returns an iterator (use iterSet)
	//Two statements: Find the element to get the iterator position using
	//  the STL <set> find function, and then use the function erase to 
	//  delete the element.
	//Your code here...
	


	cout << "\nSet is: "; // 8 9 16 27 38 
	copy(intSet.begin(), intSet.end(), screen1);
	cout << endl; 

	/****************************************************************************/
	
	map<string, string> schedule;    

	/* Use the functions insert and make_pair to insert the following pairs:
			Monday/Buy a new computer.
			Tuesday/Set up router for new computer.
			Wednesday/Start working on assignment.
			Thursday/Debug the assignment!!!
			Saturday/Go to Disneyland with friends.
			Sunday/Just relax... The new week will start soon.
	*/
	//Your code here...
	


	cout << "Monday: ";
	
	//Output entry for Monday using the overloaded subscript operator []
	//Your code here...
	


	cout << "\nThursday: ";

	//Check if Thursday is in the schedule by using the function find from the
	//  STL <map> and output what is due on that day, otherwise output "Nothing 
	//  to do on Thursday."
	//Your code here...
   


	/***************************************************************************/

	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	queue<int> q;

	//Reverse the contents of the stack by copying the elements into 
	//  the queue and then re-inserting them into the stack.
	//Your code here...
	
	

	while (!s.empty())		// Output: 1 2 3 4 5 6 
	{
		cout << s.top();
		s.pop();
	}

	cout  <<  endl;
	system("Pause");
	return 0;
}

