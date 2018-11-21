/*
  Author: Jordan Bursik
  Date: 2018-10-22
  Description: Utilize a function to find the smallest
  value in an array.
*/

#include<iostream>
using namespace std;

const int SIZE = 5;

void get_min(double& minimum, double my_array[]); // Declare the function

int main(){
  double my_array[SIZE] = {1.1,-3.6,2.5,2.9,-3.4};
  double minimum = my_array[0];
  get_min(minimum, my_array); // Call the function to find the minimum of the array
  cout << "Smallest value: " << minimum << endl;
  return 0;
}

/*
  Function: get_min
  Parameters: minimum and the array in question
  Returns: the minimum value
  Description: Utilize a for loop on an array to find the minimum.
*/
void get_min(double& minimum, double my_array[]){
  for (int i=1;i<SIZE;i++){
    if(minimum>my_array[i])
      minimum=my_array[i];
  }
}