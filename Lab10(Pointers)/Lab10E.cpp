/*
  Author: Jordan Bursik
  Date: 2018-11-18
  Description: Using dynamic arrays, have a 2D array of students * test scores,
  and another dynamic array for the averages of each student.
*/

#include <iostream>
using namespace std;

int main(){
  int number_of_students, number_of_tests;

  // Prompt for the "ROWS" of the array
  cout << "How many students?: ";
  cin >> number_of_students;
  
  int **p_2D; // Create a 2D pointer
  p_2D = new int*[number_of_students]; // Create the array in memory
  double *avgs; // Create a 1D pointer for averages
  avgs = new double[number_of_students]; // Creat in memory with how many students there are
  

  for(int i = 0;i < number_of_students;i++){
    cout << "How many tests for student #" << i+1 << "?: "; cin >> number_of_tests; // Ask to create the COLS for each ROW 

    p_2D[i] = new int[number_of_tests]; // Create the COL for each ROW in the 2D array

    // cout << "Enter test scores:" << endl; // This line is unnecessary in the given code, prompting is happening in the next loop

    int sum = 0; // Needs to be reset for every student before averages are calculated

    for(int j = 0;j < number_of_tests;j++){
      cout << "Enter test grade #" << j+1 << ": ";
      cin >> *(p_2D[i]+j); // Using dereference for position i for student, j for test
      sum += *(p_2D[i]+j); // Used for the calculation for the average
    }
    *(avgs+i) = sum / static_cast<double>(number_of_tests); // Calculate the average ad place it into the averages array at position i for student
  }

  for(int i = 0; i < number_of_students;i++){
    // Output the averages of each student
    cout << "The average for student #" << i+1 << ": " << *(avgs+i) << endl;
  }

  delete[] avgs; // Delete the averages array
  for(int i = 0; i < number_of_students;i++){
    // I believe this deletes the arrays at each student(i)
    delete[] (p_2D+i);
  }
  delete[] p_2D; // Delete the students array which is now theoretically 1 dimensional

  return 0;
}

// This is all magic as far as I am concerned.