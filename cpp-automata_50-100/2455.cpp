#include <iostream>
using namespace std;

int main(void){
    int max = -1;
    int n = 0;
    for (int i = 1; i <= 4; i++){
        int in, out;

        cin >> out >> in;

        n = n - out + in;

        if (max < n) max = n;
    }

    cout << max << endl;

    return 0;
}