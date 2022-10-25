#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main(void){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    int arr[100][100] = 
    { {1,1,1,0,1,0,0,0,0,0},
    {1,0,0,0,1,0,0,0,0,0},
    {1,1,1,0,1,0,0,0,0,0},
    {1,1,0,0,1,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0} };

    bool isVisited[100][100];

    pair<int, int> dir[4] = {
        pair<int, int>(-1, 0),
        pair<int, int>(1, 0),
        pair<int, int>(0, -1),
        pair<int, int>(0, 1)
    };ㅈ

    int n = 7, m = 10;

    queue<pair<int, int> > q;

    isVisited[0][0] = 1;
    q.push(pair<int, int>(0, 0));

    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();

        cout << "(" << cur.first << "," << cur.second << ") -> ";

        for(int i = 0; i < 4; i++){
            int adjX = cur.first + dir[i].first;
            int adjY = cur.second + dir[i].second;

            if(adjX < 0 || adjX >= n || adjY < 0 || adjY >= m) continue;
            if (isVisited[adjX][adjY] == true || arr[adjX][adjY] == 0) continue;

            isVisited[adjX][adjY] = true;
            q.push(pair<int, int>(adjX, adjY));
        }
    }
    cout << "end" << "\n";
}