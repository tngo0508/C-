#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "PersonType.h"

#include <iostream>
#include <string>
using namespace std;

const int NUM_OF_DIVISIONS = 4;

class CandidateType : public PersonType
{
public:
	CandidateType();
	void updateVotesByDivision(int division[], int& divisionVote);
	int getTotalVotes() const;
	int getVotesByDivision(const int divisionNum) const;
	void printCandidateInfo() const;
	void printCandidateTotalVotes() const;
	~CandidateType();
private:
	int totalVotes;
	int division[NUM_OF_DIVISIONS];
};

#endif