#include <iostream>
#include <cfloat>
using namespace std;

int main() {
	string name;
	int count = 0;
	double temp, max = DBL_MIN, min = DBL_MAX, sum = 0;
	
	cin >> name >> temp;
	while (temp != -999) {
		if (max < temp) {
			max = temp;
		}
		if (min > temp) {
			min = temp;
		}
		sum = sum + temp;
		count++;
		cin >> temp;
	}
	
	cout << "The name is: " << name << endl;
	cout << "The max temperature is: " << max << endl;
	cout << "The min temperature is: " << min << endl;
	cout << "The average temperature is: " << sum / count << endl;
	return 0;
}