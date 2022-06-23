#include <iostream>
#include <string>
using namespace std;

int main() {

    char ch='y', name[30]="KabDol";

    // 문자 변수, 문자 배열의 주소를 확인하기 위해서 숫자 형태로 형변환을 해야함
    cout << hex << (int*)&ch << endl;
    cout << hex << &name << endl;
    cout << hex << (int*)&name[0] << endl;

    return 0;
}