#include "CandidateList.h"

CandidateList::CandidateList()
{ 
	candidates = new vector<CandidateType>;
}

CandidateList::CandidateList(const 
	CandidateList &otherCandidateList)
{
	candidates = new vector<CandidateType>;
	
	vector<CandidateType>::const_iterator
		iter = otherCandidateList.candidates->begin();

	for (iter; iter != otherCandidateList.candidates->end(); iter++)
		addCandidate(*iter);
}

CandidateList& CandidateList::operator =(const 
	CandidateList &otherCandidateList)
{
	if (this == &otherCandidateList)
		cerr << "Attempted assignment to itself." << endl;
	else
	{
		if (candidates->size() != otherCandidateList.candidates->size())
		{
			delete candidates;
			candidates = new vector<CandidateType>;

			candidates->resize(static_cast<int>
				(otherCandidateList.candidates->size()));		
		}
		
		vector<CandidateType>::iterator
			iter = candidates->begin();

		vector<CandidateType>::const_iterator
			otherListIter = otherCandidateList.candidates->begin();

		for (iter; iter != candidates->end(); iter++)
		{
			*iter = *otherListIter;
			otherListIter++;
		}

		return *this;
	}
}

void CandidateList::addCandidate(const CandidateType &newCandidate) const
{
	candidates->push_back(newCandidate);
}

int CandidateList::getWinner() const
{
	vector<CandidateType>::const_iterator
		constIter = candidates->begin();

	int ssnOfWinner = constIter->getSSN();
	int votesOfWinner = constIter->getTotalVotes();
	constIter++;

	for (constIter; constIter != candidates->end(); constIter++)
	{
		if (constIter->getTotalVotes() > votesOfWinner)
		{
			votesOfWinner = constIter->getTotalVotes();
			ssnOfWinner = constIter->getSSN();
		}
	}

	return ssnOfWinner;
}

void CandidateList::printCandidateName(int ssnSearch) const
{
	vector<CandidateType>::const_iterator constIter;

	if (searchCandidateLocation(ssnSearch, constIter))
	{
		constIter->printName();
	}
}

void CandidateList::printAllCandidates() const
{
	vector<CandidateType>::const_iterator
		constIter = candidates->begin();

	while (constIter != candidates->end())
	{
		constIter->printCandidateInfo();
		constIter++;
	}
}

void CandidateList::printCandidateDivisionVotes(int ssnSearch, 
	int divisionNum) const
{
	vector<CandidateType>::const_iterator constIter;

	if (searchCandidateLocation(ssnSearch, constIter))
	{
		cout << "Division " << divisionNum << ": "
			<< constIter->getVotesByDivision(divisionNum)
			<< endl;
	}
}

void CandidateList::printCandidateTotalVotes(int ssnSearch) const
{
	vector<CandidateType>::const_iterator constIter;

	if (searchCandidateLocation(ssnSearch, constIter))
	{
		cout << "Total votes: " << constIter->getTotalVotes()
			<< endl;
	}
}

void CandidateList::printFinalResults() const
{
	multimap<int, string> candidatesSorted;

	vector<CandidateType>::const_iterator
		constIter = candidates->begin();

	for (constIter; constIter != candidates->end(); constIter++)
	{
		candidatesSorted.insert(make_pair(constIter->getTotalVotes(), 
			constIter->getFirstName() + " " + constIter->getLastName()));
	}

	multimap<int, string>::const_reverse_iterator
		rConstIter = candidatesSorted.rbegin();

	cout << "\nFINAL RESULTS" << endl;
	cout << "-------------" << endl;

	int count = 1;
	for (rConstIter; rConstIter != candidatesSorted.rend(); rConstIter++)
	{
		cout.width(5);
		cout << count << " | " << right;
		cout.width(3);
		cout << rConstIter->first << " | " << right 
			<< rConstIter->second << right << endl;

		count++;
	}
}

bool CandidateList::isEmpty() const
{
	return (candidates->empty());
}

bool CandidateList::searchCandidate(int ssnSearch) const
{
	vector<CandidateType>::const_iterator
		constIter = candidates->begin();

	return searchCandidateLocation(ssnSearch, constIter);
}

bool CandidateList::searchCandidateLocation(int ssnSearch,
	vector<CandidateType>::const_iterator &constIter) const
{
	constIter = candidates->begin();

	while (constIter != candidates->end())
	{
		if (constIter->getSSN() == ssnSearch)
			return true;

		constIter++;
	}

	return false;
}

CandidateList::~CandidateList()
{ 
	delete candidates;
	candidates = NULL;
}
