#include <iostream>

using namespace std;

int main()
{
    //fibonaci
    /*int x = 0;
    int y = 1;

    cout << x << endl;
    for(int i = 0; i < 100; i++){
        i = x + y;
        cout << i << endl;
        y = x;
        x = i;
    }*/

    /*for(int i = 1; i <= 100; i++){
        if(i % 5 == 0){
            if(i % 10 == 0){
                continue;
            }
            cout << i << endl;
        }
    }*/

    int x = 0, y = 1;
    cout << x << " ";
    cout << y << " ";
    for(int i = 0; i < 100; i++){
        i = x + y;
        if(i == 144){
            break;
        }
        cout << i << " ";
        x=y;
        y=i;
    }
}
