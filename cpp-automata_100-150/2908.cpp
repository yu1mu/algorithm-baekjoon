#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(void){
    string a, b;

    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int numA = stoi(a);
    int numB = stoi(b);

    if (numA > numB) cout << a << endl;
    else cout << b << endl;

    return 0;
}

