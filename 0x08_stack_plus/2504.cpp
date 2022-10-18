#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void){
    string str;
    cin >> str;

    stack<char> s;

    int res = 0, temp = 1;
    bool isValid = true;
    for (int i = 0; i < str.size(); i++){
        if (str[i] == '('){
            s.push(str[i]);
            temp *= 2;
        }
        else if (str[i] == '['){
            s.push(str[i]);
            temp *= 3;
        } 
        else if (str[i] == ')'){
            if(s.empty() || s.top() != '(') {
                cout << 0 << "\n";
                return 0;
            } 
            else{
                if (str[i - 1] == '(') res += temp;
                s.pop();
                temp /= 2;
            }
        }
        else if (str[i] == ']'){
            if(s.empty() || s.top() != '['){
                cout << 0 << "\n";
                return 0;
            }
            else{
                if (str[i - 1] == '[') res += temp;
                s.pop();
                temp /= 3;
            }
        }
    }
    if (!s.empty()) cout << 0 << "\n";
    else cout << res << "\n";
}