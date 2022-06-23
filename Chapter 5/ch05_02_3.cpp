#include <iostream>
#include <string.h>
using namespace std;

int main(){

    typedef struct{
        char name[30];
        char phoneNum[30];
    } SAM;

    SAM Friend;

    strcpy_s(Friend.name, 30, "김갑돌");
    strcpy_s(Friend.phoneNum, 20, "010-1234-5678");

    SAM Friend1;

    strcpy_s(Friend1.name, 30, "홍길동");
    strcpy_s(Friend1.phoneNum, 20, "010-1234-5678");

    cout << Friend.name << endl;
    cout << Friend.phoneNum << endl;

    cout << Friend1.name << endl;
    cout << Friend1.phoneNum << endl;

    return 0;

}