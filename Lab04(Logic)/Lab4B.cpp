/*
	Author: Jordan Bursik
	Date: 20180924
	Description: Create a simple calulator using a switch-case for
	the menu and an enum for the menu options. 
*/  
#include <iostream>
using namespace std;

int main() {
	
	int choice, num1, num2;
	enum Options {ADD=1, MULT=2, SUB=3, DIV=4};

	cout << "Welcome to the 1030 calculator. Please choose an option from the following list.\n";
	cout << "1. Addition\n2. Multiplication\n3. Subtraction\n4. Division\n";
	
	cin >> choice;
	
	// Use a switch with ENUM values to make it easier to follow

	switch (choice) {
		case ADD:
			cout << "Please enter 2 numbers to add: ";
			cin >> num1 >> num2;
			cout << "Your result is " << num1 + num2 << endl;
			break;
		case MULT:
			cout << "Please enter 2 numbers to multiply: ";
			cin >> num1 >> num2;
			cout << "Your result is " << num1 * num2 << endl;
			break;
		case SUB:
			cout << "Please enter 2 numbers to subtract: ";
			cin >> num1 >> num2;
			cout << "Your result is " << num1 - num2 << endl;
			break;
		case DIV:
			cout << "Please enter 2 numbers to divide: ";
			cin >> num1 >> num2;
			if (num2 == 0) {
				cout << "ERROR! You cannot divide by zero!" << endl;
			       break; // This break will make sure that if zero is the second number the program will stop here	
			} 
			cout << "Your result is " << num1 / static_cast<double>(num2) << endl;
			break;
		default: 
			// If you enter a non menu option number this code will execute.
			cout << "That is not a valid choice." << endl;	
	}

	cout << "Goodbye!" << endl;
	
	return 0;
}
