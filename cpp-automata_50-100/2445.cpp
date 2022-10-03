#include <iostream>
using namespace std;

int main(void){
    int num;

    cin >> num;

    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }

        for (int k = 1; k <= (num - i) * 2; k++){
            cout << " ";
        }

        for (int l = 1; l <= i; l++){
            cout << "*";
        }

        cout << "\n";
    }

    for (int i = num - 1; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }

        for (int k = 1; k <= (num - i) * 2; k++){
            cout << " ";
        }

        for (int l = 1; l <= i; l++){
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}