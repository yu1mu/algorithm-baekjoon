#include <iostream>
using namespace std;

int main(void){
    int num = 0;

    cin >> num;

    for (int i = 1; i <= num; i++){
        for (int j = 0; j <= num - i; j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}