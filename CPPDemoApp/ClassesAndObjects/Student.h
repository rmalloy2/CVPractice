#pragma once
//This class is used to show how inheritence works in cpp
//include the person class that it is inheriting from
#include "Person.h"
#include <string>

//the student class inherits from Person
//in cpp you can have multiple inheritence 
class Student :
	public Person
{
private:
	std::string m_idNumber;
public:
	Student(std::string first,
		std::string last,
		int arbitrary,
		std::string id);
	~Student();
};