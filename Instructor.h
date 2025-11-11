#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here
class instructor  : person{
    private:
    string department;
    int experienceyears;
    public:
    instructor();
    instructor(string department, int experienceyears) ;
    void display();
    string get_department();
    int getexperienceyears();
    ~instructor();
};










#endif
