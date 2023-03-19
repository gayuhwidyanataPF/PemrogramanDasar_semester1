#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main ()

{

char kode_kota,kelas,kembali;

int harga_tiket,PPN,jum_bayar;

do

{

printf("\n__________________ HARGA TIKET PESAWAT ___________________\n");

cout<<"\n==========================================================\n";

cout<<"Tujuan Anda Kelas Kelas Kelas \n\n";

cout<<" - Ekonomi(E)\n - Bisnis(B) \n - Eksekutif(X)\n";

cout<<"==========================================================\n";

cout<<" 1. Bangkok $35 $50 $70 \n";

cout<<" 2. Hongkong $45 $60 $80 \n";

cout<<"==========================================================\n";

printf("\n___________________ Pilih Kota Tujuan ____________________\n");

cout<<"\nMasukan Kode Kota [1-2] : ";

cin>>kode_kota;

switch(kode_kota)

{

case '1':

{

cout<<"Kota Tujuan Anda : BANGKOK\n"<<endl;

printf("___________________ Pilih Kelas Pesawat ___________________");

cout<<"\nMasukan Kode Kelas Pesawat [E/B/X] : ";

cin>>kelas;

cout<<endl;

if (kelas=='E' || kelas=='e')

{

harga_tiket=35*13000;

PPN=0;

jum_bayar=harga_tiket+PPN;

cout<<"Harga Tiket = Rp."<<harga_tiket<<endl;

cout<<"PPN = Rp."<<PPN<<endl;

cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;

}

else if (kelas=='B' || kelas=='b')

{

harga_tiket=50*13000;

PPN=0.05*harga_tiket;

jum_bayar=harga_tiket+PPN;

cout<<"Harga Tiket = Rp."<<harga_tiket<<endl;

cout<<"PPN = Rp."<<PPN<<endl;

cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;

}

else if (kelas=='X' || kelas=='x')

{

harga_tiket=70*13000;

PPN=0.1*harga_tiket;

jum_bayar=harga_tiket+PPN;

cout<<"Harga Tiket = Rp."<<harga_tiket<<endl;

cout<<"PPN = Rp."<<PPN<<endl;

cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;

}

break;

}

case '2':

{

cout<<"Kota Tujuan Anda : HONGKONG\n"<<endl;

printf("___________________ Pilih Kelas Pesawat ___________________");

cout<<"\nMasukan Kode Kelas Pesawat [E/B/X] : ";

cin>>kelas;

cout<<endl;

if (kelas=='E' || kelas=='e')

{

harga_tiket=45*13000;

PPN=0;

jum_bayar=harga_tiket+PPN;

cout<<"Harga Tiket = Rp."<<harga_tiket<<endl;

cout<<"PPN = Rp."<<PPN<<endl;

cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;

}

else if (kelas=='B' || kelas=='b')

{

harga_tiket=60*13000;

PPN=0.05*harga_tiket;

jum_bayar=harga_tiket+PPN;

cout<<"Harga Tiket = Rp."<<harga_tiket<<endl;

cout<<"PPN = Rp."<<PPN<<endl;

cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;

}

else if (kelas=='X' || kelas=='x')

{

harga_tiket=80*13000;

PPN=0.1*harga_tiket;

jum_bayar=harga_tiket+PPN;

cout<<"Harga Tiket = Rp."<<harga_tiket<<endl;

cout<<"PPN = Rp."<<PPN<<endl;

cout<<"Jumlah Bayar = Rp."<<jum_bayar<<endl;

}

break;

}

default:

cout<<"Anda Salah Memasukan Kode"<<endl;

}

printf("\nAnda Ingin Memesan Kembali [Y/T] : ");

cin>>kembali;

}

while(kembali=='Y' || kembali=='y');

getch();

}
