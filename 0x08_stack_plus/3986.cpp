#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void){
    int num;
    cin >> num;

    int cnt = 0;
    while(num--){
        string str;
        cin >> str;

        stack<char> s;

        for (int i = 0; i < str.size(); i++){
            if (!s.empty() && str[i] == s.top()) s.pop();
            else s.push(str[i]);
        }

        if (s.empty()) cnt++; 
    }

    cout << cnt << "\n";
}