#include "CourseType.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	CourseType a170 ("CS A170", "Java 1", 73641),
			   a150("CS A150", "C++ 1", 56342),
			   a250("CS A250", "C++ 2", 23765),
			   a200("CS A200", "Data Structures", 23567);

	a170.print();
	a150.print();
	a250.print();
	a200.print();

	cout << "\nTotal courses: " << CourseType::getNoOfCourses() << endl;
	// you can also use ANY of the objects created:
	//	  cout << "Total courses" << a250.getNoOfCourses() << endl;

	cout << "\nDelete CS A170...\n";
	a170.~CourseType();		

	cout << "\nTotal courses: " << CourseType::getNoOfCourses() << endl;

	cout << endl;
	system("Pause");
	return 0;
}
