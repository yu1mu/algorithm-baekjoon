#include <iostream>
#include <algorithm>
using namespace std;

int d[100005], a[100005];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> a[i];
        d[i] = a[i];
    }

    for (int i = 1; i <= n; i++){
        d[i] = max(d[i-1] + a[i], d[i]);
    }

    cout << *max_element(d + 1, d + n + 1);
}