#include <iostream>
using namespace std;

int main(void){
    int num;

    cin >> num;

    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= i - 1; j++){
            cout << " ";
        }

        for (int k = 1; k <= num * 2 - (i * 2 - 1); k++){
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = num - 1; i >= 1; i--){
        for (int j = 1; j <= i - 1; j++){
            cout << " ";
        }

        for (int k = 1; k <= num * 2 - (i * 2 - 1); k++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}