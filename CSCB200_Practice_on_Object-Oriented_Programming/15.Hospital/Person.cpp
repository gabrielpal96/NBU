#include "Person.h"
using namespace std;
 
Person::Person() {}
 
Person::Person(char n[10], char e[10], size_t a) {
     strcpy(name, n);
     strcpy(e, EGN);
     a = age;
}
 
Person::Person(const Person &p)  {
     strcpy(name, p.name);
     strcpy(EGN, p.EGN);
     age = p.age;
}
 
Person::~Person() {}
 
Person& Person::operator=(const Person &p) {
     strcpy(name, p.name);
     strcpy(EGN, p.EGN);
     age = p.age;
     return *this;
}
 
ostream& Person::ins(ostream & out) const {
     Person::ins(out);
     out << "Age: " << age;
 
     return out;
}
 
istream& Person::ext(istream& in) {
     in.getline(name, 29);
     in >> EGN;
     in >> age;
     in.ignore();
 
     return in;
}
 
ostream& operator<<(std::ostream& out, const Person &p) {
     return p.ins(out);
}
 
istream& operator>>(std::istream& in, Person &p) {
     return p.ext(in);
}