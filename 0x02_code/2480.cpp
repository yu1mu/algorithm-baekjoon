#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    vector<int> v;

    cin >> a >> b >> c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    int arr[6] = {0};

    for (int i = 0; i < v.size(); i++){
        arr[v[i] - 1]++;
    }

    int sum = 0;
    int flag = 0;
    for (int i = 0; i < 6; i++){
        if (flag == 0){
            if (arr[i] == 3) {
                sum += 10000 + (i + 1) * 1000;
                flag++;
            }
            else if (arr[i] == 2) {
                sum += 1000 + (i + 1) * 100;
                flag++;
            }
        }
        else break;
    }

    if (flag == 0){
        int max = *max_element(v.begin(), v.end());
        sum += max * 100;
    }

    cout << sum << "\n";
}