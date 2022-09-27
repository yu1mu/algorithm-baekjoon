#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    int num = 0;

    cin >> num;

    vector<pair<pair<int, int>, pair<int, string> > > v(num);
    for (int i = 0; i < num; i++){
        cin >> v[i].second.second >> v[i].second.first >> v[i].first.second >> v[i].first.first;
    }

    sort(v.begin(), v.end());

    cout << v[num - 1].second.second << endl;
    cout << v[0].second.second << endl;

}