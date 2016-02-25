#include <iostream>
#include <cmath>
using namespace std;

bool isAFactor (int i, int n);
bool isAPrime (int n);

int main() {
	for (int n = 2; n <= 1000; n++) {
		if (isAPrime (n)) {
			cout << n << endl;
		}
	}
	
	return 0;
}

bool isAFactor (int i, int n) {
	return (n%i == 0);
}

bool isAPrime (int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (isAFactor (i, n)) {
			return false;
		}
	}
	return true;
}
	