#include <iostream>
#include <string>
using namespace std;
int num;

void bubble(string s, int n){
    for(int i = 0; i < n; i++){
        cout << "____"; 
    }

    cout << s << "\n";
}

void func(int n){
    bubble("\"����Լ��� ������?\"", n);
    if(num == n) {
        bubble("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"", n);
    }
    else {
        bubble("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.", n);
        bubble("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.", n);
        bubble("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"", n);
        func(n + 1);
    }

    bubble("��� �亯�Ͽ���.", n);
    
}

int main(void){
    cin >> num;

    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << "\n";

    func(0);
}