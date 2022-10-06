#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<int> v(43);
    for(int i = 1; i <= 10; i++){
        int num;

        cin >> num;

        v[num % 42]++;
    }

    int sum = 0;
    for (int i = 0; i < 43; i++){
        if (v[i] > 0) sum++;
    }

    cout << sum << endl;

    return 0;
}