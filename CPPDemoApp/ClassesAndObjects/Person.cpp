//This file has the implementations of the methods outlined in the Person.h header file
#include "Person.h"
#include <iostream>

//this using statement allows you to not put std:: in front of every cout
//only put using statements in cpp files, not in .h files
//.h files are included in other files and you don't want the extra stuff pasted in
using std::cout;
using std::endl;

Person::Person(std::string first,
	std::string last,
	int arbitrary)
	//initialize the member variables to the parameter values
	//this initializer list is faster because it sets the initial values
	//of the mamber variables instead of set to default and then overrided 
	:
	m_firstname(first),
	m_lastname(last),
	m_arbitrarynumber(arbitrary)
{
	cout << "constructing " << getName() << endl;
}

Person::~Person()
{
	cout << "destructing " << m_firstname << " " << m_lastname << endl;
}

std::string Person::getName()
{
	return m_firstname + " " + m_lastname;
}

int Person::getNumber()
{
	return m_arbitrarynumber;
}