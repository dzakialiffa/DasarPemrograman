#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int ulang;
	float a, b, c;
	kembali :
	cout<<"Mencari sisi miring segitiga\n";
	cout<<"Masukkan a & b:\n";
	cin>>a>>b;
	c = sqrt(((a*a)+(b*b)));
	cout<<"Sisi miring (c) adalah : "<<c<<endl;
	cout<<"Mengulang percobaan? (1 (Iya) / 2 (Tidak))";
	cin>>ulang;

	while(ulang == 1){
	goto kembali;
}
	return 0;
	
}
