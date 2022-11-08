#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<pair<pair<int, int>, pair<int, string> > > v;

    for(int i = 0; i < N; i++){
        string name;
        int kor, eng, math;

        cin >> name >> kor >> eng >> math;

        v.push_back(make_pair(make_pair(-kor, eng), make_pair(-math, name)));
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < N; i++){
        cout << v[i].second.second << "\n";
    }
}