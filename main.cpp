#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;
// ==================== Person Class Implementation =========================
person::person(string name, int id) {
    this->name = name;
    this->id = id;
}
void person::display() {
    cout << "Name: " << name << endl<< ", ID: " << id << endl;
}
string person::get_name() {
    return name;
}
int person::get_id() {
    return id;
}
person::~person() {

}







// ==================== Student Class Implementation ====================
student::student(int YearLevel , string major) {
    this->YearLevel = YearLevel;
    this->major = major;
}
string student::getmajor() {
    return major;
}
int student::getyearlevel() {
    return YearLevel;
}
void student::display() {
    cout <<"student info :" << endl;
    cout <<"name" << person::get_name()<< endl << "year "<<YearLevel<< endl << "major" << major;
}
student::~student() {

}





// ==================== Instructor Class Implementation ====================
instructor::instructor(string department, int experienceyears) {
    this->department = department;
    this->experienceyears = experienceyears;
}
string instructor::get_department() {
    return department;
}
int instructor::getexperienceyears() {
    return experienceyears;
}
void instructor::display() {
    cout <<"instructor info :" << endl;
    cout << "name" << person::get_name() << endl << "department " << department << endl << "experience " <<
            experienceyears << endl;
}
instructor::~instructor() {
}





// ==================== Course Class Implementation ====================

course::course(string coursename, string coursecode, int maxstudents, student *students, int currentstudents) {
    this->coursename = coursename;
    this->coursecode = coursecode;
    this->maxstudents = maxstudents;
    this->students = students;
    this->currentstudents = currentstudents;
}
student *course::addstudent(const student &s) {
    if (currentstudents < maxstudents) {
        students[currentstudents] = s;
        currentstudents++;
        return &students[currentstudents - 1];
    }

}
void course::displaycourseinfo() {
    cout << "Course Name: " << coursename << endl;
    cout << "Course Code: " << coursecode << endl;
    cout << "Max Students: " << maxstudents << endl;
    cout << "Current Students: " << currentstudents << endl;
    cout << "currently enrolled: " << endl;
    for (int i = 0; i < currentstudents; i++) {
        students[i].display();
        cout << endl;
    }
}
course::~course() {
    delete [] students;
}






// ==================== Main Function ====================
int  main() {
   person p("omar nabil" , 2022);
    person t("dr. lina khaled " , 1);
    student s (2 , "informatics");
    instructor i ("computer science" , 5);
    student *students = new student[3];
    course c("introduction to prog" , "C1201" , 3 , students , 1);
    c.addstudent(s);
    c.displaycourseinfo();
    i.display();
    s.display();
}
