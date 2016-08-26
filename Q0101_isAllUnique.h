//#pragma once

#include "InterviewQuestion.h"
#include <string>

namespace CodingInterview
{
	class Q0101_isAllUnique: InterviewQuestion
	{
	public:
		void Run();
		bool isAllUnique(char* input);
		bool isAllUnique(std::string input);
	};

}