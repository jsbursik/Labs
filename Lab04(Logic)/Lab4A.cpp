/*
	Author: Jordan Bursik
	Date: 20180924
	Description: Utilizing if else statements to
	test user input.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	
	// Int x for user input, int y for generated output
	int x, y;

	// Seed rand with the Epoch timer
	srand(time(NULL)); 

	cout << "Enter a random number between 1 and 100 (inclusive): ";
	cin  >> x;

	if(x <= 100 && x>= 1) {
		
		// If the number is within the range, generate a random number in the same range
		
		y = (rand() % 100) + 1;
		cout << "Here is a randomly generated number in the same range: " << y << endl;
		
		// Begin comparing the users input and the generated number
		
		if (x < y) {
			cout << x << " is less than " << y << "." << endl;
		} else if (x > y) {
			cout << x << " is greater than " << y << "." << endl;
		} else {
			cout << x << " is the same as " << y << "." << endl;
		}

	} else {
		cout << "You're value " << x << " is not within the range 1-100." << endl;
 	}

	return 0;
}
