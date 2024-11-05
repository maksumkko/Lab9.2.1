#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab9.2/input_output.h"
#include "../Lab9.2/math_macros.h"
#include "../Lab9.2/input_output.cpp"
#include "../Lab9.2/math_macros.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest92
{
	TEST_CLASS(UnitTest92)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 2.0, y = -3.0, z = 2.0, w;
			double expected_w = std::max(std::abs(x) + std::abs(y) + std::abs(z), std::pow(x, 3));

			// Виклик функції для обчислення результату
			if (z > 1 && z < 3) {
				w = MAX(ABS(x) + ABS(y) + ABS(z), POW(x, 3));
			}

			// Перевірка результату
			Assert::AreEqual(expected_w, w, 0.0001, L"TestMaxCondition failed");
		}
	};
}