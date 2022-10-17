#include <iostream>
#include <stack>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;
    long long cnt = 0;

    stack<long long> s;

    for (int i = 0; i < num; i++){
        long long height;
        cin >> height;

        while(!s.empty() && s.top() <= height){
            s.pop();
        }
        cnt += s.size();
        s.push(height);
    }

    cout << cnt << "\n";
}