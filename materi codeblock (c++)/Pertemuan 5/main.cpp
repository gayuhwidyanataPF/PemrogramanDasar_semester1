#include <iostream>

using namespace std;

int main()
{
    // Tugas Pertemuan 5 membuat luas lingkaran
    // Made by Gayuh Widyanata
    // Nim A11.2022.14636
    float phi=3.14, Ll;
    int r, s, Lp, p, l, Lpp, a, t, Ls;
    char pilih, ulang;
    do{
        cout << "\nProgram Menghitung Luas Bangun Datar" << endl;
        cout << "====================================" << endl;
        cout << "1. Luas Lingkaran" << endl;
        cout << "2. Luas Persegi" << endl;
        cout << "3. Luas Persegi Panjang" << endl;
        cout << "4. Luas Segitiga \n" << endl;
        cout << "Pilih Hitung Luas (1,2,3,4): ";
        cin >> pilih;
        cout << "====================================" << endl;
        switch(pilih){
        case '1':
            cout << "\n---------- Menghitung luas lingkaran ---------- \n";
            cout << "Masukan jari jari          : ";
            cin >> r;
            Ll = phi * r * r;
            cout << "Jumlah luasnya adalah      : " << Ll;
            cout << "\n------------------------------------------------ \n";
            break;

        case '2':
            cout << "\n---------- Menghitung luas Persegi ---------- \n";
            cout << "Masukan sisi               : ";
            cin >> s;
            Lp = s * s;
            cout << "Jumlah luasnya adalah      : " << Lp;
            cout << "\n--------------------------------------------- \n";
            break;

        case '3':
            cout << "\n---------- Menghitung luas Persegi Panjang ---------- \n";
            cout << "Masukan Panjang            : ";
            cin >> p;
            cout << "Masukan Lebar              : ";
            cin >> l;
            Lpp = p * l;
            cout << "Jumlah luasnya adalah      : " << Lpp;
            cout << "\n----------------------------------------------------- \n";
            break;

        case '4':
            cout << "\n---------- Menghitung luas Segitiga ---------- \n";
            cout << "Masukan Alas               : ";
            cin >> a;
            cout << "Masukan Tinggi             : ";
            cin >> t;
            Ls = a * t / 2;
            cout << "Jumlah luasnya adalah      : " << Ls;
            cout << "\n---------------------------------------------- \n";
            break;
        default :
            cout << "Pilihan anda tidak ada dalam sistem";
        }
        cout << "\n\n Kembali ke menu utama? (Y/N)";
        cin >> ulang;
    }
    while(ulang=='Y'|| ulang=='y');

    return 0;
}
