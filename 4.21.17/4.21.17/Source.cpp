#include <iostream>
#include <ctime>
using namespace std;

void cc();

int main() {
	srand(time(NULL));
	while (true) {
		cc();

	}

}

void cc() {
	int rn = rand() % 3 + 1;
	cout << rn << endl;
	if (rn == 1)
		system("color 10");

	else if (rn == 3)
		system("color 30");

	else if (rn == 2)
		system("color 50");

}