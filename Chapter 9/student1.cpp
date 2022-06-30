#include "student.h"

Student::Student(){
    score[0] = 0;
    score[1] = 0;
    score[2] = 0;

    sum = 0;
    average =0;
}

void Student::setScore(const int s1, const int s2, const int s3){
    score[0] = s1;
    score[1] = s2;
    score[2] = s3;
}

void Student::SumAverage(){
    
    for (int i = 0; i < 3; i++){
        sum += score[1];
    }

    average = sum / 3.;
}

void Student::ShowScore(){
    
    for (int i = 0; i < 3; i++){
        cout << "정수 " << i + 1 << ": " << score[i] << endl;
    }

    cout << "총점" << sum << endl;
    cout << "평균" << average << endl;
}