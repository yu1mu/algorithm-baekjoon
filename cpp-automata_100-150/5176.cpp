#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int num;

    cin >> num;

    for (int i = 0; i < num; i++){
        int p, m;

        cin >> p >> m;

        int fail = 0;
        vector<int> v(m);
        for (int j = 0; j < p; j++){
            int seat;

            cin >> seat;

            if (v[seat - 1] == 0) v[seat - 1]++;
            else fail++;
        }

        cout << fail << "\n";
    }

    return 0;
}