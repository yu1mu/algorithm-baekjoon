#include <iostream>
using namespace std;

long long d[100][2];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    d[1][1] = 1LL;

    for (int i = 2; i <= n; i++){
        d[i][0] = d[i-1][0] + d[i-1][1];
        d[i][1] = d[i-1][0];
    }

    cout << d[n][0] + d[n][1] << "\n";
}