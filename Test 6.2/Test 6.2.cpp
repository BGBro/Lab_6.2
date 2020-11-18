#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "../6.2 rec/6.2 rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test62
{
	TEST_CLASS(Test62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			vector<int> i;
			vector<int> a(7, 2);
			i = m_count(a, 0);
			t = i[0];
			Assert::AreEqual(t, 14);
		}
	};
}
