#include <iostream>

using namespace std;

int main(){
	
     int ARnilai[10];
     int tampung = 0;

     cout<<"=========================================";
     cout<<"\n= Menjumlahkan Array =\n";
    cout<<"\n= DZAKI MOCH FIKRI ALIFFA =\n";
     cout<<"=========================================\n";

     cout<<"\n== Isi Array ==\n";
     for(int i=0; i<10;i++){
          cout<<"Isi indek ke ["<<i<<"] = ";
          cin>>ARnilai[i];
     }

     for(int i=0; i<5;i++){
          tampung = tampung + ARnilai[i];
     }

     cout<<"\nHasil Penjumlahan semua elemen Array : "<<tampung;

     return 0;
}
