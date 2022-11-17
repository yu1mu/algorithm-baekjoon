#include <iostream>
using namespace std;

int d[1005][1005];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= 1000; i++){
        d[i][0] = 1;
        d[i][i] = 1;
        for(int j = 1; j < i; j++){
            d[i][j] = (d[i-1][j] + d[i-1][j-1]) % 10007;
        }
    }

    cout << d[n][k] << "\n";
}