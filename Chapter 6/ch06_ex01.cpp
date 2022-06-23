#include "ch06_rect.h"

int main(){
    const int r_width =10, r_height=35;
    int r_area;
    
    const int t_base=5, t_height=5;
    double t_area;

    r_area = RectArea(r_width, r_height);
    t_area = TriangleArea(t_base, t_height);

    cout << "사각형 면적" << r_area << endl;
    cout << "삼각형 면적" << t_area << endl;

    return 0;
}