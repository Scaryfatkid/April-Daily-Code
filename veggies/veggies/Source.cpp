#include <iostream>
using namespace std;
int beans, carrots, lettuce, peas, squash;
void BG(), CG(), LG(), PG(), SG(), AG();

int main() {
	cout << "How many beans do you have" << endl;
	cin >> beans;
	cout << "How many carrots do you have" << endl;
	cin >> carrots;
	cout << "How much lettuce do you have" << endl;
	cin >> lettuce;
	cout << "How many peas do you have" << endl;
	cin >> peas;
	cout << "How much squash do you have" << endl;
	cin >> squash;
	AG();



}
void AG() {
	//cout << "running function AG" << endl;
	BG();
	CG();
	LG();
	PG();
	SG();
}

void BG() {
	//cout << "running function BG" << endl;
	for (int i = 0; i < beans; i++)
		cout << "B";
	cout << endl;

}

void CG() {
	for (int i = 0; i < carrots; i++)
		cout << "C";
	cout << endl;

}
void LG() {
	for (int i = 0; i < lettuce; i++)
		cout << "L";
	cout << endl;
}

void PG() {
	for (int i = 0; i < peas; i++)
		cout << "P";
	cout << endl;
}

void SG() {
	for (int i = 0; i < squash; i++)
		cout << "S";
	cout << endl;
}