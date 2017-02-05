#ifndef CPROGRAMMER_H_
#define CPROGRAMMER_H_
#include "Cemployee.h"
 
class Cprogrammer : public Cemployee {
private:
     size_t numOfCompleteProjects;
     size_t numOfCompleteExercise;
     size_t commission;
public:
     Cprogrammer();
     Cprogrammer(char[], char[], size_t, size_t, size_t, size_t);
     Cprogrammer(const Cprogrammer &);
     ~Cprogrammer();
     Cprogrammer& operator=(const Cprogrammer &);
     
     virtual std::ostream& ins(std::ostream&)const;
     virtual std::istream& ext(std::istream&);
};
 
//std::ostream& operator<<(std::ostream&, const Cprogrammer &);
//std::istream& operator>>(std::istream&, Cprogrammer &);
 
#endif