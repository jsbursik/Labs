/*
  Author: Jordan Bursik
  Date: 20181001
  Description: Enter grades, asking if the user
  has more grades to input after every grade
*/

#include <iostream>
using namespace std;

int main(){
  int grade;
  int count = 0;
  int numGrades = 1;
  char answer;
  double sum = 0;
  double average;

  do {
    cout << "Enter grade: ";
    cin  >> grade;
    sum += grade;
    count++;
    cout << "Do you have more grades to enter?(Y/N) ";
    cin  >> answer;
    if (toupper(answer)=='N'){
      count = numGrades; // The loop will not execute again if this is the case.
    } else {
      numGrades++; // increment grades because anything other than "N" is yes.
    }
  }
  while (count < numGrades);

  average = sum/numGrades;
  cout << "The average of the " << numGrades << " grades is: " << average << endl;

  return 0;
}