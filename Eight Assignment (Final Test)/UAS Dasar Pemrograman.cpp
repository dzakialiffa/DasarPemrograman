#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;
int main ()
{
                float angka, m, dam, km ;
                cout<<"PROGRAM KONVERSI SATUAN"<<endl;
                cout<<"  CENTIMETER KE METER, DAM, KM"<<endl;
                cout<<"======================="<<endl;
                cout<<"\nMasukan Berapa CM : ";
                cin>>angka;
                m = angka * 0.01;
                dam = angka * 0.001;
                km = angka * 0.000001;

                cout<<"\nMaka "<<angka<<" CM sama dengan "<<m<<" Meter";
                cout<<"\nMaka "<<angka<<" CM sama dengan "<<dam<<" Dekameter";
                cout<<"\nMaka "<<angka<<" CM sama dengan "<<km<<" Kilo Meter";
                getch ();
}
