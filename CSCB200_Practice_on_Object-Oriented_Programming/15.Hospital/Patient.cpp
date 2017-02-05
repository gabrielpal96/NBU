#include "Patient.h"
#include "Person.h"
using namespace std;
 
Patient::Patient() {}
 
Patient::Patient(char n[30], char e[10], size_t a, size_t c)
     : Person(n, e, a), count(c) { }
 
Patient::Patient(const Patient &p) : Person(p) {
     count = p.count;
}
 
Patient::~Patient() {}
 
Patient& Patient::operator=(const Patient &p) {
     if (this != &p) {
         Person::operator=(p);
         count = p.count;
     }
     return *this;
}
 
ostream& Patient::ins(ostream& out) const {
     Person::ins(out);
     out << "\nCount: " << count;
 
     return out;
}
 
istream& Patient::ext(istream& in) {
     Person::ext(in);
     in >> count;
 
     return in;
}
 
void Patient::setCount(size_t cnt) {
     count = cnt;
}
 
size_t Patient::getCount() const {
     return count;
}
 
/*********************************************************
ostream& operator<<(std::ostream& out, const Patient &p) {
     return p.ins(out);
}
istream& operator>>(std::istream& in, Patient &p) {
     return p.ext(in);
}