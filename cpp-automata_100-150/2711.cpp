#include <iostream>
#include <string>
using namespace std;

int main(void){
    int num;

    cin >> num;

    for (int i = 0; i < num; i++){
        int idx;
        string word;

        cin >> idx >> word;

        word.erase(word.begin() + idx - 1);

        cout << word << "\n";
    }

    return 0;
}