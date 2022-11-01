#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; 
    cin >> t;

    pair<int, int> dir[4] = {
        pair<int, int>(-1, 0),
        pair<int, int>(1, 0),
        pair<int, int>(0, -1),
        pair<int, int>(0, 1)
    };

    while(t--){
        int m, n, k;

        int board[52][52] = {};
        bool isVisited[52][52] = {};

        cin >> m >> n >> k;

        for (int i = 0; i < k; i++){
            int x, y;
            cin >> x >> y;
            board[y][x] = 1;
        }

        int num = 0;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if(board[i][j] == 0 || isVisited[i][j]) continue;
                num++;

                queue<pair<int, int> > q;

                isVisited[i][j] = 1;
                q.push(pair<int, int>(i, j));

                while(!q.empty()){
                    pair<int, int> cur = q.front();
                    q.pop();

                    for(int i = 0; i < 4; i++){
                        int adjX = cur.first + dir[i].first;
                        int adjY = cur.second + dir[i].second;

                        if (adjX < 0 || adjX >= n || adjY < 0 || adjY >= m) continue;
                        if (isVisited[adjX][adjY] == true || board[adjX][adjY] == 0) continue;

                        isVisited[adjX][adjY] = true;
                        q.push(pair<int, int>(adjX, adjY));
                    }
                }
            }
        }

        cout << num << "\n";

    }
}