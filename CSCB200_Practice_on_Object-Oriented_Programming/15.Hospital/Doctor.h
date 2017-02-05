#ifndef DOCTOR_H_
#define DOCTOR_H_
#include "Person.h"
#include "Patient.h"
#include <fstream>
 
class Doctor : public Person {
private:
     size_t max;
     double price;
     size_t numPatient;
     Patient * list;
public:
     Doctor();
     Doctor(char[], char[], size_t, size_t, double, size_t);
     ~Doctor();
     Doctor(const Doctor &);
     Doctor& operator=(const Doctor &);
     
     virtual std::ostream& ins(std::ostream&)const;
     virtual std::istream& ext(std::istream&);
     
     Patient& operator[](size_t);
     void setPatientVisit(size_t);
     size_t avgVisits()const;
     void BlackList(std::ofstream &)const;
};
 
//std::ostream& operator<<(std::ostream& out, const Doctor &);
//std::istream& operator>>(std::istream& in, Doctor &);
 
#endif