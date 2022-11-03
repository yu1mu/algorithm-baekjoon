#include <iostream>
#include <queue>
#include <string>
#include <utility>
using namespace std;

int board[1002][1002];

int f_dist[1002][1002];
int s_dist[1002][1002];

pair<int, int> dir[4] = {
    pair<int, int>(-1, 0),
    pair<int, int>(1, 0),
    pair<int, int>(0, -1),
    pair<int, int>(0, 1)
};


int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    while(num--){
        int w, h;
        cin >> w >> h;
        
        queue<pair<int, int> > f_q;
        queue<pair<int, int> > s_q;

        for(int i = 0; i < h; i++){
            fill(f_dist[i], f_dist[i] + w, 0);
            fill(s_dist[i], s_dist[i] + w, 0);
        }

        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                char c;
                cin >> c;
                if(c == '@'){
                    s_q.push(pair<int, int>(i, j));
                    s_dist[i][j] = 1;
                }
                
                if(c == '*'){
                    f_q.push(pair<int, int>(i, j));
                    f_dist[i][j] = 1;
                }

                if(c == '#') board[i][j] = -1;
                if(c == '.') board[i][j] = 0;
            }
        }

        while(!f_q.empty()){
            pair<int, int> cur = f_q.front();
            f_q.pop();

            for(int i = 0; i < 4; i++){
                int adjX = cur.first + dir[i].first;
                int adjY = cur.second + dir[i].second;

                if(adjX < 0 || adjX >= h || adjY < 0 || adjY >= w) continue;
                if(f_dist[adjX][adjY] || board[adjX][adjY] == -1) continue;

                f_dist[adjX][adjY] = f_dist[cur.first][cur.second] + 1;
                f_q.push(pair<int, int>(adjX, adjY));
            }
        }
        
        bool check = false;

        while((!s_q.empty()) && (check == false)){
            pair<int, int> cur = s_q.front();
            s_q.pop();

            for(int i = 0; i < 4; i++){
                int adjX = cur.first + dir[i].first;
                int adjY = cur.second + dir[i].second;

                if(adjX < 0 || adjX >= h || adjY < 0 || adjY >= w){
                    cout << s_dist[cur.first][cur.second] << "\n";
                    check = true;
                    break;
                }
                
                if (s_dist[adjX][adjY] || board[adjX][adjY] == -1) continue;
                if (f_dist[adjX][adjY] != 0 && f_dist[adjX][adjY] <= s_dist[cur.first][cur.second] + 1) continue;

                s_dist[adjX][adjY] = s_dist[cur.first][cur.second] + 1;
                s_q.push(pair<int, int>(adjX, adjY));
            }
        }

        if (check == false) cout << "IMPOSSIBLE" << "\n";
    }
}