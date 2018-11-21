#include <iostream>
using namespace std;

const int SIZE = 20; // Determines the size of the Grid

void initGrid(char arr[][SIZE], int size); // Fill's a given array with S's
void printGrid(char arr[][SIZE], int size); // Prints an array in a grid format
void infect(char arr[][SIZE], int size); // Asks for coordinate, infects said coordinate.
void spreadInf(char arr1[][SIZE], int s1, char arr2[][SIZE], int s2); // operates on data from arr1, outputs data to arr2
void modifySurround(char arr[][SIZE], int s1, char arr2[][SIZE], int s2, int x, int y);
void shiftArrays(char arr1[][SIZE], int s1, char arr2[][SIZE], int s2); // puts arr2 into arr1
int iCount(char arr[][SIZE], int size); // Counts infected in an array

int main(){
  int day = 0, numInfected;
  char currDay[SIZE][SIZE];
  char nextDay[SIZE][SIZE];

  cout << "***************************************************" << endl;
  cout << "\tComputer Science and Engineering" << endl;
  cout << "\t CSCE 1030 - Computer Science I" << endl;
  cout << "Jordan Bursik    jsb0292    jordanbursik@my.unt.edu" << endl;
  cout << "***************************************************" << endl;

  // Set up the program to run
  // init both arrays to be the same state
  initGrid(currDay, SIZE);
  initGrid(nextDay, SIZE); // So the next day isn't empty
  infect(currDay, SIZE); // Let user choose point of infection
  numInfected = iCount(currDay, SIZE); // Count the number of infected

  /*
    Start the loop for running the infection, 
    requires one point to be infected to run,
    will stop running once everything runs its
    course.
  */

  while(numInfected != 0){
    cout << "Day: " << day << endl;
    printGrid(currDay, SIZE);
    spreadInf(currDay, SIZE, nextDay, SIZE);
    numInfected = iCount(currDay, SIZE);
    shiftArrays(currDay, SIZE, nextDay, SIZE);
    ++day;
    cout << endl;
  }
  cout << "It took " << day << " days for the outbreak to end." << endl;
  return 0;
}

/*
  Function: initGrid
  Parameters: Character array to represent a grid of people
              Integer for giving the size of the array
  Returns: Nothing, it modifies the array given
  Description: Takes the array given and initializes every point with 'S' for succeptable
*/
void initGrid(char arr[][SIZE], int size){
  for(int i = 0; i < SIZE; i++){
    for(int j = 0; j < SIZE; j++){
      arr[i][j] = 'S';
    }
  }
}

/*
  Function: printGrid
  Parameters: Character array to represent a grid of people
              Integer for giving the size of the array
  Returns: Nothing
  Description: Prints out the array in a grid fashion, spaces between column values, endl's between rows.
*/
void printGrid(char arr[][SIZE], int size){
  for(int i = 0; i < SIZE; i++){
    for(int j = 0; j < SIZE; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

/*
  Function: iCount
  Parameters: Character array to represent a grid of people
              Integer for giving the size of the array
  Returns: integer for the total count of infected
  Description: Recieves an array, iterates through it, adds one to the counter for every 'I' it encounters.
*/
int iCount(char arr[][SIZE], int size){
  int count = 0;
  for(int i = 0; i < SIZE; i++){
    for(int j = 0; j < SIZE; j++){
      count = (arr[i][j] == 'I') ? ++count : count;
    }
  }
  return count;
}
/*
  Function: spreadInf
  Parameters: 1st Character array to represent a grid of people
              1st Integer for giving the size of the array
              2nd Character array to represent a grid of people
              2nd Integer for giving the size of the array
  Returns: Nothing, it reads from one array, pushes the next array
  Description: Reads in the current day array, find's I coordinates, calls another function to scan AROUND
               the current I position, makes the current coordinate in the NEXT DAY 'R' for recovered.
*/
void spreadInf(char arr1[][SIZE], int s1, char arr2[][SIZE], int s2){
  for(int i = 0; i < SIZE; i++){
    for(int j = 0;j < SIZE; j++){
      if(arr1[i][j] == 'I'){
        modifySurround(arr1, SIZE, arr2, SIZE, i, j); // Call function to check around my coordinate.
        arr2[i][j] = 'R'; // Make sure the current I is recovered next day.
      }
    }
  }
}
/*
  Function: modifySurround
  Parameters: 1st Character array to represent a grid of people
              1st Integer for giving the size of the array
              2nd Character array to represent a grid of people
              2nd Integer for giving the size of the array
              Integer for the row position of the I identified in the calling function
              Integer for the col position of the I identified in the calling function
  Returns: Nothing, it turns all S's in the given array to I's in the next day array
  Description: Scans directly around the given x,y position for S's, turns them to I
               in the next day array.
*/
void modifySurround(char arr1[][SIZE], int s1, char arr2[][SIZE], int s2, int x, int y){
  // for loops setup to check one-left, one-right, one-up, one-down from the given coordinate.
  for(int i = x-1; i <= x+1; i++){
    for(int j = y-1; j <= y+1; j++){
      if ((i >= 0) && (i < SIZE) && (j >= 0) && (j < SIZE)){ // This line makes sure you don't test anything over the edge of the grid.
        if(arr1[i][j] == 'S'){
          arr2[i][j] = 'I';
        }
      }
    }
  }
}
/*
  Function: shiftArrays
  Parameters: 1st Character array to represent a grid of people
              1st Integer for giving the size of the array
              2nd Character array to represent a grid of people
              2nd Integer for giving the size of the array
  Returns: Nothing, it reads from one array, pushes the next array
  Description: Reads in one array one by one, assigns current day with everything in the next day.
               Important because everytime the loop progresses it needs an array to edit without
               effecting the current day.
*/
void shiftArrays(char arr1[][SIZE], int s1, char arr2[][SIZE], int s2){
  for(int i = 0; i < SIZE; i++){
    for(int j = 0; j < SIZE; j++){
      arr1[i][j] = arr2[i][j];
    }
  }
}
/*
  Function: infect
  Parameters: Character array to represent a grid of people
              Integer for giving the size of the array
  Returns: Nothing, modifies a single point in the array given.
  Description: Using 2 do-while loops to ask the user to input a coordinate
               to infect. Then assign that coordinate with an 'I' for infected.  
*/
void infect(char arr[][SIZE], int size){
  int x, y;
  // do-while is necessary in case an out of bounds input is given
  do {
    cout << "Please enter a row coordinate (0," << SIZE - 1 << "): ";
    cin  >> x;
    if((x > SIZE) || (x < 0)){
      cout << "Input is out of bounds, please try again.";
    }
  } while((x > SIZE) || (x < 0));
  // do-while is necessary in case an out of bounds input is given
  do {
    cout << "Please enter a column coordinate (0," << SIZE - 1 << "): ";
    cin  >> y;
    if((y > SIZE) || (y < 0)){
      cout << "Input is out of bounds, please try again.";
    }
  } while((y > SIZE) || (y < 0));

  arr[x][y] = 'I'; // Assign coordinate to be infected
}