#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b){
    return a.second > b.second;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, C;

    cin >> N >> C;

    vector<pair<int, int> > v;

    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        bool check = false;

        for(int j = 0; j < v.size(); j++){
            if(v[j].first == num){
                check = true;
                v[j].second++;
                break;
            }
        }

        if(check == false) v.push_back(pair<int, int>(num, 1));
    }

    stable_sort(v.begin(), v.end(), compare);

    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].second; j++){
            cout << v[i].first << " ";
        }
    }
    
}