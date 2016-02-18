#include <iostream>
using namespace std;

int main() {
	int i, first = 0, second = 1, no_digits, next;
	
	cout << "Enter the number of digits: ";
	cin >> no_digits;
	
	for (i = 1; i <= no_digits; i++) { 
		if (i == 1) {
			cout << first;
		}
		else {
			cout << " " << second;
			next = first + second; 
			first = second; 
			second = next;
		}
	}
	
	cout << endl;
	
	return 0;
}