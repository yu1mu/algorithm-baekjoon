#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    while(num--){
        string str;
        stack<char> s;

        cin >> str;

        bool isVPS = true;
        for (int i = 0; i < str.size(); i++){
            if (str[i] == '(') s.push(str[i]);
            else {
                if(s.empty() || s.top() != '(') {
                    isVPS = false;
                    break;
                }
                else s.pop();
            }
        }

        if(!s.empty()) isVPS = false;

        if (isVPS) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}