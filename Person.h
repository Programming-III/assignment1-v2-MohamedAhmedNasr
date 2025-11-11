#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here
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
