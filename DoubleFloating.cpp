#include <iostream>
using namespace std;

int main(){
	double jari, hasil ;
	const double p=3.1428;
	
	cout << "Masukkan Jumlah jari-jari = "; cin >> jari;
	hasil = jari*(jari * p);
	cout << "Luas lingkaran: " << hasil;
}