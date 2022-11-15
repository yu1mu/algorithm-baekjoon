#include <iostream>
using namespace std;

long long d[105];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    d[1] = 1;
    d[2] = 1;
    d[3] = 1;

    for(int i = 4; i <= 100; i++){
        d[i] = d[i - 2] + d[i - 3];
    }

    while(t--){
        int n;
        cin >> n;

        cout << d[n] << "\n";
    }
}