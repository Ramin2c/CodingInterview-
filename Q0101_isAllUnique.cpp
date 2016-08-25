#include "Q0101_isAllUnique.h"
#include <iostream>

void CodingInterview::Q0101_isAllUnique::Run()
{
	bool isUnique = isAllUnique("Hi");
	std::cout << isUnique << "\n";
	std::cout << "--------------------------\n";
	isUnique = isAllUnique(std::string("Goodbye"));
	std::cout << isUnique << "\n";
	std::cin;
}

bool CodingInterview::Q0101_isAllUnique::isAllUnique(char* input)
{
	std::cout << "Checking char* " << input << " :\n";
	bool chars[255] = {0};
	for (char* it=input; *it; ++it) 
	{
		int index = *it - 32;
		if (chars[index] == true)
			return false;

		chars[index] = true;
	}
	return true;
}

bool CodingInterview::Q0101_isAllUnique::isAllUnique(std::string input)
{
	std::cout << "Checking string " << input << " :\n";
	bool chars[255] = { 0 };
	for(char& c : input)
	{
		int index = (int)c - 32;
		if (chars[index] == true)
			return false;

		chars[index] = true;
	}
	return true;
}
