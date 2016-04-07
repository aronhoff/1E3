#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double rent, increase_rent, maintenance;
	int units;
	
	cout << "Enter rent: "; 
	cin >> rent;
	cout << "Enter increase in rent that results in one empty unit: ";
	cin >> increase_rent;
	cout << "Enter maintenance: ";
	cin >> maintenance;
	cout << "Enter the number of units: ";
	cin >> units;
	
	cout << setfill(' ') << setw(5) << "Rent" << setw(10) << "Units" << setw(10) << "Profit" << endl;
	double profit_1;
	
	for(int i = 0; ;i++){
		double profit = (units-i)*(rent+increase_rent*i) - (units-i)*maintenance;
		
		
		if(profit_1 > profit){
			cout << "Maximum profit is " << (units-i)*(rent+increase_rent*(i)-1) - (units-i)*maintenance << endl;
			cout << "Rent should be " << (rent+increase_rent*(i)-1) << endl;
			break;
		}
		else{
			cout << setw(5) << rent + (increase_rent*i) << setw(10) << units-i << setw(10) << profit << endl; 
		}
		
		profit_1 = profit;
	}
	return 0;
}