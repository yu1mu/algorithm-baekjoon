#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void){
    string str;

    cin >> str;

    stack<char> s;

    int cnt = 0;
    for (int i = 0; i < str.size(); i++){
        if (str[i] == '(') s.push(str[i]);
        else {
            if (str[i - 1] == '(') {
                s.pop();
                cnt += s.size();
            }
            else {
                s.pop(); 
                cnt++;  
            }  
        }
    }
    cout << cnt << "\n";
}