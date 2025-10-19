#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length); 
extern "C" void setWidth(int input, int* width);


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
    TEST_CLASS(SetLengthTests)
    {
    public:
        TEST_METHOD(SetLength_Within_Range)
        {
            int len = 20;
            setLength(25, &len);
            Assert::AreEqual(25, len);
        }

        TEST_METHOD(SetLength_Above_Range)
        {
            int len = 13; 
            setLength(100, &len);
            Assert::AreEqual(13, len);
        }

        TEST_METHOD(SetLength_Below_Range)
        {
            int len = 7;
            setLength(0, &len);
            Assert::AreEqual(7, len);
        }
    };

    TEST_CLASS(SetWidthTests)
    {
    public:
        TEST_METHOD(SetWidth_Within_Range)
        {
            int width = 0;
            setWidth(40, &width);
            Assert::AreEqual(40, width);
        }

        TEST_METHOD(SetWidth_Below_Range)
        {
            int width = 99;
            setWidth(0, &width);
            Assert::AreEqual(99, width);
        }

        TEST_METHOD(SetWidth_Above_Range)
        {
            int width = 5;
            setWidth(100, &width);
            Assert::AreEqual(5, width);
        }
    };
}
