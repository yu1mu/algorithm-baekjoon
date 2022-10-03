#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool isPrime(int n){
    if (n == 1) return false;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
    }

    return true;
}

int main(void){
    int m, n;
    vector<int> v;

    cin >> m >> n;

    for (int i = m; i <= n; i++){
        if (isPrime(i) == true) v.push_back(i);
    }

    if (v.size() == 0) cout << -1 << endl;
    else {
        cout << accumulate(v.begin(), v.end(), 0) << endl; 
        cout << v[0] << endl;
    }

    return 0;
}