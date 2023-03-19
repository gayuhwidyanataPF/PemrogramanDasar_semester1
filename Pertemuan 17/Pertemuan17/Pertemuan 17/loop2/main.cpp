// Gayuh Widyanata || A11.2022.14636 || A11-4117

#include <iostream>

using namespace std;

int main()
{
    /*Buatlah Program untuk mencetak angka integer dari 100 hingga 1, tetapi yang genap
    saja dengan menggunakan statement continue, nama file : loop2.c*/
    for(int i = 100; i > 0; i--){
        if(i % 2 == 1){
            continue;
        }
        cout << i << endl;
    }
    return 0;
}
