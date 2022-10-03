#include <iostream>
using namespace std;

int getSecond(int h, int m, int s){
    int sum = 0;

    sum += h * 3600;
    sum += m * 60;
    sum += s;

    return sum;
}

void getTime(int sec, int &h, int &m, int &s){
    h = sec / 3600;
    m = (sec % 3600) / 60;
    s = (sec % 3600) % 60;
}

int main(void){
    int now_h, now_m, now_s;
    int start_h, start_m, start_s;

    scanf("%d:%d:%d", &now_h, &now_m, &now_s);
    scanf("%d:%d:%d", &start_h, &start_m, &start_s);

    int nowSecond = getSecond(now_h, now_m, now_s);
    int startSecond = getSecond(start_h, start_m, start_s);

    int resTime = startSecond - nowSecond;
    if (resTime < 0){
        start_h += 24;
        startSecond = getSecond(start_h, start_m, start_s);
        resTime = startSecond - nowSecond;
    }

    int res_h = 0, res_m = 0, res_s = 0;

    getTime(resTime, res_h, res_m, res_s);

    printf("%02d:%02d:%02d\n", res_h, res_m, res_s);

    return 0;
}