#include "CandidateList.h"
#include <iomanip>

// Function definitions

CandidateList::CandidateList()
{
	count = 0;
	first = NULL;
	last = NULL;
}

void CandidateList::addCandidate(const CandidateType& newVote)
{
	Node *newNode = new Node(newVote, NULL);

	if (first == NULL)
	{
		first = newNode;
		last = newNode;
	}
	else
	{
		last->setLink(newNode);
		last = newNode;
	}
	++count;
}

int CandidateList::getWinner() const
{
	if (first == NULL)
	{
		cerr << "List is empty.\n";
		return 0;
	}
	else
	{
		Node *current = first->getLink();
		CandidateType winner = first->getCandidate();
		
		while (current != NULL)
		{
			if (current->getCandidate().getTotalVotes() > winner.getTotalVotes())
			{
				winner = current->getCandidate();
			}

			current = current->getLink();
		}

		return winner.getSSN();
	}
}

void CandidateList::printCandidateName(int SearchSSN) const
{
	if (first == NULL)
	{
		cerr << "List is empty.\n";
	}
	else
	{
		bool found = false;
		Node *current = first;

		while (current != NULL && !found)
		{
			if (current->getCandidate().getSSN() == SearchSSN)
			{
				current->getCandidate().printName();
				found = true;
			}
			else
			{
				current = current->getLink();
			}
		}

		if (!found)
		{
			cout << "SSN not in the list.\n";
		}
	}
}

void CandidateList::printAllCandidates() const
{
	if (first == NULL)
	{
		cerr << "List is empty.\n";
	}
	else
	{
		Node *temp = first;

		while (temp != NULL)
		{
			temp->getCandidate().printCandidateInfo();
			temp = temp->getLink();
		}
	}
}

void CandidateList::printCandidateDivisionVotes(int ssn, int divisionNum) const
{
	if (first == NULL)
	{
		cerr << "List is empty.\n";
	}
	else
	{
		bool found = false;
		Node *current = first;

		while (current != NULL && !found)
		{
			if (current->getCandidate().getSSN() == ssn)
			{
				cout << "Division " << divisionNum << ": ";
				cout << current->getCandidate().getVotesByDivision(divisionNum);
				cout << endl;
				found = true;
			}
			else
				current = current->getLink();
		}
	}
}

void CandidateList::printCandidateTotalVotes(int ssn) const
{
	if (first == NULL)
	{
		cerr << "List is empty.\n";
	}
	else
	{
		Node *current = first;
		bool found = false;

		while (current != NULL && !found)
		{
			if (current->getCandidate().getSSN() == ssn)
			{
				cout << "Total votes: ";
				cout << current->getCandidate().getTotalVotes();
				found = true;
			}
			else
				current = current->getLink();
		}
	}
}

void CandidateList::destroyList()
{
	Node *current = first;

	while (current != NULL)
	{
		first = first->getLink();
		delete current;
		current = first;
	}

	count = 0;
	first = NULL;
	last = NULL;
}

CandidateList::~CandidateList()
{
	destroyList();
}

void CandidateList::printFinalResults() const
{
	if (first == NULL)
	{
		cerr << "List is empty.\n";
	}
	else
	{
		Node *current = first;
		Node *trailCurrent;
		//CandidateType temp;

		for (current = first; current != NULL; current = current->getLink())
		{
			for (trailCurrent = current; trailCurrent != NULL; trailCurrent = trailCurrent->getLink())
			{
				if (current->getCandidate().getTotalVotes() < trailCurrent->getCandidate().getTotalVotes())
				{
					CandidateType  temp;
					temp = current->getCandidate();
					current->setCandidate(trailCurrent->getCandidate());
					trailCurrent->setCandidate(temp);
				}
			}
		}

		cout << "FINAL RESULTS\n";
		cout << "-------------\n";

		int i = count;
	
		for (Node *temp1 = first; temp1 != NULL; temp1 = temp1->getLink())
		{
			cout << fixed;
			cout << setw(2) << right << i << "  ";
			cout << setw(3) << left << temp1->getCandidate().getTotalVotes() << " ";
			temp1->getCandidate().printName();
			--i;
		}
	}
}