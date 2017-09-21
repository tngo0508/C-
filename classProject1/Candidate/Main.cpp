/*
 Ngo, Nhat Tan
 CS A250
 March 05, 2016

 Project 1
*/

#include "CandidateType.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
	CandidateType math;
	math.setPersonInfo("Tom", "Walker", 123456789);
	/*math.printName();
	math.printSSN();*/
	math.updateVotesByDivision(1, 10);
	math.setPersonInfo("mask", "smith", 245613789);
	math.updateVotesByDivision(1, 20);

	math.printCandidateTotalVotes();

	math.setPersonInfo("jane", "smith", 147852369);
	math.updateVotesByDivision(1, 30);
	math.printCandidateDivisionVotes(1);

	math.~CandidateType();

	CandidateType english;
	english.setPersonInfo("james", "potter", 111111111);
	english.updateVotesByDivision(2, 50);
	english.printCandidateInfo();

	english.printCandidateTotalVotes();
	cout << endl;
	system("Pause");
	return 0;
}