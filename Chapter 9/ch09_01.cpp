#include <iostream>
using namespace std;

class CopyObj {
    
    public:
        CopyObj(const double height, const double weight);
        void ShowVar();

    private:
        double height;
        double weight;
};

CopyObj::CopyObj(const double height, const double weight){
    this->height = height;
    this->weight = weight;
}

void CopyObj::ShowVar(){
    cout << "Height " << height << endl;
    cout << "Weight " << weight << endl;
}

int main(){
    CopyObj p1(181.5, 79.3); // 객체 생성
    p1.ShowVar();

    cout << "----------------" << endl;

    CopyObj p2(p1); // 복사 생성자 (Copy Constructor)
    p2.ShowVar();

    return 0;
}