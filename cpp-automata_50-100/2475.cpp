#include <iostream>
using namespace std;

int main(void){
    int sum = 0;
    for (int i = 1; i <= 5; i++){
        int n;

        cin >> n;

        sum += n * n;
    }

    int res = sum % 10;

    cout << res << endl;

    return 0;
}