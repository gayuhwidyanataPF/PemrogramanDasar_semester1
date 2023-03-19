#include <iostream>

using namespace std;

int main()
{
    /*int x;
    cout << "Masukan Angka: ";
    cin >> x;
    int j = 1;
    for(int i = x; i >= 1; i--){
        cout << i << " " << j << endl;
        j++;
    }*/

    /*for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << " & ";
        }
        cout << endl;
    }*/

    /*int n = 1;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << n++ << "\t";
        }
        cout << endl;
    }*/

    /*string z[5] = {"Gayuh","mata","kaca","nata","widya"};
    for(int i = 4; i >= 0; i--){
        cout << z[i] << endl;
    }*/

    /*int z[5] = {4,51,5,3,22};
    int x = 51;
    bool cek = false;

    for(int i = 0; i < 5; i++){
        if(z[i] == x){
            cek = true;
            break;
        }
        else{
            cek = false;
        }
    }
    cout << cek;*/

    /*int x = 90, y = 10;
    int max = 0;
    if(max < x){
        max = x;
    }
    if(max < y){
        max = y;
    }
    cout << max;
    */

    /*int x = 10;
    int y = 1;
    int z = 14;
    int minn = 99;
    if(minn > x){
        minn = x;
    }
    if(minn > y){
        minn = y;
    }
    if(minn > z){
        minn = z;
    }
    cout << minn;*/

    /*int z[5]={33,44,22,665,1};
    int maxx = 0;
    for(int i = 0; i < 5; i++){
        if(maxx < z[i]){
            maxx = z[i];
        }
    }
    cout << maxx;*/

    /*int z[5]={33,44,22,665,22};
    int minn = 10000;
    for(int i = 0; i < 5; i++){
        if(minn > z[i]){
            minn = z[i];
        }
    }
    cout << minn;*/

    /*int x = 9;
    int y = 15;
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
    cout << x << endl;
    cout << y;*/

    //faktorisasi
    /*int x;
    cout << "Masukan Angka: ";
    cin >> x;
    int maxx = 0;
    int sum = 0;
    float rata;

    for(int i = x; i >= 1; i--){
        if(x % i == 0){
            sum = sum + i;
            cout << i << endl;
        }
        rata = (float)sum / x;
        if(maxx < i){
            maxx = i;
        }
    }
    cout << endl;
    cout << "rata= " << rata;
    cout << endl;
    cout << "jumlah= " << sum;
    cout << endl;
    cout << "terbesar= " << maxx;*/

    /*int x;
    int sum = 0;
    float rata;
    cout << "Masukan Jumlah angka yang diinput: ";
    cin >> x;

    int z[x];
    for(int i = 0; i < x; i++){
        cin >> z[i];
    }
    for(int i = 0; i < x; i++){
        sum = sum + z[i];
        rata = (float)sum / x;
        cout << z[i] << " ";
    }
    cout << endl;
    cout << "Rata= " << rata;
    cout << endl;
    cout << "Jumlah= " << sum;*/

    /*int x,y, fpb, besar;
    cout << "Masukan Angka 1: ";
    cin >> x;
    cout << "Masukan Angka 2: ";
    cin >> y;
    for(int i = 1; i <=x; i++){
        if(x % i == 0 && y % i == 0){
            fpb = i;
        }
    }
    cout << endl;
    cout << fpb;*/

    /*int x,y,o, kpk=0;
    cout << "Masukan Angka 1: ";
    cin >> x;
    cout << "Masukan Angka 2: ";
    cin >> y;
    cout << "Masukan Angka 3: ";
    cin >> o;
    for(int i = 1; i <= x; i++){
        kpk += y;
        if(kpk % x == 0){
            cout << "KPK = " << kpk << endl;
            break;
        }
    }*/

    //faktorial
    int x, kali=1;
    cin >> x;
    for(int i = x; i > 0; i--){
        kali = kali * i;
        cout << i << " ";
    }
    cout << endl;
    cout << kali;

    return 0;
}
