#include <iostream>
#include <array>
using namespace std;

array<int, 10002> arr;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    for(int i = 0; i < num; i++){
        int n;
        cin >> n;
        arr[n]++;
    }

    for(int i = 0; i < arr.size(); i++){
        if (arr[i]){
            for (int j = 1; j <= arr[i]; j++){
                cout << i << "\n";
            }
        }
    }
}