#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    vector<pair<int, int> > v;
    for (int i = 1; i <= 8; i++){
        int score;

        cin >> score;

        v.push_back(make_pair(score, i));
    }
    sort(v.begin(), v.end(), greater<pair<int, int> >());
    
    int sum = 0;
    for (int i = 0; i < 5; i++){
        sum += v[i].first;
    }

    cout << sum << endl;

    vector<int> num;
    for (int i = 0; i < 5; i++){
        num.push_back(v[i].second);
    }

    sort(num.begin(), num.end());

    for (int i = 0; i < 5; i++){
        cout << num[i] << " ";
    }

    cout << endl;

    return 0;
    
}