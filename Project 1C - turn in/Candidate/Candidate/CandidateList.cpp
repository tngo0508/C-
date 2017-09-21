#include "CandidateList.h"

// Function definitions

CandidateList::CandidateList()
{
	count = 0;
	first = NULL;
	last = NULL;
}

void CandidateList::addCandidate(const CandidateType& newVote) //insert back
{
	//create new node containing CandidateType object and pointinng to NULL
	Node *newNode = new Node(newVote, NULL);

	//Case 1: if the list is empty
	if (first == NULL)
	{
		first = newNode;
		last = newNode;
	}
	else //Case 2: list contains more than 1 node
	{
		last->setLink(newNode); //set last node points to new node
		last = newNode; //make last points to new node
	}
	++count;
}

int CandidateList::getWinner() const
{
	//Case 1: list is empty
	if (first == NULL)
	{
		cerr << "List is empty.\n";
		return 0;
	}
	//Case 2: list has only 1 node
	else if (count == 1)
	{
		return first->getCandidate().getSSN();
	}
	else //Case 3: list has more than 1 node
	{
		Node *current = first->getLink(); //create current pointer pointing to the second node
		CandidateType winner = first->getCandidate(); //create a CandidateType object called winner to hold
													  //information of the highest candidate
		
		while (current != NULL) //traverse the list
		{
			//Finding the winner by comparing the totalVotes among the candidates
			//if the current candidate's totalVotes is larger than winner's
			//assign winner to be that candidate. Otherwise, keeping the winner
			//and move toward the next candidate on the list
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
			//print the name of candidate when searchSSN is found
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
		//print message when SSN is not found
		if (!found)
		{
			cout << "SSN not in the list.";
		}

		current = NULL;
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

		while (current != NULL && !found) //traverse the list to search for candidate
		{
			//print Candidate Division votes when ssn is found
			if (current->getCandidate().getSSN() == ssn)
			{
				cout << "Divison " << divisionNum << ": ";
				cout << current->getCandidate().getVotesByDivision(divisionNum);
				cout << endl;
				found = true;
			}
			else
				current = current->getLink();
		}

		current = NULL;
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

		while (current != NULL && !found) //traverse the list to find the ssn
		{
			//print candidate total votes when ssn is found
			if (current->getCandidate().getSSN() == ssn)
			{
				cout << "Total votes: ";
				cout << current->getCandidate().getTotalVotes();
				found = true;
			}
			else
				current = current->getLink();
		}

		current = NULL;
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