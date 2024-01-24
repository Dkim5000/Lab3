// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;

	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value:";
	cin >> A;
	cout << "Please enter the second value:";
	cin >> B;
	cout << "" << endl;
}

void firstChoice(float A, float B, float y) {
	cout << A << " + " << B << " = " << y << endl;
}

void secondChoice(float A, float B, float y) {
	cout << A << " - " << B << " = " << y << endl;
}

void thirdChoice(float A, float B, float y) {
	cout << A << " * " << B << " = " << y << endl;
}

void fourthChoice(float A, float B, float y) {
	cout << A << " / " << B << " = " << y << endl;
}

int main() {

	int choice;
	float A;
	float B;
	float y;

	printMenu(choice);
	getChoices(A, B);

	if (choice == 1) {
		y = A + B;
		firstChoice(A, B, y);
	}

	if (choice == 2) {
		y = A - B;
		secondChoice(A, B, y);
	}

	if (choice == 3) {
		y = A * B;
		thirdChoice(A, B, y);
	}

	if (choice == 4) {
		y = A / B;
		fourthChoice(A, B, y);
	}

	return 0;
}
