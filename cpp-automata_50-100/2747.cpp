#include <iostream>
using namespace std;

int main(void){
    int num;

    cin >> num;

    int a = 0, b = 1, fibo = 0;

    for (int i = 0; i < num; i++){
        if (i == 1) fibo = 1;
        else {
            fibo = a + b;
            a = b;
            b = fibo;
        }
    }

    cout << fibo << endl;

    return 0;
}