#include "Q0102_isPermutation.h"
#include <string>
#include <iostream>

using namespace CodingInterview;

void Q0102_isPermutation::Run()
{
	std::string sub = "red";
	std::string main = "def";
	bool result = isPermutation(sub, main);
	if (result)
		std::cout << sub << " is permutation of " << main << ".\n";
	else
		std::cout << sub << " is not permutation of " << main << ".\n";
	std::cout << "--------------------------------------\n";
	char* sub2 = "dog";
	char* main2 = "go ahead";
	result = isPermutation(sub2, main2);
	if (result)
		std::cout << sub2 << " is permutation of " << main2 << ".\n";
	else
		std::cout << sub2 << " is not permutation of " << main2 << ".\n";
	std::cout << "--------------------------------------\n";
}

bool Q0102_isPermutation::isPermutation(const char* subString, const char* mainString)
{
	for(const char* it = subString; *it != NULL; ++it)
	{
		if (strchr(mainString, *it) == NULL)
		{
			return false;
		}
	}
	return true;
}

bool Q0102_isPermutation::isPermutation(const std::string& subString, const std::string& mainString)
{
	for (char c : subString)
	{
		if (mainString.find(subString) == std::string::npos)
		{
			return false;
		}
	}
	return true;
}