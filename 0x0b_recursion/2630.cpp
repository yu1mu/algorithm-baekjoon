#include <iostream>
using namespace std;

int paper[130][130];
int N;
int cnt[2];

bool check(int x, int y, int n){
    for (int i = x; i < x + n; i++){
        for (int j = y; j < y + n; j++){
            if (paper[x][y] != paper[i][j]) return false;
        }
    }
    return true;
}

void cut(int x, int y, int n){
    if (check(x, y, n)){
        cnt[paper[x][y]] += 1;
        return;
    }

    n /= 2;

    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cut(x + i*n, y + j*n, n);
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    
    for (int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> paper[i][j];
        }
    }

    cut(0, 0, N);

    for(int i = 0; i < 2; i++){
        cout << cnt[i] << "\n";
    }
}