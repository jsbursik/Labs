/*
	Author: Jordan Bursik
	Date: 20180910
	Description: The purpose of this program is to do
	arithmetic and recieve a desired answer of 50.
*/


#include <iostream>
using namespace std;

int main() {
	// Initializing Variables	
	const float OFFSET = 0.32;
	float var1 = 39.4;
	float var2 = 7.5;
	int var3 = '4';
	float var4 = 22;
	
	// Calulate the desired output of 50 using the variables given
	int var5 = ((int)var1 + (int)var2 + var4 - var3) / OFFSET; // Typecasting var1 and var2
	cout << var5 << endl; //Should print 50

	return 0;
}
