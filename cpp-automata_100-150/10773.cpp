#include <iostream>
#include <stack>
using namespace std;

int main(void){
    int num;

    cin >> num;

    stack<int> s;

    for (int i = 0; i < num; i++){
        int n;

        cin >> n;

        if (n != 0) s.push(n);
        else s.pop();
    }

    int sum = 0;
    int len = s.size();

    for (int i = 0; i < len; i++){
        sum += s.top();
        s.pop();
    }

    cout << sum << endl;

    return 0;
}