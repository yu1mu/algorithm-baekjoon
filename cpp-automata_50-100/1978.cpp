#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n == 1) return false;
    for (int i = 2; i*i <= n; i++){
        if (n % i == 0) return false;
    }

    return true;
}

int main(void){
    int num, total = 0;

    cin >> num;

    for (int i = 1; i <= num; i++){
        int n;
        
        cin >> n;
        if (isPrime(n) == true) total++;
    }

    cout << total << endl;

    return 0;
}