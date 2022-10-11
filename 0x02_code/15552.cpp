#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;

    cin >> num;

    for(int i = 0; i < num; i++){
        int a, b;
        cin >> a >> b;
        cout << a + b << "\n";
    }
}