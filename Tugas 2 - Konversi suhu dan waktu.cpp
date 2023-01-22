#include <iostream>
#include <cstdlib>
using namespace std;
string ulang;
void menu();
void header(){
	cout<<"\t\tDasar Pemrograman\t"<<endl;
	cout<<"\t\tNama:\tDzaki Moch Fikri Aliffa\t\t"<<endl;
	cout<<"\t\tNIM:\t1207050031"<<endl;
	cout<<"\t\tKelas:\tIF B\t\t"<<endl;
}
void tempConversion(){
	awal_tempConv:
	float c, r, f;
	system("cls");
	header();
	cout<<"\t|\t2. Konversi Suhu\t|"<<endl;
	cout<<"\t|===============================|"<<endl;
	cout<<"\n\tMasukkan suhu dalam Celcius: ";
	cin>>c;
	r = (c/5)*4;
	f = ((c/5)*9)+32;
	cout<<"\n\t================================="<<endl;
	cout<<"\t    Suhu dalam Reamur\t: "<<r<<"\370R"<<endl;
	cout<<"\t    Suhu dalam Farenheit: "<<f<<"\370F"<<endl;
	cout<<"\t================================="<<endl;
	cout<<"\n\tAnda ingin mengulang operasi berikut?\n\t[Y/N]: ";
	cin>>ulang;
	if(ulang == "Y" || ulang == "y"){
		goto awal_tempConv;
	}
	else{
		menu();
	}
}
void massEquivalent(){
	awal_ekuivmassa:
	float e = 0, m=0, c=0;
	system("cls");
	header();
	cout<<"\t|\t1. Ekuivalensi massa\t|"<<endl;
	cout<<"\t|===============================|"<<endl;
	cout<<"\n\tMasukkan besar massa benda\n\t(m) : ";
	cin>>m;
	cout<<"\tMasukkan besar kecepetan cahaya\n\t(c) : ";
	cin>>c;
	e = m*(c*c);
	cout<<"\n\t================================="<<endl;
	cout<<"\tEnergi (e) besarnya : "<<e<<" Joule"<<endl;
	cout<<"\t================================="<<endl;
	cout<<"\n\tAnda ingin mengulang operasi berikut?\n\t[Y/N]: ";
	cin>>ulang;
	if(ulang == "Y" || ulang == "y"){
		goto awal_ekuivmassa;
	}
	else{
		menu();
	}
}
void timeConversion(){
	awal_timeConv:
	int detik_awal = 0, sisa_proses_detik = 0, menit = 0, jam = 0;
	system("cls");
	header();
	cout<<"\t|\t3. Konversi Waktu\t|"<<endl;
	cout<<"\t|===============================|"<<endl;
	cout<<"\n\tMasukkan waktu dalam satuan detik\n\t(s): ";
	cin>>detik_awal;
	sisa_proses_detik = detik_awal;
	if(detik_awal >= 60 && detik_awal < 3600){
		menit = detik_awal/60;
		sisa_proses_detik = detik_awal%60;
	}
	else if(detik_awal >= 3600){
		jam = detik_awal/3600;
		menit = (detik_awal%3600)/60;
		sisa_proses_detik = (detik_awal%3600)%60;
	}
	cout<<"\n\t====================================\n\t";
	if(jam > 0){
		cout<<" "<<jam<<" jam";
	}
	if(menit > 0){
		cout<<" "<<menit<<" menit";
	}
	if(sisa_proses_detik > 0){
		cout<<" "<<sisa_proses_detik<<" detik";
	}
	cout<<"\n\tMau ulangi?\n\t[Y/N]: ";
	cin>>ulang;
	if(ulang == "Y" || ulang == "y"){
		goto awal_timeConv;
	}
	else{
		menu();
	}
}
void done(){
	system("cls");
	cout<<"\t|\t  Sudah Selesai\t"<<endl;
}
void menu(){
	awal_menu:
	system("cls");
	int menu;
	header();
	cout<<"\t\t1. Ekuivalensi massa"<<endl;
	cout<<"\t\t2. Konversi Suhu"<<endl;
	cout<<"\t\t3. Konversi Waktu"<<endl;
	cout<<"\t\t4. Exit"<<endl;
	cout<<"\n\t\tMau pilih yang mana? [1-4]: ";
	cin>>menu;
	switch(menu){
		case 1:
			massEquivalent();
			break;
		case 2:
			tempConversion();
			break;
		case 3:
			timeConversion();
			break;
		case 4:
			done();
			break;
		default:
			goto awal_menu;
			break;
	}
}
int main(){
	menu();
}

