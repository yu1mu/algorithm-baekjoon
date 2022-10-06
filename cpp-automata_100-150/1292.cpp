#include <iostream>
#include <vector>
using namespace std;

pair<int, int> checkNum(int n){
    int num = 1;
    int sum = 0;
    while(true){
        sum += num;
        if (sum >= n) return make_pair(num, sum - num);
        else num++;
    }
}

int checkSum(pair<int, int> v, int sum, int n){
    for (int i = 1; i <= v.first; i++){
        if (i == v.first) sum += (n - v.second) * i;
        else sum += i * i;
    }

    return sum;
}

int main(void){
    int a, b;

    cin >> a >> b;

    pair<int, int> v1 = checkNum(a - 1);
    pair<int, int> v2 = checkNum(b);

    int a_sum = 0, b_sum = 0;

    a_sum = checkSum(v1, a_sum, a - 1); 
    b_sum = checkSum(v2, b_sum, b);

    int total = b_sum - a_sum;

    cout << total << endl;

    return 0;
}