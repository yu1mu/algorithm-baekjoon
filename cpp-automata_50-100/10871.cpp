#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n, x;
    vector<int> v;

    cin >> n >> x;

    for (int i = 1; i <= n; i++){
        int a;
        cin >> a;

        if (a < x) v.push_back(a);
    }

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}