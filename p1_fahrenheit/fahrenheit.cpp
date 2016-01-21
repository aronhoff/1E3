#include <iostream>

using namespace std;

int main() {
	int feet, inches;
	cout << "Enter the nummber of feet: ";
	cin >> feet;
	cout << "Enter the number of inches: ";
	cin >> inches;
	cout << "You entered " << feet << " ft " << inches << " in.\n";
	cout << "The equivalent in centimeters is ";
	cout << ((feet*12)+inches)*2.54 << ".\n";
	return 0;
};
