#include "Cemployee.h"
using namespace std;
 
Cemployee::Cemployee() { }
 
Cemployee::Cemployee(char n[20], char s[4], size_t y) {
     strcpy(name, n);
     strcpy(salary, s);
     this->year = y;
}
 
Cemployee::Cemployee(const Cemployee &c) {
     strcpy(name, c.name);
     strcpy(salary, c.salary);
     year = c.year;
}
 
Cemployee::~Cemployee() { }
 
Cemployee& Cemployee::operator=(const Cemployee &c) {
     if (this != &c) {
         strcpy(name, c.name);
         strcpy(salary, c.salary);
         year = c.year;
     }
     return *this;
}
 
ostream& Cemployee::ins(ostream& out) const {
     out << "Name: " << name << "\n";
     out << "Salary: " << salary << "\n";
     out << "Year : " << year << "\n";
 
     return out;
}
 
istream& Cemployee::ext(istream& in) {
     in.getline(name, 19);
     in >> salary;
     in >> year;
     in.ignore();
 
     return in;
}
 
ostream& operator<<(std::ostream& out, const Cemployee &c) {
     return c.ins(out);
}
 
istream& operator>>(std::istream& in, Cemployee &c) {
     return c.ext(in);
}