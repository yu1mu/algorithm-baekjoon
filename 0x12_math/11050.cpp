#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int res = 1;
    int check = 0;
    for (int i = n; i >= 1; i--) {
        if(check == k) break;
        res *= i;
        check++;
    }
    for (int i = 1; i <= k; i++) res /= i;
    
    cout << res << "\n";
}