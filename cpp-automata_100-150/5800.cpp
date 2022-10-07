#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int k;

    cin >> k;

    for (int i = 1; i <= k; i++){
        int n;

        cin >> n;

        vector<int> v;
        for (int j = 0; j < n; j++){
            int score;
            cin >> score;

            v.push_back(score);
        }

        sort(v.begin(), v.end());

        vector<int> diff;
        for (int j = 0; j < n - 1; j++){
            diff.push_back(abs(v[j] - v[j + 1]));
        }

        int max = *max_element(diff.begin(), diff.end());

        cout << "Class " << i << "\n";
        cout << "Max " << v[n - 1] << ", " << "Min " << v[0] << ", " << "Largest gap " << max << "\n";
    }

    return 0;
}