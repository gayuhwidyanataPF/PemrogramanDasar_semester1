#include <iostream>

using namespace std;

int main()
{
    /*int z[4]={2,9,8,1};
    for(int i = 3; i >= 0; i--){
        cout << z[i] << endl;
    }
    int x[4]={2,3,4,5};
    for(int i = 0; i < 3; i++){
        cout << x[i] << ", ";
    }
    cout << x[3];

    int x=2;
    int y=11;
    int max = 0;
    if(max < x){
        max = x;
    }
    if(max < y){
        max = y;
    }
    cout << max;


    int x=100;
    int y=20;
    int min = 0;
    if(x > y){
        min = y;
    }
    else{
        min = x;
    }
    cout << min;


    int x[5]={9,4,5,7,8};
    int y;
    bool ketemu = false;
    cout << "Masukan Angka: ";
    cin >> y;

    for(int i = 0; i < 5; i++){
        if(x[i] == y){
            ketemu = true;
            break;
        }
        else{
            ketemu = false;
        }
    }
    cout << ketemu;

    int x[5]={9,6,5,4,8};
    int min = 99;

    int i = 0;
    while(i < 5){
        if(min > x[i]){
            cout << min << " =  " << x[i] << "?" << endl;
            min = x[i];
            cout << "min baru =  " << min << endl;
        }
        i++;
    }
    cout << min;
    */
    int x[5]={7,3,9,2,1};
    int min = 99;

    int i = 0;
    while(i < 5){
        if(min > x[i]){
            cout << min << " =  " << x[i] << "?" << endl;
            min = x[i];
            cout << "min baru =  " << min << endl;
        }
        i++;
    }
    cout << min;
}
