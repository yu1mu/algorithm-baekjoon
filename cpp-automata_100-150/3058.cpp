#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void){
    int num;

    cin >> num;
    
    for (int i = 0; i < num; i++){
        vector<int> v;

        for (int j = 0; j < 7; j++){
            int n;

            cin >> n;
            if (n % 2 == 0) v.push_back(n);
        }

        int sum = accumulate(v.begin(), v.end(), 0);
        
        int min = *min_element(v.begin(), v.end());

        cout << sum << " " << min << "\n";
    }

    return 0;
}