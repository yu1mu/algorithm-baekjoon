#include <iostream>
using namespace std;

int N;
int cnt = 0;

bool isUsed1[100]; // same column
bool isUsed2[100]; // \ direction
bool isUsed3[100]; // / direction

void func(int cur){
    if(cur == N){
        cnt++;
        return;
    }

    for (int i = 0; i < N; i++){
        
        if(isUsed1[i] || isUsed2[cur - i + N - 1] || isUsed3[cur + i]) continue;
        isUsed1[i] = true;
        isUsed2[cur - i + N - 1] = true;
        isUsed3[cur + i] = true;
        func(cur + 1);
        isUsed1[i] = false;
        isUsed2[cur - i + N - 1] = false;
        isUsed3[cur + i] = false;
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    func(0);
    cout << cnt;
}