//
// Created by Collin Stratton on 1/14/2020
// This is my work
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;

int main() {
	// Largest/Smallest Random Number
	cout << "<---Largest/Smallest Random Number--->" << endl;
	// Ask user for 5 integers and assign them to variables
	int a, b, c, d, e;
	cout << "Enter 5 Integers: "; cin >> a >> b >> c >> d >> e;
	int array[5] = { a, b, c, d, e };
	int largestValue = array[0], smallestValue = array[0];

	// Loops through the variables to find the smallest and largest variable
	for (int i = 0; i<4; i++) {
		if (array[i + 1] > largestValue) {
			largestValue = array[i + 1];
		}
		else if (smallestValue > array[i + 1]) {
			smallestValue = array[i + 1];
		}
	}

	// Print array and largest/smallest values
	for (int i = 0; i<5; i++) {
		cout << array[i] << endl;
	}
	cout << "The largest value is: " << int(largestValue) << endl;
	cout << "The smallest value is: " << int(smallestValue) << endl;
	cout << "-------------------------" << endl;

	// Positive ints of 7
	cout << "<---Positive integers of 7--->" << endl;

	// Print the first 50 positive values of 7
	int x1 = 0;
	for (int i = 0; i <= 50; i++) {
		x1 += i * 7;
		cout << x1 << endl;
	}
	cout << "-------------------------" << endl;

	// Factorial
	cout << "<---10 Factorial--->" << endl;

	// Print 10!
	int x2 = 1;
	for (int i = 1; i <= 10; i++) {
		x2 *= i;
		cout << x2 << endl;
	}
	cout << "-------------------------" << endl;

	// Palindrome
	cout << "<---Palindrome--->" << endl;

	// Asks user for a phrase
	string phrase;
	int length1, flag1 = 0;
	cout << "Enter a phrase: "; cin >> phrase;

	length1 = phrase.size();

	// Grabs the first and last value of the phrase and checks to see if they are the same, then loops in
	for (int i = 0; i<length1; i++) {
		if (phrase[i] != phrase[length1 - i - 1]) {
			flag1 = 1;
			break;
		}
	}

	// If a flag was triggered, the word is not a palindrome, otherwise it is
	if (flag1) {
		cout << phrase << " is not a palindrome" << endl;
	}
	else {
		cout << phrase << " is a palindrome" << endl;
	}
	cout << "-------------------------" << endl;

	// Prime Number
	cout << "<---Prime Number--->" << endl;

	// Asks for a number from the user
	int x3, y3, flag2 = 0;
	cout << "Enter a number to check prime: "; cin >> x3;

	y3 = x3 / 2;

	// For loops check to see if the inputted number is prime using mod
	for (int i = 2; i <= y3; i++) {
		if (x3 % i == 0) {
			cout << x3 << " is a not prime number" << endl;
			flag2 = 1;
			break;
		}
	}

	// If there was no flag then the value was prime
	if (flag2 == 0) {
		cout << x3 << " is a prime number" << endl;
	}
	cout << "-------------------------" << endl;

	// Averaging Values
	cout << "<---Averaging Values--->" << endl;

	// Creates an initialized array of values to average
	int length2;
	//FRITZ: THIS VAR IS UNITIALIZED
	double avg;
	int arr[] = { 12, 3, 4 , 64, 23, 3, 74 };
	length2 = sizeof(arr) / 4;

	// adds every value to avg
	for (int i = 0; i <= length2 - 1; i++) {
		//FRITZ: NOT ALLOWED WITH AN UNITIALIZED VAR
		avg += arr[i];
	}

	// prints out the average value of the values of the array
	cout << "Average Value is: " << avg / length2 << endl;
	cout << "-------------------------" << endl;

	// Reading Strings
	cout << "<---Reading Strings--->" << endl;

	// Asks user for the number of words to process
	int x4;
	string* wordList;
	string longestWord;
	cout << "Enter the number of words to process: "; cin >> x4;

	wordList = new string[x4];

	// Grabs the text file to read from
	ifstream fin("text.txt");

	if (!fin) {
		cerr << "File not found" << endl;
		exit(2);
	}

	// Prints off all the words from the words to process value
	for (int i = 0; i<x4; i++) { fin >> wordList[i]; }
	for (int i = 0; i<x4; i++) { cout << wordList[i] << " "; }
	cout << endl;

	// Finds and displays the largest word from the words displayed.
	longestWord = wordList[0];
	for (int i = 0; i<x4; i++) {
		if (wordList[i + 1].size() > longestWord.size()) {
			longestWord = wordList[i + 1];
		}
	}

	cout << "The Longest Word Is: " << longestWord << endl;

	cout << "-------------------------" << endl;

	delete[] wordList;

	return 0;
}