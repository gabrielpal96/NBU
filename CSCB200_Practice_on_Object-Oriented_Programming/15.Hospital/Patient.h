#ifndef PATIENT_H_
#define PATIENT_H_
#include "Patient.h"
#include "Person.h"
#include <iostream>
 
class Patient : public Person {
private:
     size_t count;
public:
     Patient();
     Patient(char [], char [], size_t , size_t);
     ~Patient();
     Patient(const Patient &);
     
     Patient& operator=(const Patient&);
     virtual std::ostream& ins(std::ostream&) const;
     virtual std::istream& ext(std::istream&);
     
     void setCount(size_t);
     size_t getCount()const;
};
 
//std::ostream& operator<<(std::ostream& out, const Patient &);
//std::istream& operator>>(std::istream& in, Patient &);
 
#endif