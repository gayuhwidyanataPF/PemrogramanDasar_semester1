#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Masukan Angka = ";
    cin >> x;
    for(int i = 1; i <= x; i++){
        for(int j = i; j <= i * i; j += i){
         cout << j << "\t";
        }
        cout << endl;
    }
    return 0;
}
