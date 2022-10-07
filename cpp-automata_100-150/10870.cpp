#include <iostream>
using namespace std;

int main(void){
    int num;

    cin >> num;

    int sum = 0;
    int a = 0, b = 1;
    for (int i = 0; i < num; i++){
        if (i == 1) sum = 1;
        else{
            sum = a + b;
            a = b;
            b = sum;
        }
    }

    cout << sum << endl;

    return 0;
}