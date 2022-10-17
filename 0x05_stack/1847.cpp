#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void){
    int num;
    cin >> num;

    stack<int> s;

    int cnt = 1;
    string ans;
    while(num--){
        int n;
        cin >> n;

        while(cnt <= n){
            s.push(cnt);
            cnt++;
            ans += "+\n";
        }

        if (s.top() != n) {
            cout << "NO\n";
            return 0;
        }

        s.pop();
        ans += "-\n";
    }

    cout << ans << "\n";
}