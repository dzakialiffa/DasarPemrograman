#include<iostream>
using namespace std;

const int baris=10;
const int kolom=10;

void matriks(int data[][kolom],int &bariss,int &kolomm);
          
int main()
{
           int jbaris, jkolom ;


           int data[baris][kolom];
           matriks(data,jbaris,jkolom);

           for(int i=0;i<jbaris;i++)
           {
                      for(int j=0;j<jkolom;j++)
                      {
                                 cout<<data[i][j]<<" ";
                      }cout<<endl;
           }
 
}

void matriks(int data[][kolom],int &bariss, int &kolomm)
{
           cout<<"Masukan baris : ";cin>>bariss;
           cout<<"Masukan kolom : ";cin>>kolomm;

           for(int i=0;i<bariss;i++)
           {
                      for(int j=0;j<kolomm;j++){
                                cout<<"Elemen "<<i<<", "<<j <<" = ";cin>>data[i][j];
                      }
           }
}

