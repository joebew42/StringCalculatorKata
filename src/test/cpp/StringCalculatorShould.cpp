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

	TEST_F(StringCalculatorShould, return_0_for_a_string_that_contains_0) {
		ASSERT_EQ(0, calculator.add("0"));
	}

	TEST_F(StringCalculatorShould, return_1_for_a_string_that_contains_1) {
		ASSERT_EQ(1, calculator.add("1"));
	}
}
