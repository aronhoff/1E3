#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double cm;
	int in, ft, yd;
	cout << "Enter the number of centimetres: ";
	cin >> cm;
	in = cm/2.54;
	ft = in/12;
	in = in%12;
	yd = ft/3;
	ft = ft%3;
	cout << "Number of yards: " << yd << endl;
	cout << "Number of feet: " << ft << endl;
	cout << "Number of inches: " << in << endl;
	
	return 0;
}
	