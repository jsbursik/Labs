/* Author: Jordan Bursik
   Date: 2018-10-29
   Description: Input arbitrary numbers and utilize a function to modify them.
                Print them out before or after.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void get_input(int& num1, float& num2);
void modify(int& num1, float& num2);

int main(){
  int num1;
  float num2;
  
  get_input(num1, num2);

  cout << "Original values: num1 = " << num1 << " num2 = " << num2 << endl;

  modify(num1, num2);

  cout << "New values: num1 = " << num1 << " num2 = " << num2 << endl;

  return 0;
}

/* Function: get_input
   Paramters: Integer num1
              Float num2
   Return: Nothing, call-by-reference
   Description: Ask the user to inut an integer, and a floating point number.
*/
void get_input(int& num1, float& num2){
  cout << "Enter an integer: ";
  cin >> num1;

  cout << "Enter a floating-point number: ";
  cin >> num2;

  return;
}
/* Function: modify
   Parameters: Integer num1
               Float num2
   Return: Nothing, using call-by-reference
   Description: Modify the numbers given, num1 is multiplied by a random
                number between 20 & 30 (inclusive). Modify the float number
                by taking the log of it (natural log).
*/
void modify(int& num1, float& num2){
  srand(time(NULL));
  num1 = num1 * ((rand() % 11) + 20);
  num2 = log(num2);
}