#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void){
    int num;

    cin >> num;

    for (int i = 0; i < num; i++){
        vector<int> v;
        for (int j = 0; j < 5; j++){
            int score;

            cin >> score;
            v.push_back(score);
        }

        v.erase(max_element(v.begin(), v.end()));
        v.erase(min_element(v.begin(), v.end()));

        int max = *max_element(v.begin(), v.end());
        int min = *min_element(v.begin(), v.end());

        int sum = accumulate(v.begin(), v.end(), 0);
        
        if ((max - min) >= 4) cout << "KIN" << "\n";
        else cout << sum << "\n";

        v.clear();
    }

    return 0;
}