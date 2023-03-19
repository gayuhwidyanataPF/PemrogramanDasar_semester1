#include <iostream>

using namespace std;

int main()
{

    /*int x;
    cout << "Masukan Nilai : ";
    cin >> x;
    if(x % 2 == 0){
        cout << "Genap" << endl;
    }else if(x % 2 == 1){
        cout << "Ganjil" << endl;
    }
    switch(x){
        case 1:
            cout << "satu" << endl;
            break;
        case 2:
            cout << "dua" << endl;
            break;
        case 3:
            cout << "tiga" << endl;
            break;
        default:
            cout << "Undefined" << endl;
            break;
    }

    for (x = 0; x <= 10; x++){
        cout << x << "Saya Mengaku Terlambat" << endl;
    }

    int x;
    x = 5;
    while(x >= 0){
        cout << x << endl;
        x--;
    }

    int x;
    x = 0;
    while(x <= 5){
        cout << x << endl;
        x++;
    }

    int x;
    x = 0;
    do{
        if(x % 2 == 1)
        cout << x << endl;
        x+=3;
    }while(x <= 40);*/
//=================================================================================
    // Tugas mencari Kelipatan 5
    int x;
    x = 0;
    do{
        if(x % 5 == 0)
        cout << x << endl;
        x++;
    }while(x <= 40);
    return 0;
}
