#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;



int main()
{

    string paket;
    string makanan;
    string minuman;
    int hargaPaket;
    int hargaMinuman;
    int hargaMakanan;
    int jumlah;
    int bayar;
    int kembalian;
  


    paketWarnet:
    code:
    cout <<"\t\t===================================================\n";
	cout <<"\t\t||-----------------------------------------------||\n";
	cout <<"\t\t||      SELAMAT DATANG DI WARNET SUKA MAJU       ||\n";
	cout <<"\t\t=================================================\n";
	cout <<endl;
    cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<"\t\t         LIST PAKET HARGA WARNET SUKA MAJU"<<endl;
    cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl<<endl;
    cout<<"\t\t  CODE     NAMA           HARGA    KETERANGAN"<<endl;
    cout<<"\t\t  PM       Paket Malam    10000    JAM 9 Malam - 6 Pagi"<<endl;
    cout<<"\t\t  PP       Paket Pagi     7000     JAM 7 Pagi - 10 Pagi "<<endl;
    cout<<"\t\t  PS       Paket Siang    8000     JAM 1 Siang - 6 Sore "<<endl;
    
	cout<<"\t\t Pilih paket : ";
	cin>>paket;
	
	//untuk memilih paket dan harganya
	if(paket == "PM" || paket == "pm"){
		hargaPaket = 10000;
	} else if(paket == "PP" || paket == "pp") {
		hargaPaket = 7000; 
	}
	else if(paket == "PG" || paket == "pg") {
		hargaPaket = 8000; 
	} else {
		cout<<"\t\t tidak ada paket"<<endl;
		goto paketWarnet;
	}
	
	paketMakanan:
	cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<"\t\t         LIST TAMBAHAN MAKANAN"<<endl;
    cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl<<endl;
    cout<<"\t\t  CODE     NAMA           HARGA"<<endl;
    cout<<"\t\t  MK       Mie Kuah       5000"<<endl;
    cout<<"\t\t  MG       Mie Goreng     6000"<<endl;
	cout<<"\t\t Pilih makanan (kalau tidak ada bisa tulis - ) : ";
	cin>>makanan;
	
	if(makanan == "MK" || makanan == "mk"){
	 	hargaMakanan = 5000;
	} else if(makanan == "MG" || makanan == "mg") {
		hargaMakanan = 6000; 
	} else {
		hargaMakanan =  0; 
	}

	
	paketMinuman:
	cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    cout<<"\t\t         LIST TAMBAHAN MINUMAN"<<endl;
    cout<<"\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl<<endl;
    cout<<"\t\t  CODE     NAMA           HARGA"<<endl;
    cout<<"\t\t  AM       Air Mineral    3000"<<endl;
    cout<<"\t\t  KP       Kopi           5000"<<endl;
	cout<<"\t\t Pilih minuman (kalau tidak ada bisa tulis - ) : ";
	cin>>minuman;
	
	if(minuman == "AM" || minuman == "am"){
		hargaMinuman = 3000;
	} else if(minuman == "KP" || minuman == "kp") {
		hargaMinuman = 5000; 
	}else {
		hargaMinuman = 0; 
	}
	
	jumlah = hargaPaket + hargaMakanan + hargaMinuman;
	
	cout<<"\t\t Total Yang Harus Dibayar Yaitu " << jumlah <<endl;
	bayar:
	cout<<"\t\t bayar : ";
	cin>>bayar;
	
	
   if(bayar >= jumlah ){
   		cout<<"\t\t Kembalian anda " << bayar - jumlah <<endl;
   } else {
   		cout<<"\t\t uang anda kurang"<<endl;
   		goto bayar;
   }
   
	
	getch();
    return 0;
}