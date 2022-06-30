#include <iostream>
using namespace std;

class Student{
    
    public:
        Student(const int s1 = 0, const int s2 = 0, const int s3 = 0);
        ~Student();
        void Sum();
        int getSum();

    private:
        int score1, score2, score3, sum;
};

Student::Student(const int s1, const int s2, const int s3){
    score1 = s1;
    score2 = s2;
    score3 = s3;
}

Student::~Student(){
    cout << "Deconstructor" << endl;
}

void Student::Sum(){
    sum = score1+score2+score3;
}

int Student::getSum(){
    return sum;
}

int main(){
    Student Obj(100, 89, 96);
    Obj.Sum();
    cout << "Total: " << Obj.getSum() << endl;

    Student *p_Obj = new Student(98, 76, 45);

    p_Obj -> Sum();
    cout << "Total: " << p_Obj->getSum() << endl;

    delete(p_Obj);  // 동적으로 할당한 공간 해제

    p_Obj = &Obj;
    cout << "Total: " << p_Obj->getSum() << endl;

    Student &r_Obj=Obj;

    cout << "Total: " << r_Obj.getSum() << endl;

    cout << "Obj size " << sizeof(Obj) << endl;
    cout << "p_Obj size " << sizeof(p_Obj) << endl;
    cout << "r_Obj size " << sizeof(r_Obj) << endl;

    return 0;
}