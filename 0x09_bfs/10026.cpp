#include <iostream>
#include <queue>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;

int n;

string board[200];
int isVisited[200][200];

pair<int, int> dir[4] = {
    pair<int, int>(-1, 0),
    pair<int, int>(1, 0),
    pair<int, int>(0, -1),
    pair<int, int>(0, 1)
};

void bfs(int x, int y){
    queue<pair<int, int> > q;

    isVisited[x][y] = 1;
    q.push(pair<int, int>(x, y));

    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();

        for(int i = 0; i < 4; i++){
            int adjX = cur.first + dir[i].first;
            int adjY = cur.second + dir[i].second;

            if(adjX < 0 || adjX >= n || adjY < 0 || adjY >= n) continue;
            if (isVisited[adjX][adjY] == true || board[x][y] != board[adjX][adjY]) continue;

            isVisited[adjX][adjY] = true;
            q.push(pair<int, int>(adjX, adjY));
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> board[i];
    }
    
    int num1 = 0; 
    int num2 = 0;

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (!isVisited[i][j]) {
                num1++;
                bfs(i, j);
            }
        }
    }

    for (int i = 0; i < n; i++){
        fill(isVisited[i], isVisited[i] + n, false);
    }

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 'R') board[i][j] = 'G';
        }
    }

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (!isVisited[i][j]) {
                num2++;
                bfs(i, j);
            }
        }
    }

    cout << num1 << " " << num2;

}