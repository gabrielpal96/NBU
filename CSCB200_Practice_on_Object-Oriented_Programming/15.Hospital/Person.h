#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
 
class Person {
public:
     Person();
     Person(char[], char[], size_t a);
     Person(const Person &);
     ~Person();
     
     Person& operator=(const Person &);
     virtual std::ostream& ins(std::ostream&)const;
     virtual std::istream& ext(std::istream&);
private:
     char name[30];
     char EGN[10];
     int age;
};
 
std::ostream& operator<<(std::ostream& out, const Person &);
std::istream& operator>>(std::istream& in, Person &);
 
#endif