#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Софія\source\repos\lab5-1c\lab5-1c\Public.cpp"
#include "../lab5-1c/Public.h"
#include "../lab5-1c/Fraction.h"
#include "C:\Users\Софія\source\repos\lab5-1c\lab5-1c\Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest41c
{
	TEST_CLASS(UnitTest41c)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Public a(2, 23), b(1, 11);
			Public c = a - b;
			Assert::AreEqual(c.getOne(), 1);
		}
	};
}
