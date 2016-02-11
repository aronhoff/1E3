#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int months = 0;
	double money = 1500, interest = 0;
	
	cout << setfill(' ') << setprecision(3) << fixed;
	cout << "Month      Left  Interest" << endl;
	
	while (money > 0) {
		interest = interest + money * 0.01;
		money = money * 1.01;
		money = money - 50;
		if (money < 0) 
			money = 0;
		months++;
		
		cout << setw(5) << months << setw(10) << money << setw(10) << interest << endl;
	}
	cout << endl;
	cout << "It took " << months << " months" << endl;
	cout << "The interest is equal to " << interest << " euros" << endl;
	
	return 0;
}