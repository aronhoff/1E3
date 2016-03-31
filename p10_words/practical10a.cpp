#include <iostream>
using namespace std;
int readToSentinel(string term[], int length);
void count(const string term[], int counter[], int length, const string words[], int length_word);
int maxpos(const int counter[], int length);

int main(){
	string words[1000];
	string terms[20];
	int counter[20];
	
	int length_words = readToSentinel(words, 1000);
	int length = readToSentinel(terms, 20);
	
	count(terms, counter, length, words, length_words);
	for(int i = 0; i < length; i++){
		cout << terms[i] << " ";
		cout << counter[i] << endl;
	}
	int max = maxpos(counter, length);
	cout << "The most common is " << terms[max] << " occuring " << counter[max] << " times." << endl;
	
	return 0;
}


int readToSentinel(string term[], int length){
	int i;
	string s;
	cin >> s;
	for(i = 0; i < length && s != "XXX"; i++){
		term[i]=s;
		cin >> s;
	} 
	return i;
}

void count(const string term[], int counter[], int length, const string words[], int length_word){
	for(int i = 0; i < length; i++){
		counter[i]=0;
		for(int j = 0; j < length_word; j++){
			if(term[i] == words[j]){
				counter[i]++;
			}
		}
	}
}
	
int maxpos(const int counter[], int length){
	int max = 0;
	
	for(int i = 1; i < length; i++){
		if(counter[i] > counter[max]){
			max = i;
		}
	}
	return max;
}

