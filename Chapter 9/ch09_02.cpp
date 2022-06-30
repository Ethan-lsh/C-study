#include <iostream>
using namespace std;

class Test{
    public:
        Test();  // 생성자
        ~Test();  // 소멸자
};

Test::Test(){

    cout << "TEST Constructor" << endl;
}

Test::~Test(){
    cout << "TEST Destructor" << endl;
}

int main(){

    Test Obj;

    cout << "Test" << endl;

    return 0;
}