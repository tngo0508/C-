#include "CandidateType.h"

CandidateType::CandidateType()
{
	totalVotes = 0;
	/*a[0] = { 0 };
	a[1] = { 0 };
	a[2] = { 0 };
	a[3] = { 0 };*/
	for (int i = 0; i < 3; i++)
	{
		a[i] = { 0 };
	}
}

void CandidateType::updateVotesByDivision(int divisionNum, int divisionVotes)
{
	if (divisionNum < 1 || divisionNum > 4)
	{
		cerr << "Invalid input for division number.\n";
	}
	else if (divisionVotes < 0)
	{
		cerr << "Cannot have negative votes.\n";
	}
	else
	{
		totalVotes += divisionVotes;
		a[divisionNum - 1] += divisionVotes;
	}
}

int CandidateType::getTotalVotes() const
{
	return totalVotes;
}

int CandidateType::getVotesByDivision(int divisionNum) const
{
	if (divisionNum < 1 || divisionNum > 4)
	{
		cerr << "Invalid input for division number.\n";
		return -1;
	}
	else
	{
		return a[divisionNum - 1];
	}
}

void CandidateType::printCandidateInfo() const 
{
	PersonType::printSSN();
	cout << " - ";
	PersonType::printName();

	//cout << getSSN() << " - " << getLastName() << ", " << getFirstName() << endl;
}

void CandidateType::printCandidateDivisionVotes(int divisionNum) const
{
	if (divisionNum < 1 || divisionNum > 4)
	{
		cerr << "Invalid input for division number.\n";
		system("Pause");
		exit(1);
	}
	else
	{
		PersonType::printName();
		cout << "	Division " << divisionNum << " total votes: " << a[divisionNum - 1] << endl;
	}
}

void CandidateType::printCandidateTotalVotes() const
{
	PersonType::printName();
	cout << "	Total Votes (all divisions): " << totalVotes << endl;;
}

CandidateType::~CandidateType()
{
}