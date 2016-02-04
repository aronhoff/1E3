#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	double hours, wage;
	string name;
	double tax, prsi, net_pay, grosswage, taxcredit;
	
	cin >> hours >> wage >> taxcredit;
	getline(cin, name);
	
	cout << setfill(' ');
	int width = 37;
	string current = "Name";
	cout << current;
	cout << setw(width - current.length()) << name << endl;
	
	current = "Hours";
	cout << current;
	cout << setw(width - current.length()) << hours << endl;
	
	width = 40;
	cout << fixed << setprecision(2);
	current = "Hourly rate";
	cout << current;
	cout << setw(width - current.length()) << wage << endl;

	if (hours <= 35) { 
		grosswage = hours*wage;
	} 
	else {
		grosswage = 35*wage + (hours-35)*wage*1.5;
	}
	current = "Gross Wage";
	cout << current;
	cout << setw(width - current.length()) << grosswage << endl;
	
	tax = grosswage*0.2;
	if (tax > taxcredit) { 
		tax = tax - taxcredit;
	}
	else { 
		tax = 0;
	}
	current = "Tax @ 20%";
	cout << current;
	cout << setw(width - current.length()) << tax << endl;

	prsi = grosswage*0.025;
	current = "PRSI @ 2.5%";
	cout << current;
	cout << setw(width - current.length()) << prsi << endl;

	current = "Union dues";
	cout << current;
	cout << setw(width - current.length()) << 3.50 << endl;
	
	cout << setfill('-') << setw(width) << "" << setfill(' ') << endl;
	
	net_pay = grosswage - tax - prsi - 3.5;
	current = "Net pay";
	cout << current;
	cout << setw(width - current.length()) << net_pay << endl;
	
	return 0;
}