#include "Student.h"
#include <iostream>

Student::Student(std::string first,
	std::string last,
	int arbitrary,
	std::string id)
	:
	//Student uses the constructor of the parent for things it shares
	Person(first, last, arbitrary),
	//initializes the values of things it does not share
	m_idNumber(id)
{
	//prints out to show when constructor is run
	std::cout << "constructing a student " << m_idNumber << std::endl;
}

Student::~Student()
{
	std::cout << "destructing student " << m_idNumber << std::endl;

}