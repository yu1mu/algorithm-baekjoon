#include <iostream>
using namespace std;

void printRes(int sum){
    switch (sum)
        {
        case 0:
            cout << "E" << endl;
            break;
        
        case 1:
            cout << "A" << endl;
            break;

        case 2:
            cout << "B" << endl;
            break;
        
        case 3:
            cout << "C" << endl;
            break;

        case 4:
            cout << "D" << endl;
            break;
        
        default:
            break;
        }
}

int main(void){
    for (int i = 1; i <= 3; i++){
        int sum = 0;
        for (int j = 1; j <= 4; j++){
            int yutt;
            
            cin >> yutt;

            if (yutt == 0) sum++;
        }

        printRes(sum);
    }

    return 0;
}