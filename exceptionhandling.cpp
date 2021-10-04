#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <cstdbool>
#include <exception>
#define MAXNUM 512

// Finishing up on simple C++ albeit most Windows API is in C, C#, Visual Basic, VBScript or Powershell
// Completely original re-demonstration of an average program
// Charles Truscott

void convert_values();
int sum_values(int array_of_ints[]);
using namespace std;
int main()
{
	int how_many (0);
	long long int sum (0);
	long long int reciprocal (0);
	long long int average (0);
	vector<int> vecOfInts{0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	cout << "\nCharles T.W. Truscott Watters, simple average program\n\n";
	cout << "How many numbers to sum?:\t";
	cin >> how_many;
	for (int i = 0; i <= how_many - 1; ++i) {
		cin >> vecOfInts.at(i);
		cout << "You entered: " << vecOfInts.at(i) << endl;
	}
	for (int j = 0; j <= vecOfInts.size() - 1; ++j) {
		sum += vecOfInts.at(j);
	}
	reciprocal = vecOfInts.size() - 1;
	try {
		average = sum / reciprocal;
		if (reciprocal == 0) {
			throw 0;
		}
	}
	catch (int &ex) {
		std::cout << "Cannot divide by zero";

	}
	cout << "The average is:\t" << average << "." << endl;
}

void convert_values() {
}

int sum_values(int array_of_ints[]) {
	return 0;
}