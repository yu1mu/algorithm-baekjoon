#include <iostream>
#include <bitset>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
    int num;

    cin >> num;

    for (int i = 1; i <= num; i++){
        int n;

        cin >> n;
        
        string bits = bitset<30>(n).to_string();
        reverse(bits.begin(), bits.end());

        vector<int> v;

        for (int i = 0; i < 30; i++){
            if(bits[i] == '1') v.push_back(i);
        }

        for (int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }

        cout << endl;

        v.clear();
    }

    return 0;
}