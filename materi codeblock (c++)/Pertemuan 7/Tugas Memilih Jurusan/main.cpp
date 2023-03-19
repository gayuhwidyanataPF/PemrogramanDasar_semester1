#include <iostream>

using namespace std;

int main()
{
    // Tugas Pertemuan 7 membuat pengkondisian
    // Made by Gayuh Widyanata
    // Nim A11.2022.14636

    int pilihan;
    string jurusan;

    cout << "\n\nMemilih Jurusan \n" << endl;
    cout << "1. Teknik Informatika" << endl;
    cout << "2. Sistem Informasi" << endl;
    cout << "3. DKV \n" << endl;
    cout << "Pilih Jurusan <1,2,3>: ";
    cin >> pilihan;

    if(pilihan == 1){
        jurusan = "Teknik Informatika";
    }
    else if(pilihan == 2){
        jurusan = "Sistem Informasi";
    }
    else if(pilihan == 3){
        jurusan = "DKV";
    }
    else{
        jurusan = "Tidak diketahui";
    }

    cout << "Jurusan anda adalah " << jurusan << endl;



    return 0;
}
