#include <iostream>
using namespace std;

int fibo[45][2];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    fibo[0][0] = 1;
    fibo[1][1] = 1;

    for (int i = 2; i <= 40; i++){
        fibo[i][0] = fibo[i-1][0] + fibo[i-2][0];
        fibo[i][1] = fibo[i-1][1] + fibo[i-2][1];
    }

    while(t--){
        int n;
        cin >> n;

        cout << fibo[n][0] << " " << fibo[n][1] << "\n";
    }

}