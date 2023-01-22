#include <iostream>
#include <math.h>
using namespace std;

float dabs(float x){
	return abs(x);
}

float ddouble(float x){
	return x*2;
}

bool odd(int x){
	return x%2 != 0;
}

main () {
	float a;
	cout << "Masukkan bilangan : ";cin >> a;
	cout << "Nilai Absolut dari bilangan : " << dabs(a);
	cout << "\n" << endl;
	cout << "Masukkan bilangan : ";cin >> a;
	cout << "Nilai bilangan x 2 : " << ddouble(a);
	cout << "\n" << endl;
	cout << "Masukkan bilangan : ";cin >> a;
	cout << "Bilangan adalah Ganjil ? " << boolalpha << odd(a);
}
