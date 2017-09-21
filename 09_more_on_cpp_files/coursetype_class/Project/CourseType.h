#ifndef COURSETYPE_H
#define COURSETYPE_H

#include <iostream>
#include <string>
using namespace std;

class CourseType
{
public:
	CourseType();

	CourseType(const string&, const string&, int);

	//Other accessor/mutator functions are
	//  not necessary for this example.

	void print() const;

	static int getNoOfCourses();

	~CourseType();

private:
	string courseNumber;
	string courseTitle;
	int courseSection;
	static int totalNoOfCourses;
};

#endif