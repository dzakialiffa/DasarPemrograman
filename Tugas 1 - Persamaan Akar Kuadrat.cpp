#include <iostream>
#include <math.h>

using namespace std;
int main(){
	int ulang, a, b, c, D;
	float x1, x2;
	awal :

	cout<<"Masukan nilai a: ";
	cin>>a;
	cout<<"Masukan nilai b: ";
	cin>>b;
	cout<<"Masukan nilai c: ";
	cin>>c;

	D = (b*b)-(4*a*c);

	if (D>0){
		x1 = ((-b + sqrt(D))/2*a);
		x2 = ((-b - sqrt(D))/2*a);
	}
	else if (D==0){
		x1 = -b / (2*a);
		x2 = x1;
	}
	else if (D<0){
		cout<<"/nAkar Imajiner"<<endl;
	}

	cout<<"X1 = "<<x1<<endl;
	cout<<"X2 = "<<x2<<endl;
	cout<<"Mengulang percobaan? (1 (ya) / 2 (tidak))";
	cin>> ulang;
	while(ulang == 1){
	goto awal;
}
	return 0;
}

