#include <iostream>
using namespace std;

int nTelor, nMie, nAir, jumlah;
int hTelor = 2000, hMie = 2800, hAir = 3000;
string nama;

void input()
{
	cout << "Masukan Nama = ";
	cin >> nama;
	cout << "Masukan Jumlah Telor";
	cin >> nTelor;
	cout << "Masukan Jumlah Mie";
	cin >> nMie;
	cout << "Masukan Jumlah Air Mineral";
	cin >> nAir;
}

int hitungHarga() {
	return (nTelor * hTelor) + (nMie * hMie) + (nAir * hAir);
}

void display() {
	cout << "nama =" << nama << endl;
	cout << "jumlah Telor" << nTelor << endl;
	cout << "jumlah Mie = " << nMie << endl;
	cout << "Total harga Rp." << hitungHarga() << endl;

}
int main() {
	input;
	display;

}
