#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int num;

    cin >> num;

    vector<int> v;
    for (int i = 0; i < num; i++){
        int n;

        cin >> n;

        v.push_back(n);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < num; i++){
        cout << v[i] << endl;
    }

    return 0;
}