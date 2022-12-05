#include <iostream>

using namespace std;

int main() {
	float a, b, hasil;
	char aritmatika;

	cout << "Selamat Datang di kalkulator terbaik \n\n";

	cout << "Masukkan angka pertama : ";
	cin >> a;
	cout << "Pilih operator yang ingin digunakan: (+,-,/,*) : ";
	cin >> aritmatika;
	cout << "Masukkan angka kedua : ";
	cin >> b;

	cout << "\nHasil perhitungan : ";
	cout << a << aritmatika << b;

	if (aritmatika == '+'){
		hasil = a + b;
	}
	else if (aritmatika == '-'){
		hasil = a - b;
	}
	else if (aritmatika == '/'){
		hasil = a / b;
	}
	else if (aritmatika == '*'){
		hasil = a * b;
	}
	else {
		cout << "Operator" << aritmatika << "tidak ditemukan" << endl;
	}

	cout << " = " << hasil << endl;


	cin.get();
	return 0;
}