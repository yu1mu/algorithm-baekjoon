#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        string s1, s2;

        cin >> s1 >> s2;

        int arr1[26] = {};
        int arr2[26] = {};

        for (int j = 0; j < s1.size(); j++){
            arr1[s1[j] - 'a']++;
        }

        for (int j = 0; j < s2.size(); j++){
            arr2[s2[j] - 'a']++;
        }

        if (equal(arr1, arr1 + 25, arr2)) cout << "Possible" << "\n";
        else cout << "Impossible" << "\n";

    }
}