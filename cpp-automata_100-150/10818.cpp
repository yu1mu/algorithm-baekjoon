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

    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());

    cout << min << " " << max << endl;

    return 0;
}