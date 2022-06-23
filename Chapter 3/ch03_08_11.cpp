#include <iostream>
using namespace std;

int main(){

    int i;

    for (i=0; i < 10; i++){
        if (i%2 == 0)
            continue;  // continue 가 실행되면 반복문의 조건문 (line-8)로 이동하여 i를 증가시키고 다시 반복문을 수행
        cout << "i= " << i << endl;
    }

    return 0;
}