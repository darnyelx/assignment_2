#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestAssignment
{
	TEST_CLASS(PerimeterTest)
	{
	public:
		
		TEST_METHOD(GetPerimeter_ValidInput_ReturnsCorrectValue)
		{
			int length = 5;
			int width = 15;
			Assert::AreEqual(20, getPerimeter(&length, &width));

		}
	};

	TEST_CLASS(AreaTest)
	{
	public:

		TEST_METHOD(GetArea_ValidInput_ReturnsCorrectValue)
		{
			int length = 10;
			int width = 10;
			Assert::AreEqual(100, getArea(&length, &width));

		}
	};
}
