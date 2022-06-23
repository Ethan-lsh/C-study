#include <iostream>
using namespace std;

/*
구조체 포인터 선언 및 접근법
*/

typedef struct{
    char name[30];
    char phoneNum[30];
} SAM;


int main() {

    SAM a = {"홍길동", "010-1234-5678"};
    SAM *pa;

    pa = &a;

    cout << "이름: " << a.name << endl;
    cout << "이름: " << pa->name << endl;

    return 0;

}