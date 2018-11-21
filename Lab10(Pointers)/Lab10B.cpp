/*
  Author: Jordan Bursik
  Date: 2018-11-18
  Description: A collection of pointer exercises.
*/

#include <iostream>
using namespace std;

int main(){
  int my_int = 10;
  int *my_iptr, *my_iptr2; // creat integer pointers

  my_iptr = &my_int; // make iptr point to the memory address of my_int

  // The next 4 lines are self-explanatory
  cout << "The value of my_int using the variable: " << my_int << endl;
  cout << "The memory address of my_int using the variable: " << &my_int << endl;
  cout << "The memory address of my_int using my_iptr pointer: " << my_iptr << endl;
  cout << "The value of my_int using the my_iptr pointer: " << *my_iptr << endl;
  cout << endl; // Make a separation

  *my_iptr = 15; // Dereference my_iptr to assign 15

  cout << "The value of my_int using the variable: " << my_int << endl;

  my_iptr = new int; // Creat new int
  *my_iptr = 20; // Assign 20 to that new int

  cout << "The value of my_int using the variable: " << my_int << endl; // Unchanged, because my_iptr no longer points to my_int

  my_iptr2 = new int; // Create new int
  my_iptr2 = my_iptr; // Assign my_iptr to my_iptr2 

  cout << "The value of my_iptr2 using dereference: " << *my_iptr2 << endl; // Display the value, not the memory or my_iptr2

  // Delete the allocated memory for the pointer variables.
  delete my_iptr;
  delete my_iptr2;

  cout << "my_iptr, my_iptr2 deleted." << endl;

  return 0;
}