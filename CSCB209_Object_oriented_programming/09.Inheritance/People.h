#ifndef PEOPLE_H_
#define PEOPLE_H_
#include <iostream>
using namespace std;
 
class People {
     friend ostream& operator<<(ostream&, const People &);
private:
     char * name;
     char * egn;
public:
     People(char * = "No Name", char * = "No EGN");
     People(const People &);
     ~People();
 
     void set_name(char *);
     void set_egn(char *);
     const char * get_name() const;
     const char * get_egn() const;
};
 
class Student:public People {
     friend ostream& operator<<(ostream&, const Student &);
private:
     char * fnum;
     double grade;
public:
     Student(char * = "No Name", char * = "No EGN", char * = "No Faculty Number" , double = 2.);
     Student(const Student &);
     ~Student();
 
     void set_fnum(char *);
     void set_grade(double);
     const char * get_fnum() const;
     double get_grade() const;
};
 
ostream& operator<<(ostream &, const People &);
ostream& operator<<(ostream &, const Student &);
 
#endif
