#include "CandidateType.h"

CandidateType::CandidateType()
{
	totalVotes = 0;
	division[NUM_OF_DIVISIONS] = { };
}

void CandidateType::updateVotesByDivision(int division[], int& divisionVote)
{
	totalVotes = divisionVote;

}

int CandidateType::getTotalVotes() const
{
	return totalVotes;
}

int CandidateType::getVotesByDivision(const int divisionNum) const
{

}

void CandidateType::printCandidateInfo() const
{

}

void CandidateType::printCandidateTotalVotes() const
{

}

CandidateType::~CandidateType()
{
}