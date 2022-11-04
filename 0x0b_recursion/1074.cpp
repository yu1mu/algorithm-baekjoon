#include <iostream>
#include <cmath>
using namespace std;

int func(int n, int r, int c){
    if (n == 0) return 0;

    int cut = (int)pow(2, n-1);

    if (r < cut && c < cut) return func(n - 1, r, c);
    if (r < cut && c >= cut) return cut * cut + func(n - 1, r, c - cut);
    if (r >= cut && c < cut) return 2 * cut * cut + func(n - 1, r - cut , c);
    return 3 * cut * cut + func(n - 1, r - cut, c - cut);

}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, r, c;

    cin >> n >> r >> c;
    cout << func(n, r, c);
}