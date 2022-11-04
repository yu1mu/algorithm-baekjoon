#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main(void){
    cout << "Input: ";
    string s;
    cin >> s;

    vector<string> words;

    stringstream sstream(s);
    string token;

    while(getline(sstream, token, '.')){
        words.push_back(token);
    }

    cout << "Output: " <<"\n";
    for(int i = 0; i < words.size(); i++){
        cout << words[i] << "\n";
    }
}
