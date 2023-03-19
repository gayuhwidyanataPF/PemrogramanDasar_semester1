#include <iostream>

using namespace std;

int main()
{
    /*int x, sum = 0, y, kali = 1;
    float rata;

    cout << "Berapa Jumlah Data: ";
    cin >> x;
    int z[x];
    for(int i = 0; i < x; i++){
        y = i + 1;
        cout << "Angka " << y << " = ";
        cin >> z[i];
    }
    cout << endl;
    cout << "{ ";
    for(int i = 0; i < x; i++){
        sum = sum + z[i];
        rata = sum / x;
        kali = kali * z[i];
        cout << z[i] << " ";
    }
    cout << "}";
    cout << endl;
    cout << "Jumlah : " << sum << endl;
    cout << "Rata   : " << rata << endl;
    cout << "kali   : " << kali << endl;*/

    /*int x;
    cout << "Masukan Angka Faktorisasi: ";
    cin >> x;
    for(int i = x; i > 0; i--){
        if(x % i == 0){
            cout << i << " ";
        }
    }*/

    /*int x, kali = 1;
    cout << "Masukan Angka Faktorial: ";
    cin >> x;
    for(int i = x; i > 0; i--){
        kali = kali * i;
        cout << i << " ";
    }
    cout << endl;
    cout << kali;*/

    /*int harga_jual, total_akhir;
    cout << "Masukan Harga Barang: ";
    cin >> harga_jual;

    if(harga_jual < 100000){
        total_akhir = harga_jual;
        cout << "Tidak Ada Potongan, Terima Kasih" << endl;
    }
    if(harga_jual >= 100000 && harga_jual < 500000){
        total_akhir = harga_jual - (0.1*harga_jual);
        cout << "Selamat anda mendapatkan diskon 10%" << endl;
    }
    if(harga_jual >= 500000 && harga_jual < 1000000){
        total_akhir = harga_jual - (0.2*harga_jual);
        cout << "Selamat anda mendapatkan diskon 20%" << endl;
    }
    if(harga_jual >= 1000000 && harga_jual < 5000000){
        total_akhir = harga_jual - (0.3*harga_jual);
        cout << "Selamat anda mendapatkan diskon 30%" << endl;
    }
    cout << endl;
    cout << "Total: " << total_akhir;
    cout << endl;*/

    /*int z[5]={500,90,300,100,200};
    int mxx = 1000;
    for(int i = 0; i < 5; i++){
        if(mxx > z[i]){
            mxx = z[i];
        }
    }
    cout << mxx;*/

    /*int z[5]={500,90,300,100,200};
    int x, i;
    bool cek = false;
    cout << "Tentukan Angka: ";
    cin >> x;
    cout << endl;
    for(i = 0; i < 5; i++){
        if(z[i] == x){
            cek = true;
            break;
        }
        else{
            cek = false;
        }
    }

    cout << endl;
    cout << cek;
    cout << endl;*/

    /*int x = 9;
    int y = 99;
    int temp;

    temp = x;
    x = y;
    y = temp;

    cout << x << " " << y;*/

    int x,y,z;
    int sum = 0;
    cin >> x;
    cin >> y;
    cout << "Nilai FP: ";
    /*for(int i = 1; i <= y; i++){
        if(x % i == 0 && y % i == 0){
            z = i;
            cout << i << " ";
        }
    }
    cout << endl;
    cout << z;*/
    for(int i = 1; i < x; i++){
        sum += y;
        if(sum % x == 0){
            cout << sum;
            break;
        }
    }
    return 0;
}
