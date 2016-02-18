#include <iostream>
using namespace std;

int main() {
	int i, first = 0, second = 1, next = 1, N;
	cout << "Enter N: ";
	cin >> N;
	
	for (i = 1; next < N; i++) {
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
	cout << "The number of terms is: " << i - 1 << endl;
	
	return 0;
}		