#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long arr[100001];

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    sort(arr, arr + N);

    long long res;
    int max = 1;
    int cnt = 1;

    res = arr[0];

    for(int i = 1; i < N; i++){
        if(arr[i] == arr[i - 1]) cnt++;
        else cnt = 1;

        if (cnt > max){
            max = cnt;
            res = arr[i];
        }
    }

    cout << res;
}