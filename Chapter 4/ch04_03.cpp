#include <iostream>
using namespace std;

/*
포인터는 변수의 주소만 가리키며 역참조 (*)는 주소에 접근하여 값을 가져온다.
포인터 선언시의 *는 "이 변수가 포인터다" 라고 알려주는 역할,
포인터에 사용할 때 *는 "포인터의 메모리 주소를 역참조하겠다"라는 뜻.
*/

int main() {

    int a = 100;
    int *pa;

    pa = &a;

    /*
    - 선언과 동시에 초기화
    int a = 100;
    int *pa = &a
    9번 라인의 pa = &a 와는 형태가 다르다는 점 주의
    */

    cout << "a에 저장된 값 " << a << endl;
    cout << "a의 주소 " << &a << endl;
    
    
    cout << "a에 저장된 값 " << *pa << endl;
    cout << "a의 주소 " << pa << endl;

    return 0;
}