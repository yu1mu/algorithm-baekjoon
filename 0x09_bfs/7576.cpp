#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main(void){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    int board[1002][1002];
    int dist[1002][1002];

    pair<int, int> dir[4] = {
        pair<int, int>(-1, 0),
        pair<int, int>(1, 0),
        pair<int, int>(0, -1),
        pair<int, int>(0, 1)
    };

    int m, n;

    cin >> m >> n;

    queue<pair<int, int> > q;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> board[i][j];

            if (board[i][j] == 1) q.push(pair<int, int>(i, j));
            if (board[i][j] == 0) dist[i][j] = -1;
        }
    }

    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();

        for(int i = 0; i < 4; i++){
            int adjX = cur.first + dir[i].first;
            int adjY = cur.second + dir[i].second;

            if(adjX < 0 || adjX >= n || adjY < 0 || adjY >= m) continue;
            if(dist[adjX][adjY] >= 0) continue;

            dist[adjX][adjY] = dist[cur.first][cur.second] + 1;
            q.push(pair<int, int>(adjX, adjY));
        }
    }

    int res = 0;

    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (dist[i][j] == -1){
                cout << -1;
                return 0;
            }
            res = max(res, dist[i][j]);
        }
    }

    cout << res;
}