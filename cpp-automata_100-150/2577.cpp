#include <iostream>
using namespace std;

int main(void){
    int a, b, c;

    cin >> a >> b >> c;

    int num = a * b * c;

    int arr[10] = {0};

    while(true){
        if (num % 10 == num) {
            arr[num]++;
            break;
        }

        arr[num % 10]++;
        num = num / 10;
    }
    
    for (int i = 0; i < 10; i++){
        cout << arr[i] << "\n";
    }

    return 0;
}