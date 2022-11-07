#include <iostream>
using namespace std;

int a[1000002];
int b[1000002];
int res[2000005];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;


    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < m; i++){
        cin >> b[i];
    }

    int a_idx = 0;
    int b_idx = 0;
    for (int i = 0; i < n + m; i++){
        if(a_idx == n) {
            res[i] = b[b_idx];
            b_idx++;
        } 
        else if (b_idx == m){
            res[i] = a[a_idx];
            a_idx++;
        }
        else if (a[a_idx] <= b[b_idx]) {
            res[i] = a[a_idx];
            a_idx++;
        }
        else{
            res[i] = b[b_idx];
            b_idx++;
        }
    }

    

    for (int i = 0; i < n + m; i++){
        cout << res[i] << " ";
    }  
}