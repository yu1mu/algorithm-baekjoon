#include <iostream>
#include <string>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;

    cin >> s1 >> s2;

    int arr1[26] = {};
    int arr2[26] = {};

    for (int i = 0; i < s1.size(); i++){
        arr1[s1[i] - 'a']++;
    }

    for (int i = 0; i < s2.size(); i++){
        arr2[s2[i] - 'a']++;
    }

    int cnt = 0;
    for (int i = 0; i < 26; i++){
        if (arr1[i] != arr2[i]) cnt += abs(arr1[i] - arr2[i]);
    }

    cout << cnt << "\n";
}