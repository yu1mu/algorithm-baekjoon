#include <iostream>
using namespace std;

int main(void){
    int num;

    cin >> num;

    for (int i = 1; i <= num; i++){
        int a, b;

        cin >> a >> b;

        printf("Case %d: %d\n", i, a + b);
    }

    return 0;
}