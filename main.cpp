// https://github.com/gavmac00/compound-interest.git
/* Gavin MacDonnell, Started on the 12 / 11 / 21. */

#include <iostream>
#include "compound-interest.h"

using namespace std;

int main()
{
	int count = 0;
	while (count < 100) {
		//variables
		float priciple;
		float rate;
		int years;
		float investment;

		//input
		cout << "Enter the initial investment: ";
		cin >> priciple;

		cout << "\nEnter the % interest rate: ";
		cin >> rate;
		rate = rate / 100;

		cout << "\nEnter the number of years that you will hold the investment: ";
		cin >> years;

		//computation
		compoundClass run;
		investment = run.compoundInterestCalculator(priciple, rate, years);

		//output
		cout << "\nFinal value of investment: " << investment << "\n\n\n";
	}
}