#include <iostream>
#include <string>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[26] = {0};
    string s;

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        arr[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
}