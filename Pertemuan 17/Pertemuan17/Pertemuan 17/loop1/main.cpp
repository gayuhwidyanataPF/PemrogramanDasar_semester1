// Gayuh Widyanata || A11.2022.14636 || A11-4117

#include <iostream>

using namespace std;

int main()
{
    /*Buatlah Program untuk mencetak angka integer dari 100 hingga 1 dan sebaliknya menggunakan
    satu loop for multi expression di dalamnya, nama file : loop1.c*/
    int j = 100;
    for(int i = 1; i <= 100; i++){
        cout << "angka i = " << i << " dan " << "angka j = " << j << endl;
        j--;
    }
    return 0;
}
