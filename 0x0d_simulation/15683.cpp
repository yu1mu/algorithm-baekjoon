#include <iostream>
#include <queue>
using namespace std;

int main(void){
    int n, m;
    cin >> n >> m;

    int arr[10][10];

    queue<pair<int, int> > q;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int tmp;
            cin >> tmp;
            arr[j][i] = tmp;

            if (tmp > 0 && tmp != 6){
                q.push(pair<int,int>(j, i));
            }
        }
    }

    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();

        int x = cur.first;
        int y = cur.second;

        int cctv = arr[x][y];
        
        if(cctv == 1){
            for(int i = x; i < m; i++){
                if(arr[i][y] == 6) break;
                if(arr[i][y] == 0) arr[i][y] = -1;
            }
        }

        else if(cctv == 2){
            for(int i = x; i < m; i++){
                if(arr[i][y] == 6) break;
                if(arr[i][y] == 0) arr[i][y] = -1;
            }

            for(int i = x; i >= 0; i--){
                if(arr[i][y] == 6) break;
                if(arr[i][y] == 0) arr[i][y] = -1;
            }
        }

        else if(cctv == 3){
            for(int i = x; i < m; i++){
                if(arr[i][y] == 6) break;
                if(arr[i][y] == 0) arr[i][y] = -1;
            }

            for(int i = y; i >= 0; i--){
                if(arr[x][i] == 6) break;
                if(arr[x][i] == 0) arr[x][i] = -1;
            }
        }

        else if(cctv == 4){
            for(int i = x; i < m; i++){
                if(arr[i][y] == 6) break;
                if(arr[i][y] == 0) arr[i][y] = -1;
            }

            for(int i = x; i >= 0; i--){
                if(arr[i][y] == 6) break;
                if(arr[i][y] == 0) arr[i][y] = -1;
            }

            for(int i = y; i >= 0; i--){
                if(arr[x][i] == 6) break;
                if(arr[x][i] == 0) arr[x][i] = -1;
            }
        }

        else if(cctv == 5){
            for(int i = x; i < m; i++){
                if(arr[i][y] == 6) break;
                if(arr[i][y] == 0) arr[i][y] = -1;
            }

            for(int i = x; i >= 0; i--){
                if(arr[i][y] == 6) break;
                if(arr[i][y] == 0) arr[i][y] = -1;
            }

            for(int i = y; i >= 0; i--){
                if(arr[x][i] == 6) break;
                if(arr[x][i] == 0) arr[x][i] = -1;
            }

            for(int i = y; i < n; i++){
                if(arr[x][i] == 6) break;
                if(arr[x][i] == 0) arr[x][i] = -1;
            }
        }
    }
    cout << "\n";

    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }
}