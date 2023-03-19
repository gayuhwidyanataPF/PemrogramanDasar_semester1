// Gayuh Widyanata || A11.2022.14636 || A11-4117

#include <iostream>

using namespace std;

int main()
{
    /*Buatlah Program untuk membaca suatu inputan nilai integer dan selama data yang di inputkan bukan -99,
    maka program akan terus meminta user untuk melakukan inputan , nama file : loop5.c*/
    int x;
    for(int i = 0;; i++){
        cout << "Masukan Angka anda = ";
        cin >> x;
        if(x == -99){
            cout << "\n";
            cout << "Keluar Karena break" << endl;
            break;
        }
    }
    return 0;
}
