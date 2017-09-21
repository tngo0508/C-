#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "PersonType.h"

#include <iostream>

using namespace std;

const int NUM_OF_DIVISIONS = 4;		

class CandidateType : public PersonType
{
public:
	CandidateType();
	
	void updateVotesByDivision(int divisionNum, 
		int votesForDivision);	
																		
	int getTotalVotes() const;
	int getVotesByDivision(int divisionNum) const;		
	
	void printCandidateInfo() const;
	void printCandidateTotalVotes() const;
	void printCandidateDivisionVotes(int divisionNum) const;		
	
	~CandidateType();

private:
	int totalVotes;
	int divisions[NUM_OF_DIVISIONS];
};

#endif