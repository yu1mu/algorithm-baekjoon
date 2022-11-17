#include <iostream>
using namespace std;

bool check[1005];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int num = 1;
    int res;
    for(int i = 2; i <= n; i++){
        for (int j = 1; j <= n / i; j++){
            if(!check[i * j]){
                if(num == k) {
                    res = i * j;
                    break;
                }
                check[i*j] = true;
                num++;
            }         
        }
    }

    cout << res << "\n";

}