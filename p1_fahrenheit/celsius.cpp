#include <iostream>

using namespace std;

int main() {
	int fahrenheit;
	cout << "Enter the temperature in fahrenheit: ";
	cin >> fahrenheit;
	cout << "You entered " << fahrenheit << " degrees.\n";
	cout << "The equivalent in celsuis is " << (fahrenheit-32)*5/9 << ".\n";
	return 0;
}
