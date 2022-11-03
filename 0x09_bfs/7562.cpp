#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int board[310][310];
int dist[310][310];

pair<int, int> dir[8] = {
    pair<int, int>(-2, -1),
    pair<int, int>(-1, -2),
    pair<int, int>(1, -2),
    pair<int, int>(2, -1),
    pair<int, int>(-2, 1),
    pair<int, int>(-1, 2),
    pair<int, int>(1, 2),
    pair<int, int>(2, 1)
};

queue<pair<int, int> > q;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    while(num--){
        int l, x, y, tar_x, tar_y;

        cin >> l;
        cin >> x >> y;
        cin >> tar_x >> tar_y;

        for (int i = 0; i < l; i++){
            fill(dist[i], dist[i] + l, -1);
        }

        dist[x][y] = 0;
        q.push(pair<int, int>(x, y));

        while(!q.empty()){
            pair<int, int> cur = q.front();
            q.pop();

            for(int i = 0; i < 8; i++){
                int adjX = cur.first + dir[i].first;
                int adjY = cur.second + dir[i].second;

                if(adjX < 0 || adjX >= l || adjY < 0 || adjY >= l) continue;
                if(dist[adjX][adjY] >= 0) continue;

                dist[adjX][adjY] = dist[cur.first][cur.second] + 1;
                q.push(pair<int, int>(adjX, adjY));
            }
        }

        cout << dist[tar_x][tar_y] << "\n";
    }
}