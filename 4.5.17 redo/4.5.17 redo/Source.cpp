#include<iostream>
#include<windows.h>
void showmenu();
void showtitlegivinyear();
void showagegivinindex();
using namespace std;

int main() {
	char input = 'a';

	while (input != 'q') {
		cout << "h-help, q-quit, y-enter year, i- enter index 1-14" << endl;
		cin >> input;
		if (input == 'h') {
			showmenu();
		}
		if (input == 'y') {
			showtitlegivinyear();
		}
		
		if (input == 'i') {
			showagegivinindex();
		}
			
		}//while loop


	
}//main
void showmenu() {
	cout << "h-help, q-quit, y-enter year, i- enter index 1-14" << endl;
}
	void showtitlegivinyear(){
		
	}
	void showagegivinindex(){
		cout << "index" << endl;
	}