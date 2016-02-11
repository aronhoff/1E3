#include <iostream>
#include <cfloat>
using namespace std;

int main() {
	string name;
	
	cin >> name;
	while (name != "XXX") {
		int count = 0;
		double temp, max = DBL_MIN, min = DBL_MAX, sum = 0;
		
		cin >> temp;
		while (temp != -999) {
			if (max < temp) {
				(max = temp);
			}
			if (min > temp) {
				(min = temp);
			}
			sum = sum + temp;
			count++;
			cin >> temp;
		}
		cout << name << " " << min << " " << max << " " << sum / count << endl;
		cin >> name;
	}
	
	return 0;
}