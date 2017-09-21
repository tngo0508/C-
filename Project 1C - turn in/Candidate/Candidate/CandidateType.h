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

	void updateVotesByDivision(int divisionNum, int divisionVotes);

	int getTotalVotes() const;
	int getVotesByDivision(int divisionNum) const;

	void printCandidateInfo() const;
	void printCandidateDivisionVotes(int divisionNum) const;
	void printCandidateTotalVotes() const;

	~CandidateType();
private:
	int totalVotes;
	int a[NUM_OF_DIVISIONS];
};

#endif