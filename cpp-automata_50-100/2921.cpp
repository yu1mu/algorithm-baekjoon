#include <iostream>
using namespace std;

int main(void){
    int num, sum = 0;

    cin >> num;

    for (int i = 1; i <= num; i++){
        for (int j = 0; j <= i; j++){
            sum += j + i;
        }
    }

    cout << sum << endl;

    return 0;
}