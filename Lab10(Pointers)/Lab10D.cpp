/*
  Author: Jordan Bursik
  Date: 2018-11-18
  Description: Use a pointer to create a dynamically sized array,
  let the user input numbers into the array, print it backwards.
*/

#include <iostream>
using namespace std;

int main(){
  int size;
  int* numList; // Make the intPtr

  // Give the user a prompt to choose the size of the array
  cout << "How big should the array be: ";
  cin >> size;

  // Create the dynamic array with the given size
  numList = new int[size];

  // Loop to let the user input the numbers into the array
  for(int i = 0; i < size; i++){
    cout << "Enter value #" << i+1 << ": ";
    cin >> *(numList+i);
  }

  // Print the array backwards
  for(int i = size; i > 0; i--){
    cout << "Value #" << i << ": ";
    cout << *(numList+(i-1)) << endl;
  }

  delete numList; // Gotta save that memory

  return 0;
}