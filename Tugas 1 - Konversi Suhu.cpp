#include <iostream>

using namespace std;

int main(){
	int ulang;
	float Celcius, Reamur, Farenheit;
	awal :
	cout<<"konversi suhu\n";
	cout<<"Masukkan suhu dalam celcius: ";
	cin>>Celcius;
	
	Reamur = (Celcius/5)*4;
	Farenheit = ((Celcius/5)*9)+32;
	cout<<"Reamur: "<<Reamur<<" Farenheit: "<<Farenheit<<endl;
	cout<<"Mengulang percobaan? (1 (ya) / 2 (tidak))";
	cin>>ulang;

	while(ulang == 1){
	goto awal;
}
	return 0;
}
