#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(true){
        string str;
        getline(cin, str);
        if (str == ".") break;

        stack<int> s;

        bool isbalance = true;
        for (int i = 0; i < str.size(); i++){
            if (str[i] == '[') s.push(str[i]);
            else if (str[i] == ']'){
                if (s.empty() || s.top() != '[') {
                    isbalance = false;
                    break;
                }
                else s.pop();
            }
            if (str[i] == '(') s.push(str[i]);
            else if (str[i] == ')'){
                if (s.empty() || s.top() != '(') {
                    isbalance = false;
                    break;
                }
                else s.pop();
            }
        }

        if (!s.empty()) isbalance = false;
        if (isbalance) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
}