// FlowOfControl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>

int main()
{

	//Example of using if/else statements
	int x, y;
	std::cout << "Enter two numbers" << std::endl;
	std::cin >> x >> y;

	std::cout << x << " ";
	if (x > y)
	{
		std::cout << "is larger than ";
	}
	else
	{
		std::cout << "is not larger than ";
	}
	std::cout << y << std::endl;

	//Example of doing While
	bool prime = true;
	int i = 2;

	while (i < x/i)
	{
		int factor = x / i;
		if (factor*i == x)
		{
			std::cout << "factor found: " << i << " * " << factor << std::endl;
			prime = false;
			break;
		}
		i++;
	}
	std::cout << x << " is ";

	if (prime)
	{
		std::cout << "prime" << std::endl;
	}
	else
	{
		std::cout << "not prime" << std::endl;
	}
    
	//Example of a for loop c++
	prime = true;
	for (int i=2; i<=x/i; i++)
	{
		int factor = x / i;
		if (factor*i == x)
		{
			std::cout << "factor found: " << i << " * " << factor << std::endl;
			prime = false;
			break;
		}
	}

	std::cout << x << " is ";
	if (prime)
	{
		std::cout << "prime" << std::endl;
	}
	else
	{
		std::cout << "not prime" << std::endl;
	}

	//Example of switch statements 
	switch (x)
	{
	case 1:
		std::cout << "you entered 1";
		break;
	case 2:
	case 3:
		std::cout << "you entered 2 or 3";
		break;
	case 4:
		std::cout << "you entered 4";
		break;
	default:
		std::cout << "you did not enter 1,2,3, or 4";
		break;
	}

	std::cout << std::endl;

	//example of Immediate if 
	std::string result = prime ? "is prime" : "not prime";
	std::cout << result << std::endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
