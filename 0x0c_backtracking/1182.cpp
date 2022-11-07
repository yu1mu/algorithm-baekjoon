#include <iostream>
using namespace std;

int N, S;

int arr[20];
int cnt = 0;

void func(int cur, int sum){
    if(cur == N){
        if(sum == S) cnt++;
        return;
    }
    // 두갈래로 분기
    func(cur + 1, sum); // 현재의 수 수열에 추가 X
    func(cur + 1, sum + arr[cur]); // 현재의 수 수열에 추가 O 
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> S;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    func(0, 0);

    if (S == 0) cnt--;

    cout << cnt << "\n";

}