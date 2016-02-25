#include <iostream>
#include <cmath>
using namespace std;

bool veryClose (double x, double y);
double distance (double x1, double y1, double x2, double y2);
int triangleType (double x1, double y1, double x2, double y2, double x3, double y3);

int main() {
	double x1, y1, x2, y2, x3, y3;
	/*x1 = 0;
	y1 = 0;
	x2 = 6;
	y2 = 0;
	x3 = 3;
	y3 = 5;*/
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	
	int result = triangleType (x1, y1, x2, y2, x3, y3);
	if (result == 0) {
		cout << "The triangle is scalene." << endl;
	}
	else if (result == 2) {
		cout << "The triangle is isoceles." << endl;
	}
	else {
		cout << "The triangle is equilateral." << endl;
	}
		
	return 0;
}

double distance (double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

bool veryClose (double x, double y) {
	return (fabs (x-y) < 0.0000001);
}

int triangleType (double x1, double y1, double x2, double y2, double x3, double y3) {
	double d1 = distance (x1, y1, x2, y2);
	double d2 = distance (x2, y2, x3, y3);
	double d3 = distance (x3, y3, x1, y1);
	int count = 0;
	if (veryClose (d1, d2)) {
		count = count + 1;
	}
	if (veryClose (d2, d3)) {
		count = count + 1;
	} 
	if (veryClose (d1, d3)) {
		count = count + 1;
	}
	if (count == 1) {
		count = 2;
	}
	return count;
}