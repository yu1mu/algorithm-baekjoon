#include <iostream>
using namespace std;

int main(void){
    int total, sum = 0;

    cin >> total;

    for (int i = 0; i < 9; i++){
        int n;
        cin >> n;
        sum += n;
    }

    cout << total - sum;

    return 0;
}