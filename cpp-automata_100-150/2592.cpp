#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    vector<int> v(100);

    int sum = 0;
    for (int i = 1; i <= 10; i++){
        int num;

        cin >> num;

        v[num / 10]++;
        sum += num;
    }

    int avg = sum / 10;
    int mode = max_element(v.begin(), v.end()) - v.begin();

    cout << avg << endl;
    cout << mode * 10 << endl;

    return 0;
}