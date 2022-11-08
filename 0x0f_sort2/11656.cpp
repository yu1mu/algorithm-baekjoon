#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int len = s.size();

    vector<string> v;
    for (int i = 0; i < len; i++){
        v.push_back(s);
        s.erase(s.begin());
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }

}