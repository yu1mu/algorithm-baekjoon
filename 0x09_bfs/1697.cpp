#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main(void){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    int n, k;

    cin >> n >> k;

    int dist[100002];

    fill(dist, dist + 100001, -1);

    queue<int> q;

    dist[n] = 0;
    q.push(n);

    while(dist[k] == -1){
        int cur = q.front();
        q.pop();

        int next[3] = {cur - 1, cur + 1, cur * 2};

        for(int i = 0; i < 3; i++){
            if(next[i] < 0 || next[i] > 100000) continue;
            if(dist[next[i]] != -1) continue;
            dist[next[i]] = dist[cur] + 1;
            q.push(next[i]);
        }
    }

    cout << dist[k];
}