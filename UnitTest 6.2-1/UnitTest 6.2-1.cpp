#include "pch.h"
#include "CppUnitTest.h"
#include "../Project 6.2-1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[6] = { 1, 2, 3, 4, 5, 6 };

			int Min = Search(t, 6);

			Assert::AreEqual(Min, 2);
		}
	};
}
