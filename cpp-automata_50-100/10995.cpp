#include <iostream>
using namespace std;

int main(void){
    int num;

    cin >> num;

    for (int i = 1; i <= num; i++){
        if (i % 2 == 0) cout << " ";
        for (int j = 1; j <= num; j++){
            if (j != num) cout << "* ";
            else cout << "*";
        }

        cout << "\n";
    }

    return 0;
}