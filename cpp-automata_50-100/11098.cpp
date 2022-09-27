#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

int main(void){
    int case_num;

    cin >> case_num;

    vector<pair<int, string> > v;
    vector<string> n;

    for (int i = 0; i < case_num; i++){
        int player_num = 0;

        cin >> player_num;
        v.clear();

        for (int j = 0; j < player_num; j++){
            int c;
            string name;

            cin >> c >> name;
            v.push_back(make_pair(c, name));
        }

        sort(v.begin(), v.end(), greater<pair<int, string> >());

        n.push_back(v[0].second);
    }

    for (int i = 0; i < n.size(); i++){
        cout << n[i] << endl;
    }
}