#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<int> v;
    for (int i = 1; i <= 5; i++){
        int score;
        
        cin >> score;
        v.push_back(score);
    }

    int sum = 0;
    for(int i = 0; i <= 5; i++){
        sum += v[i];
    }

    cout << sum << endl;

    return 0;
}