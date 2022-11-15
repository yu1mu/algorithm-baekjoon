#include <iostream>
using namespace std;

int a[100005], d[100005];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        d[i] = d[i-1] + a[i];
    }

    while(m--){
        int i, j;
        cin >> i >> j;

        cout << d[j] - d[i-1] << "\n";
    }
}