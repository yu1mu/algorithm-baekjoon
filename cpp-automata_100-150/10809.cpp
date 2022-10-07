#include <iostream>
#include <string>
using namespace std;

int main(void){
    string s;

    cin >> s;

    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++){
        if (arr[s[i] - 97] == 0) arr[s[i] - 97] = i + 1;
    }

    for (int i = 0; i < 26; i++){
       cout << arr[i] - 1<< " ";
    }

    cout << endl;

    return 0;
}