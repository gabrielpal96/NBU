#include "GProg.h"
#include <cassert>
 
GProg::GProg(double a, double d) :a(a), d(d) {}
 
GProg::~GProg() {}
 
GProg::GProg(const GProg &other) {
     a = other.a;
     d = other.d;
}
 
GProg& GProg::operator=(const GProg &other) {
     if (this != &other) {
         a = other.a;
         d = other.d;
     }
     return *this;
}
 
double GProg::operator[](int i) const {
     assert(i >= 0);
     double elem = a;
     for (int j = 0; j<i; j++) {
         elem *= d;
     }
     return elem;
}
 
double GProg::operator()(int i) const {
     assert(i >= 0);
     double sum = 0;
     for (int j = 0; j <= i; j++) {
         sum += (*this)[j];
     }
     return sum;
}