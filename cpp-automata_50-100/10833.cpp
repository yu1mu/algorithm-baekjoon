#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int num;

    cin >> num;

    vector<pair<int, int> > v;

    for (int i = 1; i <= num; i++){
        int student, apple;

        cin >> student >> apple;
        v.push_back(make_pair(student, apple));
    }

    int sum = 0;

    for (int i = 0; i < num; i++){
        sum += v[i].second % v[i].first;
    }

    cout << sum << endl;

    return 0;
}