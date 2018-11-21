/*
	Author: Jordan Bursik
	Date: 2018-09-15
	Description: This program is supposed to calculate the 
	acceleration due to gravity of a planet.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	float inpMass, inpRadius, inpFeet; 
	double outMeters, outAcceGrav, outTime;
	const float GRAV_CONST = 6.673e-11;


	cout << "+---------------------------------------------------+\n";
	cout << "| 	    Computer Science and Engineering	    |\n";
	cout << "|	     CSCE 1030 - Computer Science I         |\n";
	cout << "| Jordan Bursik - jsb0292 - jordanbursik@my.unt.edu |\n";
	cout << "+---------------------------------------------------+\n";
	
	// Handle outputs to only include 2 decimal places.
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// Recieve necessary inputs to compute acceleration due to gravity.
	cout << "Enter mass in kilograms: ";
	cin >> inpMass;
	cout << "Enter radius in meters: ";
	cin >> inpRadius;
	
	// Calculate acceleration due to gravity.
	outAcceGrav = (GRAV_CONST * inpMass) / pow(inpRadius, 2.0);
	cout << "The acceleration due to gravity is " << outAcceGrav << " meters per second squared." << endl;

	// Recieve height of object dropped on the given planet.
	cout << "Enter height in feet: ";
	cin >> inpFeet;
	
	// Calculate the time it will take for the object to drop on the given planet.
	inpFeet /= 3.28;
	outTime = sqrt((2 * inpFeet) / outAcceGrav);
	cout << "The Object will reach the surface in " << outTime << " seconds." << endl;
	
	return 0;
}
