/*
	Ngo, Nhat Tan
	CS A250
	April 25, 2016

	A250_FINAL_E8
	*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	cout << "*** Eve and the Suitors ***" << endl;
	char response;
	do
	{
		cout << endl;
		cout << "Enter the number of suitors: ";
		int numOfSuitors;
		cin >> numOfSuitors;
		cout << endl;

		vector<int> v(numOfSuitors);
		int i = 0;

		for (; i < numOfSuitors; ++i)
		{
			v[i] = i + 1;
		}

		vector<int>::iterator iter = v.begin();

		i = 1;
		
		while (v.size() > 1)
		{
			if (i % 3 == 0)
			{
				cout << "Suitor " << *iter << " will be eliminated!" << endl;
				iter = v.erase(iter);
			}
			else
				++iter;

			if (iter == v.end())
				iter = v.begin();

			++i;
		}
		cout << endl;
		cout << "To win the princess, you should stand in position " << v[0] << ".";
		cout << endl << endl;
		cout << "Would you like to repeat the process? (y/n) ";
		cin >> response;
	} while (response == 'y');
	cout << endl;
	system("Pause");
	return 0;
}