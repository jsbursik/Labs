/*
  Author: Jordan Bursik
  Date: 2018-10-15
  Description: Display a grid of user input numbers
  along with the sums of the rows and columns
*/
#include<iostream>
using namespace std;

int main(){
  const int ROW_SIZE = 2;
  const int COLUMN_SIZE = 5;
  int matrix[ROW_SIZE][COLUMN_SIZE];

  int row_sum[ROW_SIZE];
  int column_sum[COLUMN_SIZE];
  int tempColSum, tempRowSum;

  // Using a 2D array to enter data into a grid
  for(int i=0;i<ROW_SIZE;++i){
    for(int h=0;h<COLUMN_SIZE;++h){
      cout << "Enter data for row#" << i+1 << " and column#" << h+1 <<":";
      cin >> matrix[i][h];
    }
  }

  // This block displays the users input in a grid
  cout << "You entered:" << endl;
  for(int i=0;i<ROW_SIZE;++i){
    for(int h=0;h<COLUMN_SIZE;++h){
      cout << matrix[i][h] << "\t";
    }
    cout << endl;
  }

  // This loop is for calculating the sum of an entire row, HAS to have Row as the outer loop
  for(int i = 0;i<ROW_SIZE;++i){
    tempRowSum = 0;
    for(int h = 0; h<COLUMN_SIZE;++h){
      tempRowSum += matrix[i][h];
    }
    row_sum[i] = tempRowSum;
  }
  // This loop is for calculating the sum of an entire column, HAS to have column as the outer loop
  for(int i = 0;i<COLUMN_SIZE;++i){
    tempColSum = 0;
    for(int h = 0; h<ROW_SIZE;++h){
      tempColSum += matrix[h][i];
    }
    column_sum[i] = tempColSum;
  }

  // These 2 loops just run through the arrays of sums (Rows first, columns second)
  for(int i = 0; i < ROW_SIZE;i++){
    cout << "Row #" << i+1 << " sum: " << row_sum[i] << endl;
  }
  for(int i = 0; i < COLUMN_SIZE; i++){
    cout << "Column #" << i+1 << " sum: " << column_sum[i] << endl;
  }

  return 0;
}