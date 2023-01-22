#include <iostream>

using namespace std;
int main(){
	int a, ulang;
	awal :
	cout<<"Menentukan angka ganjil genap\n";
	cout<<"Masukkan angka: ";
	cin>>a;
	if(a%2 == 0){
		cout<<"Angka tersebut adalah bilangan genap"<<endl;
	}
	else{
		cout<<"Angka tersebut adalah ganjil"<<endl;
	}
	cout<<"Mengulang percobaan? (1 (ya) / 2 (tidak))";
	cin>>ulang;

	while(ulang == 1){
	goto awal;
}
	return 0;
}
