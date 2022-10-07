#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int num;
    
    cin >> num;

    vector<int> v;
    for (int i = 0; i < num; i++){
        for (int j = 0; j < 10; j++){
            int x;

            cin >> x;

            v.push_back(x);
        }

        sort(v.begin(), v.end(), greater<int>());

        cout << v[2] << "\n";

        v.clear();
    }

    return 0;
}