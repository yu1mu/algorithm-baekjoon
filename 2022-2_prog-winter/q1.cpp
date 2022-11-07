#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string line) {
    string answer = "";
    answer += line[0];
    for (int i = 1; i < line.size(); i++){
        if (line[i - 1] == line[i]){
            if (*(answer.end() - 1) != '*'){
                answer += '*';
            }
            else continue;
        }           
        else answer += line[i];
    }
    return answer;
}

int main(void){
    string s;
    cin >> s;

    string res = solution(s);

    cout << res;
}