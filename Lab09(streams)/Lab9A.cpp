/*
  Author: Jordan Bursik
  Date: 2018-11-12
  Description: Read in 9 integers from a given file,
  calculate and then print the average.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
  // initialize variable used for reading in stream numbers and calculating the sum for the average
  int sum = 0, next;

  // creat input stream, open act9A.txt in the stream
  ifstream in_stream;
  in_stream.open("act9A.txt");

  // Loop through the 9 integers in the file add to sum.
  for(int i = 0; i < 9; i++){
    in_stream >> next;
    sum += next;
  }

  // Print the average using the sum divided by 9
  cout << "The average of all the numbers is: " << sum / 9.0 << endl;

  // Close the file, end the program
  in_stream.close();
  return 0;
}