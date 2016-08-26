#pragma once

#include "InterviewQuestion.h"
#include <string>


namespace CodingInterview
{
	class Q0102_isPermutation : InterviewQuestion
	{
	public:
		void Run();
		bool isPermutation(const char* subString, const char* mainString);
		bool isPermutation(const std::string& subString, const std::string& mainString);
	};
}
