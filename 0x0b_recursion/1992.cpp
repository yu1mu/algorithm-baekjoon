#include <iostream>
using namespace std;

int video[70][70];
int N;

bool check(int x, int y, int n){
    for (int i = x; i < x + n; i++){
        for (int j = y; j < y + n; j++){
            if (video[x][y] != video[i][j]) return false;
        }
    }
    return true;
}

void compress(int x, int y, int n){
    if (n == 1){
        cout << video[x][y];
        return;
    }

    if(check(x, y, n)){
        cout << video[x][y];
        return;
    }

    n /= 2;
    cout << "(";
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            compress(x + i* n, y + j* n, n);
        }
    }
    cout << ")";
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            char c;
            cin >> c;

            video[i][j] = c - '0';
        }
    }

    compress(0, 0, N);
}