#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, vector<int> student, vector<int> point) {
    int answer = -1;
    vector<pair<int, int> > v;

    for(int i = 1; i <= n; i++){
        v.push_back({i, 0});
    }

    for (int i = 0; i < student.size(); i++){
        auto it = find(v.begin(), v.end(), point[i]);
        
    }

    return answer;
}

int main(void){
    int n = 6;
    vector<int> student = {6, 1, 4, 2, 5, 1, 3, 3, 1, 6, 5};
    vector<int> point = {3, 2, 5, 3, 4, 2, 4, 2, 3, 2, 2};

    cout << solution(n, student, point) << "\n";
}