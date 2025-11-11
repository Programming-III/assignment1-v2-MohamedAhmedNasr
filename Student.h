#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here
class student : public person{
    private:
        int YearLevel;
    string major;
public:
    student();
    student(int YearLevel , string major);
    void display() ;
    string getmajor() ;
    int getyearlevel();
    ~student();
}












#endif
