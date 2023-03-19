#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    /*Ini Pertemuan 3 */
    int umur = 18;
    float tb = 178.5;
    string nim = "A11.2022.14636";
    char ub = 'S';
    int tabungan = 20000;
    char jk = 'L';
    string ps = "Teknik Informatika";
    string nama = "Gayuh Widyanata";


    cout << "Data Diri \n" << endl;
    cout << "Nama                   : " << nama << endl;
    cout << "NIM                    : " << nim << endl;
    cout << "Umur                   : " << umur <<endl;
    cout << "Program Studi          : " << ps << endl;
    cout << "Jenis Kelamin          : " << jk << endl;
    cout << "Tinggi Badan           : " << tb << endl;
    cout << "Ukuran Baju            : " << ub << endl;
    cout << "Tabungan Uang          : " << tabungan << endl;
    cout << "\n \n " << endl;



    printf("----------------------------------------------------------------- \n\n");
    //printf("Penggunaan printf dan scanf di C++ \n");
    //printf("Fungsi printf() digunakan untuk menampilkan output ke layar komputer. \n");
    //printf("Fungsi scanf() digunakan untuk mengambil input dari keyboard. Di dalem scanf juga ada format,\nsimbol untuk mengambil alamat dari variabel untuk menyimpan input.\n \n");
    //format di dalam scanf terdiri dari '%c(Karakter), %s(String), %d/%i(Desimal), %f(Pecahan), %o(Oktal), %x(Hexadesimal)'
    printf("\t\tMasukan Data sesuai anda \n \n");

    string nm[50], nimm[20];
    int umurr;
    float tbadan;
    char jkelamin;

    printf(" \t Nama Lengkap            : ");
    scanf("%s",&nm);

    printf(" \t NIM                     : ");
    scanf("%s",&nimm);

    printf(" \t Umur                    : ");
    scanf("%d",&umurr);

    printf(" \t Tinggi Badan            : ");
    scanf("%f",&tbadan);

    printf(" \t Jenis Kelamin           : ");
    scanf(" %c",&jkelamin);

    printf("\n");
    printf("\t Nama anda %s, \n", nm);
    printf("\t NIM anda %s, \n", nimm);
    printf("\t Umur anda %d, \n", umurr);
    printf("\t Tinggi Badan anda %f, \n", tbadan);
    printf("\t Jenis Kelamin anda %c. \n", jkelamin);
    printf("\n");

    printf("----------------------------------------------------------------- \n");

    return 0;
}
