#include <iostream>
using namespace std;

int main(void){
    int day, sum = 0;

    cin >> day;

    for (int i = 1; i <= 5; i++){
        int num;

        cin >> num;

        if(num == day) sum++;
    }

    cout << sum << endl;

    return 0;
}