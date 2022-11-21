#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.1(2)/laba6.1(2).cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(number_test)
		{
			const int size = 5;
			int b[size]{ -1, 2, 4, 5, 1 };
			int num = number_of(b, size, 0, 0);
			Assert::AreEqual(num, 4);
		}

		TEST_METHOD(sum_test)
		{
			const int size = 5;
			int b[size]{ -1, 2, 4, 5, 1 };
			int sum = sum_of(b, size, 0, 0);
			Assert::AreEqual(sum, 10);
		}

		TEST_METHOD(zero_test)
		{
			const int size = 5;
			int b[size]{ -1, 2, 4, 5, 1 };
			zero(b, size, 0);
			Assert::AreEqual(b[1], 0);
			Assert::AreEqual(b[2], 0);
		}
	};
}