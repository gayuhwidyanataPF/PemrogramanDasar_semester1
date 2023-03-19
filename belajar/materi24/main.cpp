#include <iostream>

using namespace std;

int main()
{
    /*int x,y,temp;
    temp = 0;

    cout << "Masukan Angka 1: ";
    cin >> x;
    cout << "Masukan Angka 2: ";
    cin >> y;

    temp = x;
    x = y;
    y = temp;

    cout << "Angka 1: " << x << endl;
    cout << "Angka 2: " << y << endl;*/

    /*int n,x;
    cout << "Masukan Angka Faktorisasi: ";
    cin >> n;
    cout << "Masukan Angka Faktorisasi: ";
    cin >> x;

    for(int i = n; i > 0; i--){
        if(n % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
    for(int j = x; j > 0; j--){
        if(x % j == 0){
            cout << j << " ";
        }
    }*/

    /*int x,y,a;
    cout << "Masukan Angka 1: ";
    cin >> x;
    cout << "Masukan Angka 2: ";
    cin >> y;
    cout << "Nilai Faktor   : ";
    for(int i = 1; i <= y; i++){
        if(x % i == 0 && y % i == 0){
            a = i;
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Nilai FPB adalah " << a << "\n\n\n";*/

    // kpk
    int x,y, hasil, kali1, kali2;
    cout << "Masukan Angka 1: ";
    cin >> x;
    cout << "Masukan Angka 2: ";
    cin >> y;
    cout << "Nilai Faktor   : " << endl;
    /*for(int i=1;i<=y;i++){
        kali1 = x * i;
        kali2 = y * i;
        cout << endl;
        cout << "x = " << kali1 << "\t | " << "y = " << kali2;
        hasil=hasil+x;
        if(hasil%y==0){
            cout << "\n\n\nHasil KPK Adalah: " << hasil<<endl;
            break;
        }
    }*/
    for(int i = 1; i <= x; i++){
        hasil = hasil + x;
        if(hasil % y == 0){
            cout << hasil;
            break;
        }
    }
}
