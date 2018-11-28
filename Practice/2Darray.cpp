#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fill(int **array2D, int rows, int cols);

int main(){
  
  // Creating 2D array, with rows first.
  int **matrix = new int*[5];

  for (int i = 0; i < 5; i++){
    // Create the coloumns, making a 5 x 5 2D array;
    matrix[i] = new int[5];
  }

  fill(matrix, 5, 5);

  for (int i = 0; i < 5; i++){
    // Delete the columns
    delete[] matrix[i];
  }

  // Delete the rows array
  delete[] matrix;

  return 0;
}

void fill(int **array2D, int rows, int cols){
  srand(time(NULL));
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      array2D[i][j] = (rand() % 90) + 10;
      cout << array2D[i][j] << " ";
    }
    cout << endl;
  }
}