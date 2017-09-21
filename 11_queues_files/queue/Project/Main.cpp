#include <iostream>                                     //Line 1
#include <queue>                                        //Line 2

using namespace std;                                    //Line 3

int main()                                              //Line 4
{                                                       //Line 5
	queue<char> charQueue;                              //Line 6

	charQueue.push('B');                                 //Line 7
	charQueue.push('F');                                 //Line 8
	charQueue.push('M');                                 //Line 9
	charQueue.push('X');                                 //Line 10

	cout << "Line 11: The front element of charQueue: "
		<< charQueue.front() << endl;                   //Line 11

	cout << "Line 12: The last element of charQueue: "
		<< charQueue.back() << endl;                    //Line 12

	charQueue.pop();                                    //Line 13

	cout << "Line 14: After the pop operation, the "
		<< "front element of charQueue: "
		<< charQueue.front() << endl;                   //Line 14

	cout << "Line 15: charQueue elements: ";            //Line 15

	while (!charQueue.empty())                          //Line 16
	{                                                   //Line 17
		cout << charQueue.front() << " ";               //Line 18
		charQueue.pop();                                //Line 19
	}                                                   //Line 20

	cout << endl;                                       //Line 21
	system("Pause");								    //Line 21
	return 0;                                           //Line 22
}                                                       //Line 23