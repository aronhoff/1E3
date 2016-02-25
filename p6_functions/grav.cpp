#include <iostream>
#include <cmath>
using namespace std;

double grav_force (double mass1, double mass2, double distance);

int main() {
	double mass1, mass2, distance;
	cout << "Enter the mass of object one: ";
	cin >> mass1;
	while (mass1 >= 0) {
		cout << "Enter the mass of object two: ";
		cin >> mass2;
		cout << "Enter the distance between them: ";
		cin >> distance;
		
		cout << grav_force (mass1, mass2, distance) << endl << endl;
		
		cout << "Enter the mass of object one (enter less than 0 to quit): ";
		cin >> mass1;
	}
	return 0;
} 

double grav_force (double mass1, double mass2, double distance) {
	return 6.67e-11 * mass1 * mass2 / (distance * distance);
}