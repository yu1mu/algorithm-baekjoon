#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int arr[1000002];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    queue<int> q;

    arr[1] = 0;
    q.push(1);

    while(!q.empty()){
        int cur = q.front();
        q.pop();

        if(cur == n){
            cout << arr[cur];
            return 0;
        }

        for(int i = 0; i < 3; i++){
            int next;
            if (i == 0) next = cur + 1;
            else next = cur * (i + 1);

            if(next > n) continue;
            if(arr[next] == 0) arr[next] = arr[cur] + 1;
            else continue;

            q.push(next);
        }
    }
}