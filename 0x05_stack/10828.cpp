#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    stack<int> s;

    while(num--){
        string command;
        cin >> command;

        if (command == "push"){
            int value;
            cin >> value;

            s.push(value);
        }

        else if (command == "pop"){
            if (s.empty()) cout << -1 << "\n";
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        }

        else if (command == "size"){
            cout << s.size() << "\n";
        }

        else if (command == "empty"){
            cout << s.empty() << "\n";
        }

        else if (command == "top"){
            if (s.empty()) cout << -1 << "\n";
            else cout << s.top() << "\n";
        }
    }
}