/*
  Author: Jordan Bursik
  Date: 2018-11-18
  Description: Use dynamic memory management to
  create a dynamic Employee using the given struct
*/

#include <iostream>
#include <string>
using namespace std;

struct Employee{
  string name;
  int experience;
  double bonus;
};

int main(){
  Employee *emp_ptr; // Create new pointer employee
  emp_ptr = new Employee; // Create new dynamic Employee

  cout << "Enter your name: ";
  cin >> emp_ptr->name; // Assign the name to the dynamic employee
  cout << "Enter your years of experience: ";
  cin >> emp_ptr->experience; // Assign the years of experience to the dynamic employee

  emp_ptr->bonus = (emp_ptr->experience > 10) ? 5000.00 : 3000.00; // Use ternary operator to assign the bonus value

  cout << endl; // Make it look good

  // FORMATTING
  cout.setf(ios::fixed); // Set iostream to use fixed notation
	cout.setf(ios::showpoint); // Force iostream to show decimal point
	cout.precision(2); // Set the number of decimal places to use

  cout << "Employee name: " << emp_ptr->name << endl;
  cout << "Employee bonus: $" << emp_ptr->bonus << endl;

  delete emp_ptr;

  return 0;
}