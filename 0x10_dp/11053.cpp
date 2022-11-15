#include <iostream>
#include <algorithm>
using namespace std;

int d[1005], a[1005];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> a[i];
        d[i] = 1;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            if(a[i] > a[j]) d[i] = max(d[i], d[j] + 1);
        }
    }

    cout << *max_element(d + 1, d + n + 1);

}