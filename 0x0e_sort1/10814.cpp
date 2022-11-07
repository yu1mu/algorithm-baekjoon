#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<tuple<int, int, string> > v;

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int age;
        string name;

        cin >> age >> name;

        v.push_back({age, i, name});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++){
        cout << get<0>(v[i])<< " " << get<2>(v[i]) << "\n";
    }
}