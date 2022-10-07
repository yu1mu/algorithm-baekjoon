#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    vector<int> w, k;
    for (int i = 0; i < 10; i++){
        int score;
        cin >> score;
        w.push_back(score);
    }

    for (int i = 0; i < 10; i++){
        int score;
        cin >> score;
        k.push_back(score);
    }

    sort(w.begin(), w.end(), greater<int>());
    sort(k.begin(), k.end(), greater<int>());

    int sum_w = w[0] + w[1] + w[2];
    int sum_k = k[0] + k[1] + k[2];

    cout << sum_w << " " << sum_k << endl;

}