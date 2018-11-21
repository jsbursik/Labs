/*
  Author: Jordan Bursik
  Date: 2018-10-15
  Description: Use an array to enter heights for students
  then using another array store whether these heights are
  above, below, average.
*/

#include<iostream>
using namespace std;

int main(){
  const int SIZE = 8;
  int height[SIZE];
  int above_average[SIZE];
  int sum = 0, above_count = 0;
  float avg_height;

  // Loop for inputting heights into an array
  for(int i=0;i<SIZE;i++){
    cout << "Enter height in inches of student #" << i + 1 << ": ";
    cin >> height[i];
    sum += height[i];
  }
  cout << endl;

  avg_height = sum / static_cast<float>(SIZE); // Calculate average height of 8 students

  cout << "You entered: " << endl;
  for(int i=0;i<SIZE;++i){
    cout << "Height in inches of student #" << i+1 << ":" << height[i] << endl;
    if(height[i] > avg_height){
      above_average[above_count] = height[i];
      above_count += 1;
    }
  }

  // This displays the average height then goes through the above_average array to display heights that were above average
  cout << "The average height was " << avg_height << " inches." << endl;
  cout << "Here are all the heights that were above average:" << endl;
  for(int i = 0;i < above_count;i++){
    cout << "Height " << i + 1 << ": " << above_average[i] << endl;
  }

  return 0;
}