#include "CandidateType.h"

CandidateType::CandidateType()
{
	totalVotes = 0;
	/*a[0] = { 0 };
	a[1] = { 0 };
	a[2] = { 0 };
	a[3] = { 0 };*/
	for (int i = 0; i < 4; i++)
	{
		a[i] = { 0 };
	}
}

void CandidateType::updateVotesByDivision(int divisionNum, int divisionVotes)
{
		totalVotes += divisionVotes;
		a[divisionNum] += divisionVotes;
}

int CandidateType::getTotalVotes() const
{
	return totalVotes;
}

int CandidateType::getVotesByDivision(int divisionNum) const
{
	return a[divisionNum];
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
	PersonType::printName();
	cout << "	Division " << divisionNum << " total votes: " << a[divisionNum] << endl;
}

void CandidateType::printCandidateTotalVotes() const
{
	PersonType::printName();
	cout << "	Total Votes (all divisions): " << totalVotes << endl;;
}

CandidateType::~CandidateType()
{
}