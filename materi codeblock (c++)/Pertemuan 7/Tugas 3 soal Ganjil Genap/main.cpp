#include <iostream>

using namespace std;

int main()
{
    // Tugas 3 Soal Gayuh Widyanata
    int a;
    cout << "\nMasukan Angka: ";
    cin >> a;

    // kondisi pertama
    /*if(25 < a && a< 50 && a % 2 == 0){
        cout << "Bilangan sesuai" << endl;
    }
    else{
        cout << "Bilangan tidak sesuai" << endl;
    }*/

    //kondisi kedua
    /*if(a % 2 == 1 && (13 < a || 5 > a)){
        cout << "Bilangan Sesuai" << endl;
    }
    else{
        cout << "Bilangan tidak sesuai" << endl;
    }*/

    //kondisi ketiga
    if(a % 2 == 0 && (25 < a || a < 50)){
        cout << "Bilangan ini sesuai" << endl;
    }
    if(a % 2 == 1 && (3 < a || a < 15)){
        cout << "Bilangan ini sesuai" << endl;
    }
    return 0;
}
