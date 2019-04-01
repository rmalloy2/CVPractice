// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Person.h"
#include "Student.h"
#include "Status.h"

int main()
{
	//example of constuctor with paramaters
	Person p2();
	Person p1("Rachel", "Malloy", 1234);
	//example of default constructor 
	//Person p2;
	{
		Student s1("Kate", "Smith", 234, "ksmith01");
		std::string name2 = s1.getName();
	}
	std::string name = p1.getName();


	//Using Enums (old style)
	Status s = Pending;
	s = Approved;

	//using enums (better way)
	FileError fe = FileError::notFound;
	fe = FileError::ok;

	NetworkError ne = NetworkError::disconnected;
	ne = NetworkError::ok;

	return 0;
}//things declared 

