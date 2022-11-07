#include <iostream>
#include <algorithm>
using namespace std;

int m = 6;
int n;

int arr[20];
int num[20];
bool isUsed[20];

void func(int k){
    if (k == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++){
        if(!isUsed[i] && arr[k - 1] < num[i]){
            arr[k] = num[i];
            isUsed[i] = true;
            func(k+1);
            isUsed[i] = false;
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1){
        cin >> n;

        if (n == 0) return 0;
        
        for(int i = 0; i < n; i++){
            cin >> num[i];
        }
        
        func(0);

        cout << "\n";

        fill(arr, arr + n, 0);
        fill(num, num + n, 0);
        fill(isUsed, isUsed + n, 0);
    }
}