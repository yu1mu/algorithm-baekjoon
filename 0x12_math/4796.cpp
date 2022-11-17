#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num = 1;

    while(true){
        int l, p, v;
        cin >> l >> p >> v;

        if (!l && !p && !v) break;
        int day = (v / p * l) + min(v % p, l);
        cout << "Case " << num << ": " << day << "\n";
        num++; 
    }
}