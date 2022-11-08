#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

bool compare(const string &a, const string &b){
    int cnt_a = 0;
    int cnt_b = 0;

    for(int i = 0; i < a.size(); i++){
            if (isdigit(a[i])) cnt_a += a[i] - '0';
        }

        for (int i = 0; i < b.size(); i++){
            if(isdigit(b[i])) cnt_b += b[i] - '0';
        }


    if (a.size() != b.size()) return a.size() < b.size();

    if (cnt_a != cnt_b) return cnt_a < cnt_b;

    return a < b;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<string> v;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;

        v.push_back(s);
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < N; i++){
        cout << v[i] << "\n";
    }
}