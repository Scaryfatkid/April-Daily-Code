#include <iostream>
using namespace std;

int main() {

	char input;
	bool win;
	int guesscount = 7;
	bool guessed = false;
	char word[6] = { 'h','a','l','o', };
	char blank[6] = { '_',' _',' _','_' };

	do {

		cout << endl;
		cout << endl;
		cout << "guess a letter" << endl;
		cin >> input;

		for (int i = 0; i < 4; i++) {
			if (word[i] == input) {
				blank[i] = input;
				cout << "You guess:" << input << endl;
				cout << "Correct" << endl;
				cout << "New Word: ";
				for (int i = 0; i < 4; i++) {
					cout << blank[i];
				}
				guessed = true;
				break;
			}//end if
		}//end for

		if (guessed == false) {
			guesscount = guesscount--;
			cout << "Wrong! You have: " << guesscount << " guess(es) remaining." << endl;
		}
	} while (guesscount > 0);
	if (guesscount == 0) {
		cout << "Game Over!" << endl;







	}
}