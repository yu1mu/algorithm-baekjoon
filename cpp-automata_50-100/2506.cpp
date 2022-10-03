#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<int> v;
    for (int i = 1; i <= 10; i++){
        int score;

        cin >> score;
        v.push_back(score);
    }

    int score = 0;
    int bonus = 0;
    for (int i = 0; i < 10; i++){
        if (i > 0) {
            if (v[i] == 1) {
                if (v[i - 1] == 1) {
                    bonus++;
                    score += bonus;
                }
                else {
                    score++;
                    bonus = 0;
                }
            }
        }

        else {
            if (v[i] == 1) score++;
        }
    }
}