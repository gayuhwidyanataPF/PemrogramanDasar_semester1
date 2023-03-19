#include <iostream>

using namespace std;

int main()
{
    //soal 1
    // statis
    /*float phi = 3.14;
    float r = 2.7;
    float t = 10;
    float hasil;
    hasil = phi * r * r * t;
    cout << hasil;*/

    // dinamis
    /*
    float phi = 3.14;
    float r,t,hasil;
    cout << "Masukan Jari Jari  = ";
    cin >> r;
    cout << "Masukan Tinggi     = ";
    cin >> t;
    cout << endl;
    hasil = phi * r * r * t;
    cout << "Jadi hasilnya adalah " << hasil << endl;*/

    // soal 2
    /*int x, total;
    cout << "Masukan Jumlah Harga: ";
    cin >> x;

    if(x > 500000 && x < 1000000){
        total = x - (x * 0.05);
        cout << "Selamat anda mendapatkan diskon 5%" << endl;
    }
    if(x >= 1000000){
        total = x - (x * 0.12);
        cout << "Selamat anda mendapatkan diskon 12%" << endl;
    }
    if(x < 100000){
        total = x + (x * 0.02);
        cout << "Anda dikenakan pajak sebesar 2%" << endl;
    }
    cout << endl;
    cout << "Totalnya adalah: " << total;*/

    // soal 3
    /*int i, j, x , y, matriks1[3][3],matriks2[3][3],hasil[3][3];
    cout << "Masukan jumlah baris : ";
    cin >> x;
    cout << "Masukan jumlah kolom : ";
    cin >> y;

    cout << "Masukkan elemen matrix pertama : \n";
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            cin >> matriks1[i][j];
        }
    }
    cout << "Masukkan elemen matrix kedua   : \n";
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            cin >> matriks2[i][j];
        }
    }
    cout << endl;
    cout << "Hasil Penjumlahan  : \n";
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Hasil Pengurangan  : \n";
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            hasil[i][j] = matriks1[i][j] - matriks2[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << "matriks 1    : \n";
    float sum = 0;
    float rata;
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            cout << matriks1[i][j] << "\t";
            sum = sum + matriks1[i][j];
            rata = sum / (x*y);
        }
        cout << endl;
    }
    cout << "Hasil Array A = " << sum << endl;
    cout << "Hasil rata rata array A = " << rata;

    float summ = 0;
    float rataa;
    cout << endl;
    cout << "matriks 2    : \n";
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            cout << matriks2[i][j] << "\t";
            summ = summ + matriks2[i][j];
            rataa = summ / (x*y);
        }
        cout << endl;
    }
    cout << "Hasil Array B = " << summ << endl;
    cout << "Hasil rata rata array B = " << rataa;*/

    // soal 4
    int x, i ,sum;
    sum = 0;
    cout << "Masukan Angka Faktorisasi: ";
    cin >> x;
    for(i = x; i > 0; i--){
        if(x % i == 0){
            cout << i << "\t";
            if(i % 2 == 0){
                cout << "genap" << endl;
                sum++;
            }
            if(i % 2 == 1){
                cout << "ganjil" << endl;
            }
        }
    }
    cout << endl;
    cout << "Jumlah Bilangan Genap adalah: " << sum;

    return 0;
}
