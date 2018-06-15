#include <gtest/gtest.h>
#include <StringCalculator.h>

namespace {
	class StringCalculatorShould : public ::testing::Test {
	protected:
		StringCalculator calculator;
	};

	TEST_F(StringCalculatorShould, return_0_for_an_empty_string) {
		ASSERT_EQ(0, calculator.add(""));
	}
}
