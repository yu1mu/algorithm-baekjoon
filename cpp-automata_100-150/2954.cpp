#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    vector<int> v;
    for (int i = 1; i <= 5; i++){
        int a, b, c, d;
        int sum = 0;

        cin >> a >> b >> c >> d;
        sum = a + b + c + d;

        v.push_back(sum);
    }

    int idx = max_element(v.begin(), v.end()) - v.begin() +  1;
    int max = *max_element(v.begin(), v.end());

    cout << idx << " " << max << endl;

    return 0;
}