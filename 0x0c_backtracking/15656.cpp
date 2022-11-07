#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int num[10];
int arr[10];

void func(int k){
    if(k == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;    
    }

    for (int i = 0; i < n; i++){
        arr[k] = num[i];
        func(k+1);
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> num[i];
    }

    sort(num, num + n);

    func(0);
}