#include <iostream>

using namespace std;

int main(){
     int nilaiAR[10];

     cout<<"== Mengisi Nilai Array ==\n";
     for(int i=0; i<10;i++){
          cout<<"Isi indek ke ["<<i<<"] = ";
          cin>>nilaiAR[i];
     }

     for(int i=0; i<10;i++){
          cout<<"\nTampil nilai indek ke ["<<i<<"] = "<<nilaiAR[i];
     }

     return 0;
}
