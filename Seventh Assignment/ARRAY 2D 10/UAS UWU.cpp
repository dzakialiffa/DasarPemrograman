#include <iostream> //Input output
#include <sstream> //Konversi variabel string ke integer
#include <iomanip> //Setw() untuk struk
#include <stdlib.h> //Setw() untuk struk

using namespace std;

int convertString(string angka){
    stringstream ss(angka);
    int x;
    ss >> x;
    return x;
}

string resizeDemo(string str) 
{ 
    str.resize(30, ' '); 
    return str;
} 

void namaToko(string toko){
	cout<<"________________________"<<endl;
	cout<<"\t\t\tMinimarket "<<toko<<endl;
	cout<<"________________________"<<endl;
}

void listBarang(){
	//Membersihkan display command line
	system("cls");

	//Deklarasi total item yang dijual
	string namaItem[100];
	int hargaItem[100], qtyItem[100], subtotal[100];
	int totalitem = 5, ci = 0, totalHarga = 0, jumlahProduk = 0, tambahProduk = 1, bayar;

	//Deklarasi item yang dijual
	string listItem[totalitem][2] = {
		{
			"Shampoo Pantene 500 ml",
			"15000",
		},
		{
			"Indomie Goreng",
			"3500",
		},
		{
			"Kit Motor Shampoo",
			"8000",
		},
		{
			"Es Krim Wall's Magnum",
			"15000",
		},
		{
			"Pasta Gigi Pepsodent",
			"5500",
		},						
	};

	while(tambahProduk != 0){
		awal :
		system("cls");
		namaToko("Dadang");
		for(int row = 0; row < totalitem; row++){
			cout<<"\t\t"<<row+1<<". "<<listItem[row][0]<<endl;
		}
		cout<<"________________________"<<endl;
		cout<<"\t\tMasukkan kode produk pelanggan\n\t\t[0 => checkout]: ";
		cin>>ci;
		ci -= 1;
		for (int loop = 0; loop < totalitem; loop++)
		{
			if(ci >= 0 && ci == loop){
				int temp_qty = 0;
				jumlahProduk += 1;
				//Mengambil detail item
				namaItem[loop] = listItem[ci][0];
				hargaItem[loop] = convertString(listItem[ci][1]);

				cout<<"\n\t\t"<<namaItem[loop]<<endl;
				cout<<"\t\t"<<hargaItem[loop]<<endl;
				cout<<"\t\tMasukkan jumlah item [qty]: ";
				cin>>temp_qty;
				qtyItem[loop] = temp_qty;

				//Menghitung subtotal pembelian
				subtotal[loop] = qtyItem[loop]*hargaItem[loop]; // Menjumlahkan Harga sub total barang
				totalHarga += subtotal[loop]; //Menjumlahkan seluruh sub total barang	
				goto awal;		
			}
		}
		if(ci == -1){
			cout<<"\n\n";
			awalstruk:
			namaToko("Dadang");
			for (int x=0; x<jumlahProduk; x++){
				string produk = namaItem[x];
				produk = resizeDemo(produk);
				cout<<qtyItem[x]<<"x "<<produk<<setw(25)<<"Rp."<<subtotal[x]<<",-"<<endl;
				cout<<setw(4)<<"@"<<hargaItem[x]<<"\n";
			}
			cout<<"________________________"<<endl;
			cout<<"  Sub-total: \t\t\t\t\t\tRp."<<totalHarga<<",-"<<endl;


			// Diskon
			int diskon = 0;
			if(totalHarga>=50000){
				cout<<"  Diskon:\t\t\t\t\t\t10%"<<endl;
				diskon = totalHarga*0.1;
			}
			else if(totalHarga>=100000){
				cout<<"  Diskon:\t\t\t\t\t\t15%"<<endl;
				diskon = totalHarga*0.15;
			}

			//total
			if(diskon > 0){
				totalHarga = totalHarga-diskon;
			}
			cout<<"  Total: \t\t\t\t\t\tRp."<<totalHarga<<",-"<<endl;
			

			//Bayar
			awalbayar:
			cout<<"  Nominal pembayaran:\t\t\t\t\tRp.";
			cin>>bayar;

			if(bayar<totalHarga){
				system("cls");
				cout<<"  Jumlah pembayaran kurang dari total pembelian!\n  Rp."<<totalHarga<<endl;
				goto awalbayar;
			}
			else if(bayar == totalHarga){
				cout<<"  Kembalian: \t\t\t\t\t\tRp.-"<<endl;
			}
			else{
				cout<<"  Kembalian: \t\t\t\t\t\tRp."<<-1*(totalHarga-bayar)<<endl;
			}
			cout<<"________________________"<<endl;
			tambahProduk = 0;
		}
		else {
			goto awal;
		}
	}
}

int main(){
	listBarang();
	return 0;
}
