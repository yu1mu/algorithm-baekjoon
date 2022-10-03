#include <iostream>
using namespace std;

int main(void){
    int num;

    cin >> num;

    while(num--){
        int candy, sibling;
        cin >> candy >> sibling;

        cout << "You get " << candy / sibling << " piece(s) and your dad gets " << candy % sibling << " piece(s)." << "\n";
    }

    return 0;
}