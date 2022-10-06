#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int num;

    cin >> num;

    for (int i = 0; i < num; i++){
        int store;

        cin >> store;
        vector<int> v;
        for (int j = 0; j < store; j++){
            int x;

            cin >> x;

            v.push_back(x);
        }

        sort(v.begin(), v.end());

        int dist = 0;

        for (int j = store - 1; j >= 1; j--){
            dist += v[j] - v[j - 1];
        }

        cout << dist * 2 << "\n";

        v.clear();
    }

    return 0;
}