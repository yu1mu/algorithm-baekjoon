#include <iostream>
using namespace std;

int main(void){
    int num;

    cin >> num;

    for (int i = 0; i < num; i++){
        int a, b;

        cin >> a;
        cin >> b;

        cout << a + b << '\n';
    }

    return 0;
}