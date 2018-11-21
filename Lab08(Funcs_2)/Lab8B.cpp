/* Author: Jordan Bursik
   Date: 2018-10-29
   Description: Use a function to input all the grades into an array
                then display them.
*/

#include <iostream>
using namespace std;

void get_grade(int grades[], int size);

int main(){
  const int SIZE = 5;
  int grades[SIZE];

  get_grade(grades, SIZE);

  for(int i = 0; i < SIZE; i++){
    cout << "grades[" << i << "] = " << grades[i] << endl;
  }

  return 0;
}
/* Function: get_grade
   Parameters: Integer array representing grades
               Integer for size of the array
   Return: Nothing, modifies an array.
   Description: Uses a for loop to enter grades into the given array.
*/

void get_grade(int grades[], int size){
  for(int i = 0; i < size; i++){
    cout << "Enter a grade between 0 and 100: ";
    cin >> grades[i];
  }
}