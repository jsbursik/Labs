/*
  Author: Jordan Bursik
  Date: 2018-10-29
  Description: Have a 2D array of students/grades,
  then use a function to compute the average of their grades
*/

#include <iostream>
using namespace std;

const int COLS = 6;
void computeAverage(float grades[][COLS], int rows);

int main(){
  const int ROWS = 3;
  float grades[ROWS][COLS];

  for(int row = 0; row < ROWS; row++){
    for(int col = 0; col < COLS-1;col++){
      cout << "Enter QUIZ #" << col+1 << " for STUDENT #" << row+1 << ": ";
      cin >> grades[row][col];
    }
  }

  computeAverage(grades, ROWS);

  for (int row = 0; row < ROWS; row++){
    cout << "STUDENT #" << row+1 << ": ";
    for(int col = 0; col < COLS; col++){
      cout << grades[row][col] << " ";
    }
    cout << endl;
  }

  return 0;
}

/*
  Function: computeAverage
  Parameters: float grades 2D array, stores student number and grades
              int for rows size
  Return: Nothing, modifies an array
  Description: Nested for loop through the array to add up the grades
               then store the average in the last column of the array.
*/
void computeAverage(float grades[][COLS], int rows){
  float tempNum;
  for(int i = 0; i < rows; i++){
    tempNum = 0.0;
    for(int j = 0; j < COLS-1; j++){
      tempNum += grades[i][j];
    }
    grades[i][5] = tempNum / 5.0;
  }
}