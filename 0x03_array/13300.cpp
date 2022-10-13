#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int student[7][2] = {0};

    int n, k;

    cin >> n >> k;

    for (int i = 0; i < n; i++){
        int s, y;

        cin >> s >> y;

        student[y][s]++;
    }

    int cnt = 0;

    for (int i = 1; i <= 6; i++){
        for (int j = 0; j <= 1; j++){
            if (student[i][j] % k == 0) cnt += student[i][j] / k;
            else cnt += (student[i][j] / k) + 1;
        }
    }

    cout << cnt << "\n";

}