#include <iostream>
using namespace std;
int readToSentinel(string term[], int length);
void count(const string term[], int counter[], int length, const string words[], int length_word);
int maxpos(const int counter[], int length);
int extractAllTerms(string term[], int length, string words[], int length_word, bool &exceeded);
bool search(string term[], int length, string word);

int main(){
	string words[1000];
	string terms[500];
	int counter[500];
	bool exceeded = false; 
	
	int length_words = readToSentinel(words, 1000);
	int length = extractAllTerms(terms, 500, words, 1000, exceeded);
	if(exceeded){
		cout << "Too many terms. " << endl;
		return 0;
	}
		
	count(terms, counter, length, words, length_words);
	for(int i = 0; i < length; i++){
		if(counter[i] > 5){
			cout << terms[i] << " ";
			cout << counter[i] << endl;
		}
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

bool search(string term[], int length, string word){
	for(int i = 0; i < length; i++){
		if(term[i] == word){
			return true;
		}
	}
	return false;
}

int extractAllTerms(string term[], int length, string words[], int length_word, bool &exceeded){
	int counter = 0;
	for(int i = 0; i < length_word; i++){
		if(!search(term, length, words[i])){
			if(counter == length){
				exceeded = true;
				break;
			}
			term[counter] = words[i];
			counter++;
		}
	}
	return counter;
}
			