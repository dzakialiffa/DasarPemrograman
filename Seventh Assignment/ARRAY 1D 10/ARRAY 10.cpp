#include <iostream>

using namespace std;

int main(){
	
     int ARnilai[10];
     int nilaidicari;
     string status = "tidak ketemu";

     cout<<"==============================";
     cout<<"\n== Mencari nilai pada array ==\n";
     cout<<"==============================\n";
     
     cout<<"\n== Isi Array ==\n";
     for(int i=0; i<10;i++){
          cout<<"Isi indek ke ["<<i<<"] = ";
          cin>>ARnilai[i];
     }

     cout<<"\nMasukkan nilai yang dicari = ";cin>>nilaidicari;

     for(int i=0; i<10;i++){
          if(ARnilai[i]==nilaidicari){
               cout<<"\nNilai yang dicari ("<<nilaidicari<<") ditemukan di indek ke ["<<i<<"]\n";
               status = "ketemu";
               break;
          }
     }

     if (status == "tidak ketemu"){
          cout<<"\nNilai yang dicari ("<<nilaidicari<<") tidak ditemukan\n";
     }

     return 0;
}
