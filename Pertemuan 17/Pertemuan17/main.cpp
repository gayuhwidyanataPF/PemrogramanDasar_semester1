// Gayuh Widyanata || A11.2022.14636 || A11-4117

#include <iostream>

using namespace std;

int main()
{
    /*Buatlah Program untuk mencetak angka integer dari 100 hingga 1 dan sebaliknya menggunakan
    satu loop for multi expression di dalamnya, nama file : loop1.c*/
    /*int j = 100;
    for(int i = 1; i <= 100; i++){
        cout << "angka i = " << i << " dan " << "angka j = " << j << endl;
        j--;
    }*/

    /*Buatlah Program untuk mencetak angka integer dari 100 hingga 1, tetapi yang genap
    saja dengan menggunakan statement continue, nama file : loop2.c*/
    /*for(int i = 100; i > 0; i--){
        if(i % 2 == 1){
            continue;
        }
        cout << i << endl;
    }*/

    /*Buatlah Program untuk mencetak angka integer dari 100 hingga 1 menggunakan loop for,
    dan akan berhenti (break) bila mencapai angka 55, nama file : loop3.c*/
    /*for(int i = 100; i > 0; i--){
        if(i == 54){
            break;
        }
        cout << i << endl;
    }*/

    /*Buatlah Program untuk mencetak rata-rata angka integer dari
    1 hingga 20 menggunakan loop for, nama file : loop4.c*/
    /*int sum, rata;
    sum = 0;
    for(int i = 1; i <= 20; i++){
        sum = sum + i;
        rata = sum / i;
        cout << i << endl;
    }
    cout << "\n";
    cout << "jumlah     = " << sum << endl;
    cout << "rata-rata  = " << rata << endl;*/

    /*Buatlah Program untuk membaca suatu inputan nilai integer dan selama data yang di inputkan bukan -99,
    maka program akan terus meminta user untuk melakukan inputan , nama file : loop5.c*/
    /*int x;
    for(int i = 0;; i++){
        cout << "Masukan Angka anda = ";
        cin >> x;
        if(x == -99){
            cout << "\n";
            cout << "Keluar Karena break" << endl;
            break;
        }
    }*/

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
