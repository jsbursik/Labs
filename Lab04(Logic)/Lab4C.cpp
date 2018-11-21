/*
 	Author: Jordan Bursik
	Date: 20180924
	Description: Identify palindromes in 3-5 letter words.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	string userWord; // The Users input word
	bool isPalindrome = false; // Will be false until proven true

	cout << "Please enter a 3-5 letter word: ";
	cin  >> userWord;


	// Start a switch case based on string length
	switch (userWord.length()) {
		case 5:
			// 5 letter word
			if (userWord[4] == userWord[0]){
				if (userWord[3] == userWord[1]){
					isPalindrome = true;
				}
			}
			break;
		case 4:
			// 4 letter word
			if (userWord[3] == userWord[0]){
				if (userWord[2] == userWord[1]){
					isPalindrome = true;
				}
			}
			break;
		case 3:
			// 3 letter word
			if (userWord[2] == userWord[0]){
				isPalindrome = true;
			}
			break;
		default:
			cout << "Your word is either too long or too short." << endl;
			return 0; // This will exit the program early.
		}

	if (isPalindrome) {
		// Testing if isPalindrome == true, print that it is.
		cout << "Your word \"" << userWord << "\" is a palindrome!" << endl;
	} else {
		// !isPalindrome
		cout << "Your word \"" << userWord << "\" is NOT a palindrome." << endl;
	}

	return 0;

}
