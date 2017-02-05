#include "RangeVar.h"
 
RangeVar::RangeVar(double d, const char * nme, ostream & out) :
d(d), name(nme), out(out), min(d), max(d) {}
 
RangeVar::~RangeVar() {
     if (name[0] != '.') {
         out << "object " << name << " has min value assigned "
              << min << "  and has max value " << max << " .\n";
     }
}
 
RangeVar& RangeVar::operator=(const RangeVar &other) {
     if (this != &other) {
         d = other.d;
         if (min > d)
              min = d;
 
         if (max < d)
              max = d;
     }
     return *this;
}
 
RangeVar::operator double() {
     if (min > d)
         min = d;
 
     if (max < d)
         max = d;
 
     return d;
}