#include <iostream>
using namespace std;

int main(void){
    int num, fac = 1;

    cin >> num;
    
    for (int i = 1; i <= num; i++){
        fac *= i;
    }

    cout << fac << endl;

    return 0;
}