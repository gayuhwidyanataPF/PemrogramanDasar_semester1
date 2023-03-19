#include <iostream>

using namespace std;

int main()
{
    /*int n = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << n << "\t";
            n++;
        }
        cout << endl;
    }*/

    /*for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << " * ";
        }
        cout << endl;
    }*/

    /*int k;
    cout << "Masukan Bilangan: ";
    cin >> k;
    int j = 1;
    for(int i = k; i >= 1; i--){
        cout << i << " " << j << endl;
        j++;
    }*/

    /*int s;
    cout << "Aplikasi Pembuatan Segitiga siku-siku \n";
    cout << "Masukan Nilai: ";
    cin >> s;

    for(int i = 1; i < s; i++){
        for(int j = 1; j <= i; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }*/

    /*for(int i = 6; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << " * ";
        }
        cout << endl;
    }*/

    /*string y[6] = {"cahya", "kamedi", "thahja", "mijan", "karina", "carmelia"};
    int j = 5;
    for(int i = 0; i <= 5; i++){
        cout << i[y] <<"\t" <<"\t" << j[y] << endl;
        j--;
    }*/

    /*int x[5] = {72,920,9920,2,6};
    int max = 0;
    int min = 1000000;
    for(int i = 0; i < 5; i++){
        cout << i[x] << endl;
        if(max < i[x]){
            max = i[x];
        }
        if(min > i[x]){
            min = i[x];
        }
    }
    cout << endl;
    cout << "Bilangan Terbesar adalah: " << max << endl;
    cout << "Bilangan Terkecil adalah: " << min;
    */

    int c[5]={82,19,30,20,11};
    int y;
    bool cek;

    for(int i = 0; i < 5; i++){
        cout << i[c] << " ";
    }
    cout << endl;
    cout << "Mau Cari Angka Berapa: ";
    cin >> y;

    for(int i = 0; i < 5; i++){
        if(i[c] == y){
            cek = true;
            break;
        }
        else{
            cek = false;
        }
    }
    cout << cek;


}
