// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Placeholder" << endl;
	cout << "2. Another Placeholder" << endl;
	cout << "3. And a third one" << endl;

	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value:";
	cin >> A;
	// The rest of this function is an exercise to the reader
}

void firstChoice(float A, float B) {
	cout << "This is proving the first choice ran" << endl;
}

void secondChoice(float A, float B) {
	cout << "This is proving the second choice ran" << endl;
}

int main() {

	int choice;
	float A;
	float B;

	printMenu(choice);
	getChoices(A, B);

	if (choice == 1) {
		firstChoice(A, B);
	}

	if (choice == 2) {
		secondChoice(A, B);
	}

	return 0;
}
