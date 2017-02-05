#include "AProg.h"
#include <cassert>
 
AProg::AProg(double a, double d) :a(a), d(d) {}
 
AProg::~AProg(){}
 
AProg::AProg(const AProg &other) {
     a = other.a;
     d = other.d;
}
 
AProg& AProg::operator=(const AProg &other) {
     if (this != &other) {
         a = other.a;
         d = other.d;
     }
     return *this;
}
 
double AProg::operator[](int i) const {
     assert(i >= 0);
     double elem = a;
     for (int j = 0; j<i; j++) {
         elem += d;
     }
     return elem;
}
 
double AProg::operator()(int i) const {
     assert(i >= 0);
     double sum = 0;
     for (int j = 0; j <= i; j++) {
         sum += (*this)[j];
     }
     return sum;
}