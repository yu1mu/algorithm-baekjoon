#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    vector<int> burger;
    vector<int> drink;
    
    for (int i = 0; i < 3; i++){
        int price;

        cin >> price;

        burger.push_back(price);
    }

    for (int i = 0; i < 2; i++){
        int price;

        cin >> price;

        drink.push_back(price);
    }

    vector<int> set;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            int setPrice = burger[i] + drink[j] - 50;
            set.push_back(setPrice);
        }
    }

    sort(set.begin(), set.end());

    cout << set[0] << endl;

    return 0;
}