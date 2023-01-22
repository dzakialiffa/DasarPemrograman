#include <conio.h>
#include <iostream>

using namespace std;
main(){
        int x,y,z,temp;
   
        cout<<"Mempertukarkan Tripel Bilangan Bulat (x,y,z) menjadi (y,z,x) "<<endl;
        cout<<"Input x : ";cin>>x;
        cout<<"Input y : ";cin>>y;
        cout<<"Input z : ";cin>>z;
       
        cout<<"Tripel Bilangan Bulat Asal ("<<x<<","<<y<<","<<z<<")"<<endl;
   
        temp = x;
        x = y;
        y = z;
        z = temp;
   
        cout<<"Tripel Bilangan Bulat Menjadi ("<<x<<","<<y<<","<<z<<")"<<endl;
   
    getch();
}
