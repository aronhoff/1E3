#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int years;
	double initial_value, rate, min_rate, max_rate, max_years, year_steps, rate_steps;
	cout << setfill(' ');
	
	cout << "Enter the initial investment: ";
	cin >> initial_value;
	cout << "Enter the max years: ";
	cin >> max_years;
	cout << "Enter the steps in years: ";
	cin >> year_steps;
	cout << "Enter the max rate: ";
	cin >> max_rate;
	cout << "Enter the min rate: ";
	cin >> min_rate;
	cout << "Enter the steps in rate: ";
	cin >> rate_steps;
	
	cout << setw(5) << "Rate";
	for (years = year_steps; years <= max_years; years = years + year_steps) {
		cout << setw(3) << years << " years";
	}
	cout << endl;
	
	cout << setprecision(2) << fixed;
	for (rate = min_rate; rate <= max_rate; rate = rate + rate_steps) {
		cout << setw(5) << rate;
		for (years = year_steps; years <= max_years; years = years + year_steps) {
			cout << setw(9) << initial_value*pow(1 + rate/100, years);
		}
		cout << endl;
	}
	return 0;
}