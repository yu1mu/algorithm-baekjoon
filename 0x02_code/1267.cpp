#include <iostream>
#include <vector>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;

    cin >> num;

    vector<int> v;
    for (int i = 0; i < num; i++){
        int t;

        cin >> t;
        v.push_back(t);
    }

    int sum_m = 0, sum_y = 0;
    for (int i = 0; i < v.size(); i++){
        sum_y += (v[i] / 30 + 1) * 10;
        sum_m += (v[i] / 60 + 1) * 15;
    }

    if (sum_m == sum_y) cout << "Y M " << sum_m << "\n";
    else if (sum_m > sum_y) cout << "Y " << sum_y << "\n";
    else cout << "M " << sum_m << "\n";
}