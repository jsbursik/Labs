/*
  Author: Jordan Bursik
  Date: 20181001
  Description: Ask for nnumber of grades to average,
  loop through and add up the users inputs, divide
  by the total number grades entered.
*/

#include <iostream>
using namespace std;

int main(){
  int grade;
  int count = 0;
  int numGrades;
  double sum = 0;
  double average;

  cout << "How many grades would you like to enter? ";
  cin  >> numGrades; // User input of how many grades they are averaging, tells the loop when to stop

  while (count < numGrades){
    cout << "Enter grade: ";
    cin  >> grade;
    sum += grade;
    count++;
  }
  average = sum/numGrades;
  cout << "The average is " << average << endl;

  return 0;
}