#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[100001] = {};
    bool isExist[2000001];

    int n, x;

    cin >> n;

    for (int i = 0; i < n; i++) cin >> num[i];

    cin >> x;

    int cnt = 0;
    for (int i = 0; i < n; i++){
        if(x - num[i] > 0 && isExist[x - num[i]]) cnt++;
        isExist[num[i]] = true;
    }

    cout << cnt << "\n";
}