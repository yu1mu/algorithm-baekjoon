#include <iostream>
#include <stack>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    stack<pair<int, int> > s;
    int arr[1000001] = {0};
    for(int i = 1; i <= num; i++){
        int n;
        cin >> n;

        while(!s.empty() && s.top().second < n){
            arr[s.top().first] = n;
            s.pop();
        }
        s.push(make_pair(i, n));       
    }

    for (int i = 1; i <= num; i++){
        if (arr[i] == 0) arr[i] = -1;
        cout << arr[i] << " ";
    }
}