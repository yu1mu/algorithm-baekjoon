#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    int arr[10] = {0};

    int flag = 0;
    while(n != 0){
        int num = n % 10;
        n = n / 10;

        if (num == 9 || num == 6){
            if (flag == 0){
                arr[6]++;
                flag++;
            }
            else {
                arr[9]++;
                flag--;
            }
        }

        else arr[num]++;
    }
    
    int max = *max_element(arr, arr + 10);

    cout << max << "\n";
}