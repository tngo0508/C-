#include "CandidateType.h"

CandidateType::CandidateType()
{
	totalVotes = 0;
	for (int i = 0; i < 4; i++)
		divisions[i] = 0;
}

void CandidateType::updateVotesByDivision(int divisionNum, 
	int votesForDivision)
{
	divisions[divisionNum] += votesForDivision;
	totalVotes += votesForDivision;
}

int CandidateType::getTotalVotes() const
{
	return totalVotes;
}

int CandidateType::getVotesByDivision(int divisionNum) const
{
	return divisions[divisionNum];
}

void CandidateType::printCandidateInfo() const
{
	printSSN();
	cout << " - ";
	printName();
}

void CandidateType::printCandidateTotalVotes() const
{
	printName();
	cout << "    Total Votes (all divisions): " << totalVotes 
		<< endl;
}

void CandidateType::printCandidateDivisionVotes(int divisionNum) const
{
	printName();
	cout << "    Division " << divisionNum << " total votes: " 
		<< divisions[divisionNum] << endl;
}

CandidateType::~CandidateType()
{}