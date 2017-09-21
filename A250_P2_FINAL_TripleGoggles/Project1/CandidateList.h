#ifndef CANDIDATELIST_H
#define CANDIDATELIST_H

#include "CandidateType.h"

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class CandidateList
{
public:
	CandidateList();
	CandidateList(const CandidateList &otherCandidateList);

	CandidateList& operator =(const 
		CandidateList &otherCandidateList);
	
	void addCandidate(const CandidateType &newCandidate) const;
	
	int getWinner() const;
	
	void printCandidateName(int ssnSearch) const;
	void printAllCandidates() const;
	void printCandidateDivisionVotes(int ssnSearch, int divisionNum) const;
	void printCandidateTotalVotes(int ssnSearch) const;
	void printFinalResults() const;

	bool isEmpty() const;

	bool searchCandidate(int ssnSearch) const;

	~CandidateList();

private:
	vector<CandidateType> *candidates;
	
	bool searchCandidateLocation(int ssnSearch,
		vector<CandidateType>::const_iterator &constIter) const;
};

#endif
