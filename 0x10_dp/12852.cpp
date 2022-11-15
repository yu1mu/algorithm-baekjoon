#include <iostream>
using namespace std;

int d[1000002], a[1000002];

int main(void){
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++){
        d[i] = d[i-1] + 1;
        a[i] = i - 1;

        if (i % 2 == 0 && d[i] > d[i / 2] + 1) {
            d[i] = d[i / 2] + 1;
            a[i] = i / 2;
        }

        if (i % 3 == 0 && d[i] > d[i / 3] + 1){
            d[i] = d[i / 3] + 1;
            a[i] = i / 3;
        }
    }

    cout << d[n] << "\n";

    int cur = n;
    while(true){
        cout << cur << " ";
        if (cur == 1) break;
        cur = a[cur];
    }
}