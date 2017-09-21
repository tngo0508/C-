/*
	Ngo, Nhat Tan
	Nguyen, Khanh
	CS A250
	April 25, 2016

	In-class Exercise 8: Vector 
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "*** Eve and the Suitors ***" << endl;

	char ans;
	do
	{
		int cap;
		cout << endl << "Enter the number of suitors: ";
		cin >> cap;
		cout << endl;

		vector<int> v(cap, 0);
		int count = 0;
		while (cap > 0)
		{
			v[cap - 1] = cap;
			cap--;
		}

		vector<int>::iterator iter = v.begin();
		while (v.size() > 1)
		{
			if (count == 2)
			{
				cout << "Suitors " << *iter << " will be eliminated!" << endl;
				iter = v.erase(iter);
				count = 0;
			}
			else
			{
				count++;
				iter++;
			}

			if (iter == v.end())
				iter = v.begin();
		}

		cout << endl << "To win the princess, you should stand in position "
			<< v[0] << "." << endl << endl;

		cout << "Would you like to repeat the process? (y/n) ";
		cin >> ans;
	} while (ans == 'y');

	cout << endl;
	system("pause");
	return 0;
}