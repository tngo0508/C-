#include "CourseType.h"

int CourseType::totalNoOfCourses = 0;

CourseType::CourseType()
{ 
	courseSection = 0;
	++totalNoOfCourses; // Creating a new object --> need to increment 
						//   total number of courses.
}

CourseType::CourseType(const string& number, 
					const string& title, int section )
{ 
	courseNumber = number;
	courseTitle = title;
	courseSection = section;
	++totalNoOfCourses; // Creating a new object --> need to increment 
						//   total number of courses.
}

void CourseType::print() const
{
	cout << courseNumber << " (" << courseSection
		<< ") - " << courseTitle << endl;
}

int CourseType::getNoOfCourses()
{
	return totalNoOfCourses;
}

CourseType::~CourseType()
{
	//Every time an object is destroyed
	// need to decrement the number of courses
	--totalNoOfCourses;
}
