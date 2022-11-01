#include <iostream>
#include <queue>
#include <string>
#include <utility>
using namespace std;

int main(void){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    string board[1002];
    int f_dist[1002][1002];
    int j_dist[1002][1002];

    pair<int, int> dir[4] = {
        pair<int, int>(-1, 0),
        pair<int, int>(1, 0),
        pair<int, int>(0, -1),
        pair<int, int>(0, 1)
    };

    int r, c;

    cin >> r >> c;

    for (int i = 0; i < r; i++){
        cin >> board[i];
    }

    queue<pair<int, int> > f_q;
    queue<pair<int, int> > j_q;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if (board[i][j] == 'F'){
                f_q.push(pair<int, int>(i, j));
                f_dist[i][j] = 1;
            }

            if (board[i][j] == 'J'){
                j_q.push(pair<int, int>(i, j));
                j_dist[i][j] = 1;
            }
        }
    }

    while(!f_q.empty()){
        pair<int, int> cur = f_q.front();
        f_q.pop();

        for(int i = 0; i < 4; i++){
            int adjX = cur.first + dir[i].first;
            int adjY = cur.second + dir[i].second;

            if(adjX < 0 || adjX >= r || adjY < 0 || adjY >= c) continue;
            if(f_dist[adjX][adjY] > 0 || board[adjX][adjY] == '#') continue;

            f_dist[adjX][adjY] = f_dist[cur.first][cur.second] + 1;
            f_q.push(pair<int, int>(adjX, adjY));
        }
    }

    while(!j_q.empty()){
        pair<int, int> cur = j_q.front();
        j_q.pop();

        for(int i = 0; i < 4; i++){
            int adjX = cur.first + dir[i].first;
            int adjY = cur.second + dir[i].second;

            if(adjX < 0 || adjX >= r || adjY < 0 || adjY >= c) {
                cout << j_dist[cur.first][cur.second];
                return 0;
            }

            if(j_dist[adjX][adjY] > 0 || board[adjX][adjY] == '#') continue;
            if(f_dist[adjX][adjY] != 0 && f_dist[adjX][adjY] <= j_dist[cur.first][cur.second] + 1) continue;

            j_dist[adjX][adjY] = j_dist[cur.first][cur.second] + 1;
            j_q.push(pair<int, int>(adjX, adjY));
        }
    }

    cout << "IMPOSSIBLE";

}