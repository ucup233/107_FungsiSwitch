#include <iostream>
using namespace std;

int a, b;

void input() {
	cout << "Bilangan pertama = ";
	cin >> a;

	cout << "Bilangan kedua =";
	cin >> b;
}

int penjumlahan(int bil_1, int bil_2) {
	return bil_1 + bil_2;
}

int pengurangan(int bil_1, int bil_2) {
	return bil_1 - bil_2;
}

int perkalian(int bil_1, int bil_2) {
	return bil_1 * bil_2;
}
