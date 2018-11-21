/*
  Author: Jordan Bursik
  Date: 20181001
  Description: This program uses a looped menu to perform
  multiple operations based on numbers input by the user.
*/

#include <iostream>
using namespace std;
enum Options {SUM = 1, MEAN = 2, MIN = 3, MAX = 4, EXIT = 5};
const int NUMNUMS = 6;

int main(){
  int choice;
  float sum,maxNum,minNum,tempNum;

  cout << "+---------------------------------------------------+\n";
	cout << "| 	    Computer Science and Engineering	    |\n";
	cout << "|	     CSCE 1030 - Computer Science I         |\n";
	cout << "| Jordan Bursik - jsb0292 - jordanbursik@my.unt.edu |\n";
	cout << "+---------------------------------------------------+\n";

  do {
    // Print the menu
    cout << "1. Sum of 6 floating point numbers.\n";
    cout << "2. Mean of 6 floating point numbers.\n";
    cout << "3. Minimum of 6 floating point numbers.\n";
    cout << "4. Maximum of 6 floating point numbers.\n";
    cout << "5. Exit\n";
    cout << "Choose an option: ";
    
    // User inputs their choice
    cin  >> choice;

    // These values need to be reset everytime this runs
    sum = 0;
    maxNum = 0;
    minNum = 0;

    if(choice != EXIT){
    // This for loop grabs the six numbers and preprocesses some of the information
      for(int i = 1;i <= NUMNUMS;i++) {
            cout << "Enter number " << i << ": ";
            cin  >> tempNum;
            sum += tempNum; // Computing the sum
            if(tempNum > maxNum){
              maxNum = tempNum;
            }
            // the i == 1 is to make sure that the default of zero isn't used 
            if (i == 1 || tempNum < minNum){
              minNum = tempNum;
            }
      }
    }

    switch (choice) {
      case SUM:
        cout << "The sum of your numbers is: " << sum << "\n\n";
      break;
      case MEAN:
        cout << "The mean of your numbers is: " << sum / static_cast<float>(NUMNUMS) << "\n\n";
      break;
      case MAX:
        cout << "The maximum of your numbers is: " << maxNum << "\n\n";
      break;
      case MIN:
        cout << "The minimum of your numbers is: " << minNum << "\n\n";
      break;
      case EXIT:
        cout << "Thank you for using my program!" << endl;
      break;
      default:
        // Error handling for menu input
        cout << "Your option " << choice << " was not a valid option.\n";
    }
  } while (choice != EXIT);

}