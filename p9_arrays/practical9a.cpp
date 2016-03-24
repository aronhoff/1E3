#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () {
	int list[70];
	
	for(int i = 0; i < 70; i++){
		cin >> list[i];
	}
	
	for(int row = 20; row >= 1; row--){
		cout << setw(2) << setfill(' ') << row << "   ";
		for(int column = 0; column < 70; column++){
			if(list[column] < row){
				cout << " ";
			}
			else{
				cout << "*";
			}
		}
		cout << endl;
	}
	
	cout << "----|";	
	for(int  i = 1; i <= 7; i++){
		cout << "----+----|";
	} 
	cout << endl;
	return 0;
}