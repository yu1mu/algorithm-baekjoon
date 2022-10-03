#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void){
    vector<int> v;

    for (int i = 1; i <= 7; i++){
        int num;
        
        cin >> num;

        if (num % 2 != 0) v.push_back(num);
    }

    if (v.size() == 0) cout << -1 << endl;
    else {
        cout << accumulate(v.begin(), v.end(), 0) << endl;
        cout << *min_element(v.begin(), v.end()) << endl;
    }

    return 0;
}