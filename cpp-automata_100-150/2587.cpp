#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    vector<int> v;
    for (int i = 0; i < 5; i++){
        int num;

        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    int mid = v[2];
    int avg, sum = 0;

    for (int i = 0; i < 5; i++){
        sum += v[i];
    }

    avg = sum / 5;

    cout << avg << endl;
    cout << mid << endl;

    return 0;
}