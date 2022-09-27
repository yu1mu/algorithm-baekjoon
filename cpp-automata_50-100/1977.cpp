#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int ins1, ins2;
    cin >> ins1 >> ins2;

    int a = (int)ceil(sqrt(ins1));
    int b = (int)floor(sqrt(ins2));

    if (a > b) {
        cout << "-1" << endl;
    }

    else {

        int min = pow(a, 2);
        int sum = 0;

        for (int i = a; i <= b; i++){
            sum += pow(i, 2);
        }

        cout << sum << endl;
        cout << min << endl;
    }

    return 0;

}