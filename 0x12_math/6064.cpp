#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int a, int b){
    if (b == 0){
        return a;
    }
    return GCD(b, a % b);
}

int main(void){
    int t;
    cin >> t;
    
    while(t--){
        int m, n, x, y;

        cin >> m >> n >> x >> y;

        if (m == x) x = 0;
        if (n == y) y = 0;

        int last = m * n / GCD(m, n);
        bool check = false;

        for(int i = x; i <= last; i += m){
            if(i == 0) continue;
            if (i % n == y) {
                check = true;
                cout << i << "\n";
                break;
            }
        }

        if(!check) cout << -1 << "\n";
    }
}