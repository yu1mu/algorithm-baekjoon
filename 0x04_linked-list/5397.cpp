#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    while(num--){
        string s;

        cin >> s;

        list<char> password;
        list<char>::iterator cursor = password.end();
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '<' && !password.empty() && cursor != password.begin()){
                cursor--;
            }
            else if (s[i] == '>' && !password.empty() && cursor != password.end()){
                cursor++;
            }
            else if (s[i] == '-' && !password.empty() && cursor != password.begin()){
                cursor--;
                cursor = password.erase(cursor);
            }
            else if (s[i] != '<' && s[i] != '>' && s[i] != '-') {
                password.insert(cursor, s[i]);
            }
        }

        for (list<char>::iterator it = password.begin(); it != password.end(); it++){
            cout << *it;
        }

        cout << "\n";
    }    
}