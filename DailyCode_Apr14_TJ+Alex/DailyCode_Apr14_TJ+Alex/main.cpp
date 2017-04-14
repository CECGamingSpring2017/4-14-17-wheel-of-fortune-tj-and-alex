#include <iostream>
#include<stdio.h>
#include <ctype.h>
using namespace std;

int main() {

	int tries = 7;
	char letter;
	bool guessed = false;

	char word[14] = { 'd','i','s','c','o','m','b','o','b','u','l','a','t','e' };
	char correct[14] = { '_','_','_','_','_','_','_','_','_','_','_','_','_','_' };
	cout << "Welcome to our game of Hangman!  You have 7 wrong guesses." << endl; 
	for (int i =  0; i < 14; i ++){
			cout << " " << correct[i] << " ";
			}
	while (true) {
		guessed = false;
		cout << "guess a letter!" << endl;
		cin >> letter;
		for (int j = 0; j < 14; j++) {
			if (word[j] == letter) {
				correct[j] = letter;
				cout << "That letter is in the word." << endl;
				guessed = true;
				break;
			}
		}
			if (guessed == false){
				cout << "Sorry, That letter (" << letter << ") is not in the word." << endl;
				tries--;
			}

			cout << "This is your word so far." << endl;
			for (int i = 14; i < 14; i++)
				cout << correct[i];
			cout << "You still have " << tries << " tries left." << endl;
			
			if (tries == 0) {
				cout << "You ran out of tries." << endl;
				return 0;
			}
		}


	}


