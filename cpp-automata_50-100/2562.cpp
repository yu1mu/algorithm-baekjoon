#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    vector<int> v;

    for (int i = 1; i <= 9; i++){
        int n;
        cin >> n;

        v.push_back(n);
    }

    int max = *max_element(v.begin(), v.end()); 
    int max_index = max_element(v.begin(), v.end()) - v.begin();

    cout << max << endl;
    cout << max_index + 1 << endl;

    return 0;
}