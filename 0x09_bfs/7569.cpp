#include <iostream>
#include <queue>
#include <tuple>
#include <utility>
#include <algorithm>
using namespace std;

int board[103][103][103];
int dist[103][103][103];

tuple<int, int, int> dir[6] = {
    tuple<int, int, int>(-1, 0, 0),
    tuple<int, int, int>(1, 0, 0),
    tuple<int, int, int>(0, -1, 0),
    tuple<int, int, int>(0, 1, 0),
    tuple<int, int, int>(0, 0, -1),
    tuple<int, int, int>(0, 0, 1)
};

int main(void){
    int m, n, h;

    cin >> m >> n >> h;

    queue<tuple<int, int, int> > q;

    for (int i = 0; i < h; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < m; k++){
                int tmp;
                cin >> tmp;
                board[j][k][i] = tmp;

                if (tmp == 0) dist[j][k][i] = -1;
                if (tmp == 1) q.push(tuple<int, int, int>(j, k, i));
            }
        }
    }

    while(!q.empty()){
        tuple<int, int, int> cur = q.front();
        q.pop();

        for(int i = 0; i < 6; i++){
            int adjX = get<0>(cur) + get<0>(dir[i]);
            int adjY = get<1>(cur) + get<1>(dir[i]);
            int adjZ = get<2>(cur) + get<2>(dir[i]);

            if (adjX < 0 || adjX >= n || adjY < 0 || adjY >= m || adjZ < 0 || adjZ >= h) continue;
            if(dist[adjX][adjY][adjZ] >= 0) continue;

            dist[adjX][adjY][adjZ] = dist[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            q.push(tuple<int, int, int>(adjX, adjY, adjZ));
        }
    }
   
    int ans = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < m; k++) {
        if (dist[j][k][i] == -1) {
          cout << -1 << "\n";
          return 0;
        }
        ans = max(ans, dist[j][k][i]);
      }
    }
  }
  cout << ans << "\n";
  return 0;
}