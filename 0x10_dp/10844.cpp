#include <iostream>
using namespace std;

long long d[105][10];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i <= 9; i++){
        d[1][i] = 1;
    }

    for (int i = 2; i <= n; i++){
        for (int j = 0; j <= 9; j++){
            if(j != 0) d[i][j] += d[i-1][j - 1];
            if (j != 9) d[i][j] += d[i-1][j+1];
            d[i][j] %= 1000000000;
        }
    }

    long long ans = 0;

    for (int i = 0; i <= 9; i++){
        ans += d[n][i];
    }

    ans %= 1000000000;

    cout << ans;


}