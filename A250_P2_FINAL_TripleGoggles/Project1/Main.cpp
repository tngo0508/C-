/*
	Puro, Adam
	Nguyen, Khanh
	Ngo, Nhat Tan
	CS A250
	May 9, 2016

	Project #2
*/

#include "InputHandler.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void displayMenu();
void processChoice(CandidateList& candidateList);

int main()
{
	CandidateList candidateList;

	readCandidateData(candidateList);
	displayMenu();
	processChoice(candidateList);

	cout << endl;
	system("Pause");
	return 0;
}

void displayMenu()
{
	cout << "\n*** MAIN MENU ***\n";
	cout << "\nSelect one of the following:\n\n";
	cout << "    1: Print all candidates" << endl;
	cout << "    2: Print a candidate's division votes" << endl;
	cout << "    3: Print a candidate's total votes" << endl;
	cout << "    4: Print winner" << endl;
	cout << "    5: Print final results" << endl;
	cout << "    6: To exit" << endl;
}

void processChoice(CandidateList& candidateList)
{
	int choice;
	cout << "\nEnter your choice: ";
	cin >> choice; 

	while (choice > 0 && choice < 6)
	{
		string fName, lName;
		int division = 0,
			ssn = 0;

		switch(choice)
		{
			// Print all candidates
		case 1: 
			if (candidateList.isEmpty())
				cerr << "\nList is empty.\n" << endl;
			else
			{
				cout << endl;
				candidateList.printAllCandidates();

				cout << endl;
			}
			system("pause");

			break;

			// Print a candidates's division votes
		case 2: 
			if (candidateList.isEmpty())
				cerr << "\nList is empty.\n" << endl;
			else
			{
				cout << "\nEnter candidate's social security number (no dashes): ";
				cin >> ssn;
				cout << endl;

				if (!candidateList.searchCandidate(ssn))
				{
					cout << "SSN not found.\n" << endl;
				}
				else
				{
					candidateList.printCandidateName(ssn);
					for (int i = 0; i < NUM_OF_DIVISIONS; ++i)
						candidateList.printCandidateDivisionVotes(ssn, i);

					cout << endl;
				}
			}
			system("pause");
			break;

			// Print a candidate's total votes
		case 3: 
			if (candidateList.isEmpty())
				cerr << "\nList is empty.\n" << endl;
			else
			{
				cout << "\nEnter candidate's social security number (no dashes): ";
				cin >> ssn;
				cout << endl;
				if (!candidateList.searchCandidate(ssn))
				{
					cout << "SSN not found.\n" << endl;
				}
				else
				{
					candidateList.printCandidateName(ssn);
					candidateList.printCandidateTotalVotes(ssn);

					cout << endl;
				}
			}
			system("pause");
			break;

			// Print winner
		case 4: 
			if (candidateList.isEmpty())
				cerr << "\nList is empty.\n" << endl;
			else
			{
				ssn = candidateList.getWinner();
				if (ssn != 0)
				{
					cout << "\nElection winner: ";
					candidateList.printCandidateName(ssn);
					candidateList.printCandidateTotalVotes(ssn);
				}
				else
				{
					cout << "\nThere are no candidates." << endl;
				}

				cout << endl;
			}
			system("pause");
			break;

			// Print final results
		case 5:
			if (candidateList.isEmpty())
				cerr << "\nList is empty.\n" << endl;
			else
			{
				candidateList.printFinalResults();
				cout << endl;
			}
			system("pause");
			break;

		default: 
			cout << "Sorry. That is not a selection." << endl;
			system("pause");
		}

		displayMenu();
		cout << "\nEnter your choice: ";
		cin >> choice;
	}
}