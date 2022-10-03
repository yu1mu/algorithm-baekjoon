#include <iostream>
using namespace std;

int main(void){
    int num;

    cin >> num;

    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= num - i; j++){
            cout << " ";
        }

        for (int k = 1; k <= i; k++){
            cout << "*";
        }

        cout << "\n";
    }

    for (int i = num - 1; i >= 1; i--){
        for (int j = 1; j <= num - i; j++){
            cout << " ";
        }

        for (int k = 1; k <= i; k++){
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}