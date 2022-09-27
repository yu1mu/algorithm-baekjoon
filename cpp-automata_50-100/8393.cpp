#include <iostream>
using namespace std;

int main(void){
    int num = 0;
    int sum = 0;

    cin >> num;

    for (int i = 0; i <= num; i++){
        sum += i;
    }

    cout << sum << endl;

    return 0;
}