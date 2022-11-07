#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int arr[102][102];
int dist[102][102];
int direct[102][102];

pair<int, int> dir[8] = {
    pair<int, int>(-1, 1),
    pair<int, int>(1, 1),
    pair<int, int>(1, -1),
    pair<int, int>(-1, -1),
    pair<int, int>(-1, 0),
    pair<int, int>(1, 0),
    pair<int, int>(0, -1),
    pair<int, int>(0, 1)
};

queue<pair<int, int> > q;

int solution(vector<string> worldmap) {
    int answer = 0;
    for (int i = 0; i < worldmap.size(); i++){
        for (int j = 0; j < worldmap.size(); j++){
            if (worldmap[i][j] == 'X') arr[i][j] = 1;
        }
    }

    dist[0][0] = 1;
    q.push(pair<int, int>(0, 0));
    
    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();

        for (int i = 0; i < 8; i++){
            int adjX = cur.first + dir[i].first;
            int adjY = cur.second + dir[i].second;

            if(adjX < 0 || adjX >= worldmap.size() || adjY < 0 || adjY >= worldmap.size()) continue;
            if(dist[adjX][adjY] > 0 || arr[adjX][adjY]) continue;
            if(direct[adjX][adjY])

            dist[adjX][adjY] = dist[cur.first][cur.second] + 1;
            direct[adjX][adjY] = i;
            q.push(pair<int, int>(adjX, adjY));
        }
    }

    for (int i = 0; i < worldmap.size(); i++){
        for (int j = 0; j < worldmap.size(); j++){
            cout << direct[i][j] << " ";
        }
        cout << "\n";
    }

    answer = dist[worldmap.size()-1][worldmap.size()-1];

    return answer;
}

int main(void){
    vector<string> map(5);
    map[0] = "..XXX";
    map[1] = "X.X.X";
    map[2] = "X..X.";
    map[3] = "XXXX.";
    map[4] = "XXXX.";
    int res = solution(map);

    cout <<res;
}