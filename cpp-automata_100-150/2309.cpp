#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main(void){
    vector<int> v;
    for (int i = 0; i < 9; i++){
        int height;

        cin >> height;
        v.push_back(height);
    }

    int sum = accumulate(v.begin(), v.end(), 0);

    bool flag = false;

    for (int i = 0; i < 8; i++){
        if (flag == true) break;
        for (int j = i + 1; j < 9; j++){
            if (sum - v[i] - v[j] == 100) {
                v.erase(v.begin() + i);
                v.erase(v.begin() + j - 1);
                flag = true;
            }
        }
    }
    
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }

    return 0;
}