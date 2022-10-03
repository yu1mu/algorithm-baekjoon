#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n, k;

    cin >> n >> k;

    vector<int> v;

    for (int i = 1; i*i <= n; i++){
        if (n % i == 0) v.push_back(i); 
    }

    for (int i = v.size() - 1; i >= 0; i--){
        if (n / v[i] != v[i]) v.push_back(n / v[i]);
    }

    if (v.size() < k) cout << 0 << endl;
    else cout << v[k - 1] << endl;

    return 0;
}