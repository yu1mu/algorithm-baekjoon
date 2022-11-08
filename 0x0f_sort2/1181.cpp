#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(const string &a, const string &b){
    if(a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<string> v;
    for (int i = 0; i < N; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), compare);

    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
}