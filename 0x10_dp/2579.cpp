#include <iostream>
using namespace std;

int score[305];
int d[305];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int total = 0;
    for (int i = 1; i <= n; i++){
        cin >> score[i];
        total += score[i];
    }

    if (n <= 2){
        cout << total << "\n";
        return 0;
    }

    d[1] = score[1];
    d[2] = score[2];
    d[3] = score[3];

    for (int i = 4; i <= n - 1; i++){
        d[i] = min(d[i - 2], d[i - 3]) + score[i];
    }

    cout << total - min(d[n - 1], d[n - 2]);

}