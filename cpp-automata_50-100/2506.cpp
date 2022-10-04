#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int num;

    cin >> num;
    vector<int> v;
    for (int i = 1; i <= num; i++){
        int score;

        cin >> score;
        v.push_back(score);
    }

    int score = 0;
    int bonus = 1;

    if (v[0] == 1){
        score++;
    }
    for (int i = 1; i < num; i++){
        if (v[i] == 1){
            if (v[i - 1] == 1) {
                bonus++;
                score += bonus;
            }
            else {
                score++;
                bonus = 1;
            }
        }
    }

    cout << score << endl;

    return 0;
}