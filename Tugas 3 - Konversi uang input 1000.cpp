#include <iostream>
using namespace std;

int main (){
	float input, a,b,c,d,e,f;
	cout<<"Program Konversi Uang"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"Masukan Input: ";
	cin>>input;
	a=input*1;
	b=input*5;
	c=input*10;
	d=input*20;
	e=input*50;
	f=input*100;
	cout<<"Konversi satu\t: "<<a<<endl;
	cout<<"Konversi dua\t: "<<b<<endl;
	cout<<"Konversi tiga\t: "<<c<<endl;
	cout<<"Konversi empat\t: "<<d<<endl;
	cout<<"Konversi lima\t: "<<e<<endl;
	cout<<"Konversi enam\t: "<<f<<endl;
	return 0;
}
