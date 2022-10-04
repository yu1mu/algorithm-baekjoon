#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int num;

    cin >> num;

    vector<double> v;
    for (int i = 1; i <= num; i++){
        int score;

        cin >> score;
        v.push_back(score);
    }

    double max = *max_element(v.begin(), v.end());

    for (int i = 0; i < num; i++){
        v[i] = v[i] / max * 100;
    }

    double sum = 0;
    for (int i = 0; i < num; i++){
        sum += v[i];
    }

    double avg = sum / num;

    cout << avg << endl;

    return 0;
}