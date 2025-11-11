#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class course {
    private:
    string coursename;
    string coursecode;
    int maxstudents;
    student* students;
    int currentstudents;
    public:
course();
    course(string coursename ,string coursecode ,int maxstudents , student* students , int currentstudents);
    student* addstudent(const student& s) ;
    void displaycourseinfo() ;
    ~course() ;
};












#endif
