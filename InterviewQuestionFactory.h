#pragma once

#include "InterviewQuestion.h"

namespace CodingInterview
{
	class InterviewQuestionFactory
	{
	public:
		template<typename Q> static Q Create();
	};

	template<typename Q>
	inline Q InterviewQuestionFactory::Create()
	{
		return Q();
	}
}