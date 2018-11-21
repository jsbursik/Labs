#include <iostream>
using namespace std;

int main() {
	float miles, kilo;
	cout << "How many miles did you walk today?\n";
	cin >> miles;
	kilo = 1.609 * miles;
	cout << "You walked " << kilo << " kilometer(s) today!" << endl;
	return 0;
}
