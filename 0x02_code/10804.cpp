#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);

    vector<int> v;

    for (int i = 0; i <= 25; i++){
        v.push_back(i);
    }

    for (int i = 0; i < 10; i++){
        int a, b;

        cin >> a >> b;

        reverse(v.begin() + a,  v.begin()+ b + 1); 
    } 

    for (int i = 1; i <= 20; i++){
        cout << v[i] << " ";
    }

    cout << "\n";
}