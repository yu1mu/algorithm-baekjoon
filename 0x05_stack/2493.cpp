#include <iostream>
#include <stack>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int num;
    cin >> num;

    stack<pair<int, int> > s;

    s.push(make_pair(0, 100000001));

    for (int i = 1; i <= num; i++){
        int height;

        cin >> height;

        while(s.top().second < height){
            s.pop();
        }
        cout << s.top().first << " ";

        s.push(make_pair(i, height));        
    }

    cout << "\n";
}