#include <iostream>
using namespace std;

int main(){
    
    int num1, num2;

    // 화살표 (<<) 가 가리키는 방향으로 데이터가 들어감
    cout << "정수 1 입력: ";
    cin >> num1;

    cout << "정수 2 입력: ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1+num2 << endl;


    return 0;
}