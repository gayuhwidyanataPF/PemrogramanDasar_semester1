#include <iostream>

using namespace std;

int main()
{
    /*for(int i = 0; i <= 10; i++){
        if(i % 2 == 1){
            cout << i << endl;
        }
    }

    int x = 10;
    while(x >= 0){
        if(x % 2 == 0){
            cout << x << endl;
        }
        x--;
    }
    bool input = true;
    char c = 'y';

    while(input && c == 'y'){
        cout << "Masukan Input: ";
        cin >> c;
    }*/

    int x = 1;
    while(x <= 100){
        if(x % 4 == 0 && x % 6 == 0){
            if(x != 60){
                cout << x << endl;
            }
        }
        x++;
    }
}
