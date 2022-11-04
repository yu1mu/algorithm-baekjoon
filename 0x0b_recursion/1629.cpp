#include <iostream>
using namespace std;

long long mod(long long a, long long b, long long c){
    if (b == 0) return 1;
    long long res = mod(a, b / 2, c);

    if (b%2 == 0) return res * res % c;
    else return res * res % c * a % c;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a, b, c;

    cin >> a >> b >> c;

    cout << mod(a, b, c);
}