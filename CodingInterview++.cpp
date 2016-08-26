// CodingInterview++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "InterviewQuestionFactory.h"
#include "Q0101_isAllUnique.h"
#include "Q0102_isPermutation.h"

int main()
{
	//CodingInterview::Q0101_isAllUnique
	CodingInterview::InterviewQuestionFactory::Create<CodingInterview::Q0101_isAllUnique>().Run();	
	std::cout << "===========================\n";
	//CodingInterview::Q0102_isPermutation
	CodingInterview::InterviewQuestionFactory::Create<CodingInterview::Q0102_isPermutation>().Run();
	std::cout << "===========================\n";
	return 0;
}

