#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int num[10];
int arr[10];
bool isused[10];

void func(int k){
    if(k == m){
        for (int i = 0; i < m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= n; i++){
        if(!isused[i] && arr[k-1] <= num[i]){
            arr[k] = num[i];
            isused[i] = true;
            func(k+1);
            isused[i] = false;
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        cin >> num[i];
    }

    sort(num + 1, num + n + 1);

    func(0);
}