#ifndef SRC_MAIN_STRINGCALCULATOR_H_
#define SRC_MAIN_STRINGCALCULATOR_H_

#include <iostream>

using namespace std;

class StringCalculator {
public:
	StringCalculator();
	virtual ~StringCalculator();
	int add(string);
};

#endif /* SRC_MAIN_STRINGCALCULATOR_H_ */
