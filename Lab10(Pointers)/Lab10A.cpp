/*
   Author: Jordan Bursik
   Date: 2018-11-18
   Description: Create an array of students (struct),
   fill the struct array with names, grades, and their average
   then print out the data recieved.
*/

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5; // 5 Students
const int NUM_GRADES = 3; // 3 Grades for each student

struct Student{
  string fullName;
  int scores[NUM_GRADES];
  double avg;
};

int main(){
  Student students[SIZE]; // initialize an array of students (size is 5)
  int sum;

  for(int i = 0; i < SIZE; i++){
    sum = 0; // Required at the beginning of the loop, resets every time to calculate the averages
    string first, last; // getline(cin, students[i].fullName) doesn't work properly in a loop, dirty but worky
    cout << "Enter student number " << i+1 << "'s full name: ";
    cin >> first >> last;
    students[i].fullName = first + " " + last; // Set students[i] full name
    
    for(int j = 0; j < NUM_GRADES; j++){
      // Loop used for entering grades into the integer array of each student
      cout << "Enter grade " << j+1 << " for " << students[i].fullName << ": ";
      cin >> students[i].scores[j];
      sum += students[i].scores[j]; // Used for calculating the average 
    }
    students[i].avg = sum / static_cast<double>(NUM_GRADES); // calculate and set the avg

    cout << endl; // Make stuff look good
  }

  for(int i = 0; i < SIZE; i++){
    // This for loop prints out the students array
    cout << "Student Name: " << students[i].fullName << endl;
    cout << "Student grades: ";
    for(int j = 0; j < NUM_GRADES; j++){
      // This for loop prints out the grades in order
      cout << students[i].scores[j] << " ";
    }
    cout << endl;
    cout << "Student grade average: " << students[i].avg << endl;
    cout << endl;
  }

  return 0;
}