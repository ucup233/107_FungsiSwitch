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

int pembagian(int bil_1, int bil_2) {
	return bil_1 / bil_2;
}

int main() {
	int pilihan;

	do {
		system("cls");
		cout << "=========== Menu ===========" << endl;
		cout << "1. Penjumlahan" << endl;
		cout << "2. Pengurangan" << endl;
		cout << "3. Perkalian" << endl;
		cout << "4. Pembagian" << endl;
		cout << "5. Keluar" << endl;
		cout << "Masukkan menu yang ingin di pilih (1/2/3/4/5) : ";
		cin >> pilihan;
	}
}
