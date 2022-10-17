#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    list<char> str;
    string s1;

    cin >> s1;

    for (int i = 0; i < s1.size(); i++){
        str.push_back(s1[i]);
    }

    int num;

    cin >> num;

    list<char>::iterator cursor = str.end();

    for (int i = 0; i < num; i++){
        char command;
        cin >> command;

        if (command == 'L' && cursor != str.begin()){
            cursor--;
        }
        else if (command == 'D' && cursor != str.end()){
            cursor++;
        }
        else if (command == 'B' && cursor != str.begin()){
            cursor--;
            cursor = str.erase(cursor);
        }
        else if (command == 'P'){
            char c;
            cin >> c;
            str.insert(cursor, c);
        }
    }

    for (list<char>::iterator it = str.begin(); it != str.end(); it++){
        cout << *it;
    }

    cout << "\n";
}