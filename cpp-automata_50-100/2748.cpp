#include <iostream>
using namespace std;

int main(void){
    int num;

    cin >> num;

    long long sum = 0;
    long long a = 0, b = 1;

    for (int i = 0; i < num; i++){

        if (i == 1) {
            sum = 1;
        }
        else {
            sum = a + b;
            a = b;
            b = sum;
        }
    }

    cout << sum << endl;

    return 0;
}