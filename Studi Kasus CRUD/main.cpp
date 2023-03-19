#include <iostream>
using namespace std;

#define max 10
string buah[max], loop;
int pos = 0;

void display(){
    system("cls");
    if(pos > 0){
        cout << "Data Tersimpan" << endl;
        for(int a = 0; a < pos; a++){
            cout << a+1 << "." << buah[a] << endl;
        }
    }else{
        cout << "Data Kosong" << endl;
    }
}

void add(){
    do{
        display();
        if(pos < max){
            cin.ignore();
            cout << "Tambah Data: ";
            getline(cin, buah[pos]);
            pos++;
            display();
            cout << "ulangi (y/t) : ";
            cin >> loop;
        }else{
            cout << " <-- memori penuh -->" << endl;
            cout << "Isikan 'T' untuk kembali : ";
            cin >> loop;
        }
    }while(loop == "y");
}

void edit(){
    int y;
    do{
        display();
        cout << "Ubah Data Ke : ";
        cin >> y;
        cin.ignore();
        cout << "ubah menjadi : ";
        getline(cin, buah[y-1]);
        display();
        cout << "Ubah Lagi (y/t) : ";
        cin >> loop;
    }while(loop == "y");
}

void del(){
    int x;
    do{
        display();
        if(pos > 0){
            cout << "Hapus data ke : ";
            cin >> x;
            for(int i = x; i < pos; i++){
                buah[i-1] = buah[i];
            }
            pos--;
            display();
            cout << "hapus lagi (y/t): ";
            cin >> loop;
        }else{
            cout << "Isikan t : ";
            cin >> loop;
        }
    }while(loop == "y");
}

int main()
{
    int pilihan;
    do{
        system("cls");
        cout << "1. Tambah" << endl;
        cout << "2. Ubah" << endl;
        cout << "3. Hapus" << endl;
        cout << "4. Tampil" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukan angka <1-4>: ";
        cin >> pilihan;
        switch(pilihan){
        case 1:
            add();
            break;
        case 2:
            edit();
            break;
        case 3:
            del();
            break;
        case 4:
            do{
                display();
                cout << "Kembali (y): ";
                cin >> loop;
            }while(loop != "y");

            break;
        case 5:
            cout << "..." << endl;
            break;
        default:
            cout << "Pilih 1-4" << endl;
            break;
        }
    }
    while(pilihan != 5);
        cout << "Program Selesai" << endl;
}
