#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int num;

    cin >> num;

    while(num--){
        int car, option;
        vector<pair<int, int> > v;

        cin >> car;
        cin >> option;

        int sum = 0;
        sum += car;

        if (option != 0){
            for (int i = 1; i <= option; i++){
                int n, price;
                
                cin >> n >> price;
                v.push_back(make_pair(n, price));
            }

            for (int i = 0; i < option; i++){
                sum += v[i].first * v[i].second;
            }
    
            v.clear();
        }

        cout << sum << "\n";
    }

    return 0;
}