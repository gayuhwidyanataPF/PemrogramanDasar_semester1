#include <iostream>

using namespace std;

int main()
{
    // studi kasus 1 menampilkan array menggunakan loop
    //int x;
    //int y[10];
    //int z[4] = {3,4,5,6};
    /*
    for(int i = 0; i < 4; i++){
        cout << z[i] << endl;
    }

    for(int i = 0; i < 10; i++){
        cout << y[i];
    }*/

    // studi kasus 2 mencari bilangan genapa pada array
    /*int z[6] = {3,4,5,6,7,8};
    for(int i = 0; i < 6; i++){
        if(z[i] % 2 == 0){
            cout << z[i] << endl;
        }
    }
    int i = 0;
    while(i < 6){
        if(z[i] % 2 == 0){
            cout << z[i] << endl;
        }
        i++;
    }*/
    // studi kasus 3 membuat array dimana ketika input keluar dengan urut sesuai input array
    // secara urut
    /*int a;
    cout << "Masukan angka: ";
    cin >> a;
    int z[a];
    for(int i = 1; i <= a; i++){
        z[i] = i;
        cout << z[i] << endl;
    }*/

    // studi kasus 3 secara terbalik
    /*int a;
    cout << "Masukan angka: ";
    cin >> a;
    int z[a];
    for(int i = a; 1 <= i; i--){
        z[i] = i;
        cout << z[i] << endl;
    }*/

    // studi kasus 4 membuat program dinamis array dengan mencari jumlah dan rata rata
    /*int a;
    float sum, rata;
    cout << "Masukan Angka: ";
    cin >> a;

    sum = 0;
    int z[a];
    for(int i = 0; i < a; i++){
        cin >> z[i];
        sum = sum + z[i];
    }
    rata = sum / a;

    cout << "\n jumlah = " << sum;
    cout << "\n rata-rata =  " << rata;*/


}
