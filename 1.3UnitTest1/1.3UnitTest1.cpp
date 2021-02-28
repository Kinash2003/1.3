#include "pch.h"
#include "CppUnitTest.h"
#include "../1.3/LongLong.h"
#include "../1.3/LongLong.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My13UnitTest1
{
	TEST_CLASS(My13UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong z;
			z.Init(5, 3);
			int test = z.Addition();
			Assert::AreEqual(8, test);
		}
	};
}
