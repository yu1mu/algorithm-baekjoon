#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<pair<int, int> > v;

    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
    
}