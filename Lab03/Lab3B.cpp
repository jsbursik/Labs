/*
	Author: Jordan Bursik
	Date: 20180910
	Description: The purpose of this program is to calulate
	sales tax on a given number and output with a certain
	number of decimal places.
*/

#include <iostream>
using namespace std;

int main() {

	// Initialize variables
	float inpValue, finalValue;
	const float salesTax = 0.0825; // Establish sales tax as a constant

	cout << "What was the value of the item without sales tax?: ";
	cin >> inpValue;

	// Calulate then print result
	finalValue =  (inpValue * salesTax) + inpValue;
	cout.setf(ios::fixed); // Set iostream to use fixed notation
	cout.setf(ios::showpoint); // Force iostream to show decimal point
	cout.precision(2); // Set the number of decimal places to use
	cout << "The total of your purchase with sales tax is: $" << finalValue << endl;

	return 0;
}
