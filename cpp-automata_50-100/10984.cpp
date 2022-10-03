#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

double gpa_calc(vector<pair<int, double> > v, int num, int credit){
    double sum = 0;

    for(int i = 0; i < num; i++){
        sum += v[i].first * v[i].second;
    }

    return sum / credit;

}

int main(void){
    int semester;

    cin >> semester;

    vector<pair<int, double> > v;

    while(semester--){
        int num;

        cin >> num;

        for(int i = 1; i <= num; i++){
            int credit;
            double grade;

            cin >> credit >> grade;
            v.push_back(make_pair(credit, grade));
        }

        int total_credit = 0;

        for(int i = 0; i < num; i++){
            total_credit += v[i].first;
        }

        double gpa = gpa_calc(v, num, total_credit);

        printf("%d %.1f\n", total_credit, gpa);

        v.clear();
    }

    return 0;
}