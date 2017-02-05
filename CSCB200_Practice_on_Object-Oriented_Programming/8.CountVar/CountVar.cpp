#include "CountVar.h"
 
CountVar::CountVar(double d, const char * n, ostream & out) :
d(d), name(n), out(out), assigned(0), used(0) {}
 
CountVar::~CountVar() {
     if (name[0] != '.') {
         out << "object " << name << " has been assigned "
              << assigned << " times and has been used " << used << " times.\n";
     }
}

CountVar& CountVar::operator=(const CountVar &other) {
     assigned++;
     if (this != &other) {
         d = other.d;
     }
     return *this;
}

CountVar::operator double() {
     used++;
     return d;
}
 
const char * CountVar::get_name()const {
     return this->name;
}