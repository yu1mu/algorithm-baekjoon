#include <iostream>
#include <queue>
#include <algorithm>
#include <utility>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;

    cin >> n >> m;

    int arr[600][600];
    bool isVisited[600][600];

    pair<int, int> dir[4] = {
        pair<int, int>(-1, 0),
        pair<int, int>(1, 0),
        pair<int, int>(0, -1),
        pair<int, int>(0, 1)
    };
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int num = 0;
    int mx = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] == 0 || isVisited[i][j] == true) continue;
            num++;
            queue<pair<int, int> > q;

            isVisited[i][j] = 1;
            q.push(pair<int, int>(i, j));
            
            int tmp = 0;

            while(!q.empty()){
                tmp++;
                pair<int, int> cur = q.front();
                q.pop();

                for(int k = 0; k < 4; k++){
                    int adjX = cur.first + dir[k].first;
                    int adjY = cur.second + dir[k].second;

                    if(adjX < 0 || adjX >= n || adjY < 0 || adjY >= m) continue;
                    if (isVisited[adjX][adjY] == true || arr[adjX][adjY] == 0) continue;

                    isVisited[adjX][adjY] = true;
                    q.push(pair<int, int>(adjX, adjY));
                }
            }

            mx = max(mx, tmp);
        }
    }
    
    cout << num << "\n" << mx;

}