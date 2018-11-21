/*
  Author: Jordan Bursik
  Date: 2019-10-22
  Description: This program calculates the surface 
  area of a right cylinder using functions.
*/

#include<iostream>
#include<cmath>
using namespace std;

const double PI = 3.14159;
float calcBaseArea(float r);
float calcSideArea(float r, float h);
void printSurfArea(float base_area, float side_area);

int main(){
  float h;
  float r;
  float base_area;
  float side_area;

  cout << "Enter the radius of the right cylinder in feet: ";
  cin  >> r;

  cout << "Enter the height of the right cylinder in feet: ";
  cin  >> h;

  base_area = calcBaseArea(r);
  cout << "Base surface area of right cylinder is " << base_area << " square feet." << endl;

  side_area = calcSideArea(r, h);
  cout << "Side surface area of right cylinder is " << side_area << " square feet." << endl;

  printSurfArea(base_area, side_area);

  return 0;
}
/*
  Function: calcBaseArea
  Parameters: Radius of the right cylinder
  Return: Returns float of both base areas
  Description: Calculates and returns the combined base areas
*/
float calcBaseArea(float r){
  return (2 * PI * pow(r,2));
}
/*
  Function: calcSideArea
  Parameters: Radius of the right cylinder, height of the cylinder
  Return: Returns float of the cylinder area
  Description: Calculates and returns the area of the side
*/
float calcSideArea(float r, float h){
  return ((2 * PI * r) * h);
}
/*
  Function: printSurfArea
  Parameters: the calculated base_area and side_area
  Return: nothing
  Description: Prints the calculated Surface Area.
*/
void printSurfArea(float base_area, float side_area){
  float sa;
  cout << "The area of the right cylinder is " << base_area + side_area << " square feet." << endl;
}
