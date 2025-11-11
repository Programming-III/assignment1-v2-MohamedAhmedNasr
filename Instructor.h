#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here
class person {
private:
    string name;
    int id ;
    public:
    person();
    person(string name, int id);
    void  display() ;
    string get_name();
    int get_id();
    ~person();

};












#endif
