#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int num;
    vector<int> v;

    cin >> num;

    for (int i = 1; i <= num; i++){
        int n;
        cin >> n;
        v.push_back(n);
    }

    int sum = 0;
    for (int i = 0; i < num; i++){
        if(i != num - 1) sum += v[i] - 1;
        else sum += v[i];
    }

    cout << sum << "\n";

    return 0;
}