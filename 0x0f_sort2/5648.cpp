#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    
    vector<string> v1;
    vector<long long> v2;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        v1.push_back(s);
    }

    for(int i = 0; i < N; i++){
        reverse(v1[i].begin(), v1[i].end());
        v2.push_back(stoll(v1[i]));
    }

    sort(v2.begin(), v2.end());
    
    for (int i = 0; i < N; i++){
        cout << v2[i] << "\n";
    }
}
