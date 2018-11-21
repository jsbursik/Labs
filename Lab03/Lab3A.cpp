/*	
	Author: Jordan Bursik
	Date: 20180910
	Description: This program is inteneded to recieve inputs
	from the user about the dimensions of a trapezoid and calculate
	the area.
*/

#include <iostream>
using namespace std;

int main() {
	//initialize variables
	int b1, b2, h;
	float area; // Making sure the output is a float instead of an integer

	// Recieve all information required for findind the area
	cout << "Please enter the value for base 1: ";
	cin >> b1;
	cout << "Please enter the value for base 2: ";
	cin >> b2;
	cout << "What is the height of the trapezoid?: ";
	cin >> h;

	// Calculate the Area of trapezoid and output it
	area = ((b1 + b2) / 2.0) * h;
	cout << "The Area of the Trapezoid is: " << area << endl;
	
	return 0;
}
