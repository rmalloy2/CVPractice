#pragma once
//including the string class to use with first and last name
#include <string>

/*Classes in c++ have a header file that gets included into the file
with the implemention of the class and in the files where the methods are getting called */
class Person
{
//c++ has two section in the header file where private and public objects are defined
private:
	//private is member variables and methods that are not externally referenced 
	std::string m_firstname;
	std::string m_lastname;
	int m_arbitrarynumber;

public:
	//public is for methods that will get called externally 
	Person(std::string first, 
		std::string last, 
		int arbitray);

	//this creates a default constructor, it takes no arguments
	Person() = default;
	~Person();

	std::string getName();
	int getNumber();
	
};

