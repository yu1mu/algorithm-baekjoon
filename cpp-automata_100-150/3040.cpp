#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(void){
    vector<int> v;
    for (int i = 1; i <= 9; i++){
        int num; 
        cin >> num;

        v.push_back(num);
    }

    int sum = accumulate(v.begin(), v.end(), 0);

    for (int i = 0; i < 8; i++){
        for(int j = i + 1; j < 9; j++){
            if (sum - (v[i] + v[j]) == 100) {
                v.erase(v.begin() + i);
                v.erase(v.begin() + j - 1);
            }
        }
    }

    for (int i = 0; i < 7; i++){
        cout << v[i] << "\n";
    }

    return 0;
}