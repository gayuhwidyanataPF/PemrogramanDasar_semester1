#include <iostream>

using namespace std;

int main()
{
    cout << "Ketuntasan Nilai Siswa" << endl;
    cout << "====================== \n" << endl;

    int kkm = 75;
    int nilai;
    cout << "Masukan Nilai Siswa <0-100>: ";
    cin >> nilai;

    if(nilai >= 75){
        cout << "Nilai Tuntas" << endl;
    }else{
        cout << "Nilai Tidak Tuntas" << endl;
    }

    return 0;
}
