#include <iostream>
#include <string>
#include <queue>
#include <utility>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string board[102];

    int n, m;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> board[i];
    }

    int dist[102][102];

    pair<int, int> dir[4] = {
        pair<int, int>(-1, 0),
        pair<int, int>(1, 0),
        pair<int, int>(0, -1),
        pair<int, int>(0, 1)
    };

    queue<pair<int, int> > q;

    dist[0][0] = 1;
    q.push(pair<int, int>(0, 0));

    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();

        for(int i = 0; i < 4; i++){
            int adjX = cur.first + dir[i].first;
            int adjY = cur.second + dir[i].second;

            if(adjX < 0 || adjX >= n || adjY < 0 || adjY >= m) continue;
            if(dist[adjX][adjY] > 0 || board[adjX][adjY] == '0') continue;

            dist[adjX][adjY] = dist[cur.first][cur.second] + 1;
            q.push(pair<int, int>(adjX, adjY));
        }
    }

    cout << dist[n-1][m-1];

}