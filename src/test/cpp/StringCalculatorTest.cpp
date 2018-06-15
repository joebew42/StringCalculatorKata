#include "gtest/gtest.h"
#include "StringCalculator.h"

namespace {
	class StringCalculatorTest : public ::testing::Test {
	protected:
		StringCalculator calculator;
	};

	TEST_F(StringCalculatorTest, nothing) {
		ASSERT_TRUE(calculator.foo());
	}
}
