#include "People.h"
#include <cassert>
 
People::People(char * n, char * e) {
     name = new char[strlen(n) + 1];
     assert(name != NULL);
     strcpy_s(name, strlen(n) + 1, n);
     egn = new char[strlen(e) + 1];
     assert(egn != NULL);
     strcpy_s(egn, strlen(e) + 1, e);
}
 
People::People(const People &p) {
     name = new char[strlen(p.name) + 1];
     assert(name != NULL);
     strcpy_s(name, strlen(p.name) + 1, p.name);
     egn = new char[strlen(p.egn) + 1];
     assert(egn != NULL);
     strcpy_s(egn, strlen(p.egn) + 1, p.egn);
}
 
People::~People() {
     delete[] egn;
     delete[] name;
}
 
void People::set_name(char * n) {
     if (name != NULL)
         delete[] name;
 
     name = new char[strlen(n) + 1];
     assert(name != NULL);
     strcpy_s(name, strlen(n) + 1, n);
}
 
void People::set_egn(char * e) {
     if (egn != NULL)
         delete[] egn;
 
     egn = new char[strlen(e) + 1];
     assert(egn != NULL);
     strcpy_s(egn, strlen(e) + 1, e);
}
 
const char * People::get_name() const { return name; }
 
const char * People::get_egn() const { return egn; }
 
ostream& operator<<(ostream& out, const People &p) {
     out <<"Name: " << p.name << "EGN: " << p.egn << endl;
     return out;
}
 
Student::Student(char * n, char * e, char * f, double g) :People(n, e) {
     fnum = new char[strlen(f) + 1];
     assert(fnum != NULL);
     strcpy_s(fnum, strlen(f) + 1, f);
 
     if (g  >= 2 && g <= 6)
         grade = g;
     else if (g < 2)
         grade = 2;
     else
         grade = 6;
}
 
Student::Student(const Student &s) {
     People::People(s.get_name(), s.get_egn());
     fnum = new char[strlen(s.fnum) + 1];
     assert(fnum != NULL);
     strcpy_s(fnum, strlen(s.fnum) + 1, s.fnum);
     grade = s.grade;
}
 
Student::~Student() { delete[] fnum; }
 
void Student::set_fnum(char * f) {
     if (fnum != NULL)
         delete[] fnum;
 
     fnum = new char[strlen(f) + 1];
     assert(fnum != NULL);
     strcpy_s(fnum, strlen(f) + 1, f);
}
 
void Student::set_grade(double g) {
     if (g >= 2 && g <= 6)
         grade = g;
     else if (g < 2)
         grade = 2;
     else
         grade = 6;
}
 
const char * Student::get_fnum() const { return fnum; }
 
double Student::get_grade() const { return grade; }
 
ostream& operator<<(ostream& out, const Student &s) {
     out << "Name: " << s.get_name() << "EGN: " << s.get_egn() << endl;
     out << "Faculty number : " << s.fnum << "Grade: "<< s.grade << endl;
 
     return out;
}
