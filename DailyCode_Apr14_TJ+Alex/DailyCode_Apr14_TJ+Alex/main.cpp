#include<iostream>
using namespace std;

int main() {
	char blank[8] = { '_','_','_','_','_','_','_','_'};
	char word[8] = { 'c','r','e','a','t','i','o','n'};
	char input;
	bool guessed = false;
	int guessCount = 7;

	while (true) {
		guessed = false;
		cout << "enter letter" << endl;
		cin >> input;
		for (int i = 0; i < 8; i++) {
			if (word[i] == input) {
				blank[i] = input;
				cout << "you guessed a letter!" << endl;
				guessed = true;
				break;
			}

		}//end for
		if (guessed == false) {
			cout << "sorry, " << input << " is not in the word." << endl;
			guessCount--;
		}

		cout << "here's your word so far" << endl << endl;
		for (int i = 0; i < 8; i++) {
			cout << blank[i];
		}
		cout << endl << endl;
		cout << "you have " << guessCount << " guesses left." << endl;
		if (blank == word)
			cout << "You win!" << endl;


	}//end while





}//end main