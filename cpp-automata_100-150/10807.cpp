#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int num;

    cin >> num;

    vector<int> v;

    for (int i = 1; i <= num; i++){
        int n;

        cin >> n;

        v.push_back(n);
    }

    int find, cnt = 0;

    cin >> find;

    for (int i = 0; i < num; i++){
        if (v[i] == find) cnt++;
    }

    cout << cnt << endl;

    return 0;
}