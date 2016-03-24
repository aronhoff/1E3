#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void read(char answer[]);
int score(char exam[], char student[]);

int main () {
	char exam[20], student[20];
	read(exam);
	
	int number;
	cin >> number;
	while(number > 0){
		read(student);
		cout << number << " " << score(exam, student) << endl;
		cin >> number;
	}
	
	return 0;
}

void read(char answer[]){
	for(int i = 0; i < 20; i++){
		cin >> answer[i];
	}
}

int score(char exam[], char student[]){
	int score=0;
	
	for(int i = 0; i < 20; i++){
		if(exam[i] == student[i]){
			score = score + 2;
		}
		else if(student[i] != 'x'){ 
			score = score -1;
		}
	}
	return score;
}		
