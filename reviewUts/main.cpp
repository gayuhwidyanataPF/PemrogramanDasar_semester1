#include <iostream>

using namespace std;

int main()
{
    // soal 1 menentukan bilangan ganjil genap
    /*int a;
    cout << "Masukan Angka: ";
    cin >> a;

    if(a == 0){
        cout << "Bilangan 0" << endl;
    }
    else if(a % 2 == 0){
        cout << "Bilangan Positif Genap" << endl;
    }
    else if(a % 2 == 1){
        cout << "Bilangan Positif Ganjil" << endl;
    }
    else if(a % -2 == -0){
        cout << "Bilangan Negatif Genap" << endl;
    }
    else if(a % -2 == -1){
        cout << "Bilangan Negatif Ganjil" << endl;
    }


    // soal 2 bilangan ganjil mundur dari 25 ke 10
    for(int i = 25; i >= 10; i--){
        if(i % 2 == 1){
            cout << i << endl;
        }
    }

    //soal 3 bilangan prima jika negatif keluar input maka bilangan salah
    int bil, y;
    cout << "Masukan Angka: ";
    cin >> bil;

    y = 0;
    for(int i = 2; i <= bil; i++){
        if(bil % i == 0){
            y++;
        }
    }
    if(y == 2){
        cout << "Bilangan Prima" << endl;
    }
    else if(bil == 0){
            cout << "bilangan 0, inputan anda salah!!!" << endl;
        }
    else if(bil <= 0){
            cout << "bilangan ini negatif dan inputan anda salah!!!" << endl;
        }
    else{
        cout << "Bukan Bilangan Prima" << endl;
    }

    // soal 4 membuat bilangan faktorial
    /*int x, hasil;
    cout << "Masukan Angka: ";
    cin >> x;

    hasil = 1;
    for(int i = 1; i <= x; i++){
        hasil = hasil * i;
    }
    cout << x << "!= " << hasil << endl;
    */

     int i=0, cek, bil=2,n;
      cout<<"Masukan jumlah bilangan prima : ";cin>>n;
      while(i<n){
            cek=0;
            for(int j=2;j<=bil;j++){
                  if(bil%j==0){
                   cek++;
                  }
            }
            if(cek == 1){
              cout<<bil;
                  if(i < n-1){
                       cout<<", ";
                  }else {
                    cout<<'.';
                  }
               i++;
            }
          bil++;
       }


    // author real : Gayuh Widyanata
}
