#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int num;

    cin >> num;

    vector<int> v;
    for (int i = 0; i < num; i++){
        int x;
        
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int res = v[0] * v[num - 1];

    cout << res << endl;

    return 0;
}