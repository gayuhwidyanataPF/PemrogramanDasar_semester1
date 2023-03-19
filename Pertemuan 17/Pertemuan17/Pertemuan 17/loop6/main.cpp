// Gayuh Widyanata || A11.2022.14636 || A11-4117

#include <iostream>

using namespace std;

int main()
{
    /*Buatlah Program seperti nomer 5, tentukan nilai maximal dan minimal dari data yang di masukan oleh user,
    sebagai simulasi,  data yang anda masukan adalah sebagai berikut :  12, 31, 4,  22, 34,  50, 129, 33, 45, 32, 50, -99.
    Data terakhir (-99) tidak di hitung, nama file : loop6.c*/

    int x, maks, minim;
    for(int i = 0;; i++){
    cout << "Masukan Angka = ";
    cin >> x;
    if(x > maks){
        maks = x;
    }
    if(x < minim && x != -99){
        minim = x;
    }
    if(x == -99){
        cout << endl;
        cout << "Nilai Maksimal     = " << maks << endl;
        cout << "Nilai Minimal      = " << minim << endl;
        break;
        }
    }
    return 0;
}
