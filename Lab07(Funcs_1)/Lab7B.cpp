/*
  Author: Jordan Bursik
  Date: 2018-10-22
  Description: Calculate the discriminate of a quadratic function
  given the coefficients from the user.
*/
#include<iostream>
using namespace std;

void get_coeff(double& coeff, int pos);
double bb_4ac();

int main(){
  double discriminate;
  cout << "You will be asked to give coefficients in the equation ax^2+bx+c=0." << endl;
  discriminate = bb_4ac();
  cout << "The discriminate for your function is: " << discriminate << endl;
  return 0;
}

/*
  Function: get_coeff
  Parameters: int pos for determining which coefficient to grab
  Return: Coefficient
  Description: Simple get function utilizing a switch based on the pos variable
*/
void get_coeff(double& coeff, int pos){
  double a,b,c;
  switch(pos){
    case 2:
      cout << "Enter your a coefficient: ";
      cin  >> coeff;
      break;
    case 1:
      cout << "Enter your b coefficient: ";
      cin  >> coeff;
      break;
    case 0:
      cout << "Enter your c coefficient: ";
      cin  >> coeff;
      break;
    default:
      break; // This should never happen
  }
}
/*
  Function: bb_4ac
  Parameters: None
  Return: Discriminate value
  Description: use get_coeff to get coefficient values then
  calculate the discriminate
*/
double bb_4ac(){
  double a,b,c;
  get_coeff(a,2);
  get_coeff(b,1);
  get_coeff(c,0);
  return (b*b-4*a*c);
}