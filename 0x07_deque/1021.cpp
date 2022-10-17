#include <iostream>
#include <deque>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;

    deque<int> dq;
    for (int i = 1; i <= n; i++){
        dq.push_back(i);
    }

    int cnt = 0;
    while(m--){
        int num;
        cin >> num;

        int idx;
        for (int i = 0; i < dq.size(); i++){
            if (num == dq[i]) idx = i;
        }

        if (idx == 0) {
            dq.pop_front();
        }
        else {
            if (idx > dq.size() / 2){
                while(num != dq.front()){
                    dq.push_front(dq.back());
                    dq.pop_back();
                    cnt++;
                }
                dq.pop_front();
            }
            else {
                while(num != dq.front()){
                    dq.push_back(dq.front());
                    dq.pop_front();
                    cnt++;
                }
                dq.pop_front();
            }
        }
    }

    cout << cnt << "\n";
}