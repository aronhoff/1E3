#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double diam, price, area, ppsi;
	cout << "Enter the diameter of the pizza: ";
	cin >> diam;
	cout << "Enter the price: ";
	cin >> price;
	
	area = 3.141592653589*diam/2*diam/2;
	cout << "The area of the pizza is: " << area << "inches" << endl;
	ppsi = price/area*100;
	cout << "The price per square inch is: " << ppsi << "cent" << endl;
	return 0;
}
	