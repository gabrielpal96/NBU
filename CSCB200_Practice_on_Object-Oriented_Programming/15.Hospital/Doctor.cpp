#include "Doctor.h"
#include "Person.h"
#include <cassert>
using namespace std;
 
Doctor::Doctor() : Person() {
     max = 0;
     price = 0;
     numPatient = 0;
     list = NULL;
}
 
Doctor::Doctor(char n[30], char EGN[10], size_t a, size_t m, double p, size_t numP) :
Person(n, EGN, a), max(m), price(p), numPatient(numP) {
     list = new Patient[numPatient];
}
 
Doctor::~Doctor() { delete[] list; }
 
Doctor::Doctor(const Doctor &d) : Person(d) {
     max = d.max;
     price = d.price;
     numPatient = d.numPatient;
     if (list != NULL) {
         delete[] list;
     }
     list = new Patient[numPatient];
     for (size_t i = 0; i < numPatient; i++) {
         list[i] = d.list[i];
     }
}
 
Doctor& Doctor::operator=(const Doctor &d) {
     if (this != &d) {
         Person::operator=(d);
         max = d.max;
         price = d.price;
         numPatient = d.numPatient;
         if (list != NULL) {
              delete[] list;
         }
         list = new Patient[numPatient];
         for (size_t i = 0; i < numPatient; i++) {
              list[i] = d.list[i];
         }
     }
 
     return *this;
}
 
ostream& Doctor::ins(ostream& out) const {
     Person::ins(out);
     out << "\nMax: " << max << "\nPrice: " << price
         << "\nNumber patient: " << numPatient 
         << "\nPatient List:\n";
         
     for (size_t i = 0; i < numPatient; i++) {
         out << list[i] << "\n";
     }
     return out;
}
 
istream& Doctor::ext(istream& in) {
     Person::ext(in);
     in >> max;
     in >> price;
     in >> numPatient;
     
     if (list != NULL) {
         delete[] list;
     }
     list = new Patient[numPatient];
     for (size_t i = 0; i < numPatient; i++) {
         in >> list[i];
     }
     return in;
}
 
Patient& Doctor::operator[](size_t ind) {
     assert(ind>0 && ind < numPatient);
     return list[ind];
}
 
void Doctor::setPatientVisit(size_t ind) {
     (*this)[ind].setCount((*this)[ind].getCount() + 1);
}
 
size_t Doctor::avgVisits() const {
     size_t sum = 0;
     for (size_t i = 0; i < numPatient; i++) {
         sum += list[i].getCount();
     }
     
     return sum / numPatient;
}
 
void Doctor::BlackList(std::ofstream & file) const {
     for (size_t i = 0; i < numPatient; i++) {
         if (list[i].getCount()>max) {
              file << list[i] << "\n";
         }
     }
}
 
/********************************************************
ostream& operator<<(std::ostream& out, const Doctor &p) {
     return p.ins(out);
}
 
istream& operator>>(std::istream& in, Doctor &p) {
     return p.ext(in);
}