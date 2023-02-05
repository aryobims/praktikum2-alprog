#include <iostream>
using namespace std;

int main(){
	float jari, hasil ;
	const float p=3.14;
	
	cout << "masukkan jumlah jari-jari ="; cin >> jari;
	hasil = (jari * p) * 2;
	
	cout << "keliling dari lingkaran adalah " << hasil;
}