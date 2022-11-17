#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n == 1) return false;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }

    return true;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++){
        if (isPrime(i)) cout << i << "\n";
    }
}