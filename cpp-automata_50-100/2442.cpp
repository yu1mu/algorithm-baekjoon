#include <iostream>
using namespace std;

int main(void){
    int num;

    cin >> num;

    int star = 2 * num - 1;
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= (star - (2*i - 1))/ 2 ; j++){
            cout << " ";
        }

        for (int k = 1; k <= 2*i - 1; k++){
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}