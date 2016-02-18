#include <iostream>
using namespace std;

int main() {
	long i, first = 0, second = 1, next = 1;
	
	for (i = 1; next >= 0; i++) {
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
	cout << "The number of terms before overflow is: " << i - 1 << endl;
	
	return 0;
}		