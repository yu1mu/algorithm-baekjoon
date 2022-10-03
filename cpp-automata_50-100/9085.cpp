#include <iostream>
using namespace std;

int main(void){
    int t;

    cin >> t;

    while (t--){
        int x, sum = 0;

        cin >> x;

        for (int i = 1; i <= x; i++){
            int n;
            cin >> n;

            sum += n;
        }

        cout << sum << endl;
    }

    return 0;
}