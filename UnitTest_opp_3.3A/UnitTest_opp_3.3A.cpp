#include "pch.h"
#include "CppUnitTest.h"
#include "../Project_opp_3.3A/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp33A
{
	TEST_CLASS(UnitTestopp33A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			unsigned char c;
			Money a(10, 15);
			c = a.GetKopiyku();
			Assert::AreEqual(c, (unsigned char)15);
		}
	};
}
