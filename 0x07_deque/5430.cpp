#include <iostream>
#include <string>
#include <deque>
using namespace std;


void parse(string s, deque<int>& dq){
    string token;
    for (int i = 0; i < s.size(); i++){
        if (isdigit(s[i])){
            token += s[i];
        }
        else {
            if(!token.empty()){
                dq.push_back(stoi(token));
                token = "";
            }
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        string p, arr;
        int n;

        cin >> p >> n >> arr;

        deque<int> dq;
        parse(arr, dq);

        bool err = false, reverse = false;
        for (int i = 0; i < p.size(); i++){
            if (p[i] == 'R') reverse = !reverse;
            else if (p[i] == 'D' && !reverse){
                if (dq.empty()) err = true;
                else dq.pop_front();
            }
            else if (p[i] == 'D' && reverse){
                if (dq.empty()) err = true;
                else dq.pop_back();
            }
        }

        if (err) cout << "error" << "\n";
        else {
            cout << "[";
            if (reverse){
                for (int i = dq.size() - 1; i >= 0; i--){
                    if (i == 0) cout << dq[i];
                    else cout << dq[i] << ",";
                }
            }
            else{
                for (int i = 0; i < dq.size(); i++){
                    if (i == dq.size() - 1) cout << dq[i];
                    else cout << dq[i] << ",";
                }
            }
            cout << "]\n";
        }
    }
}