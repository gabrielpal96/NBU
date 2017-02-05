#include "Cprogrammer.h"
#include "Cemployee.h"
using namespace std;
 
Cprogrammer::Cprogrammer() { }
 
Cprogrammer::Cprogrammer(char n[20], char s[4], size_t y, size_t nocp, size_t noce, size_t c)
     : Cemployee(n, s, y), numOfCompleteProjects(nocp), numOfCompleteExercise(noce), commission(c) { }
 
Cprogrammer::Cprogrammer(const Cprogrammer &c) : Cemployee(c) {
     numOfCompleteProjects = c.numOfCompleteProjects;
     numOfCompleteExercise = c.numOfCompleteExercise;
     commission = c.commission;
}
 
Cprogrammer::~Cprogrammer() { }
 
Cprogrammer& Cprogrammer::operator=(const Cprogrammer &c) {
     if (this != &c) {
         Cemployee::operator=(c);
         numOfCompleteProjects = c.numOfCompleteProjects;
         numOfCompleteExercise = c.numOfCompleteExercise;
         commission = c.commission;
     }
     return *this;
}
 
ostream& Cprogrammer::ins(ostream& out)const {
     Cemployee::ins(out);
     out << "\nNumber of complete projects: " << numOfCompleteProjects << endl;
     out << "Number of complete exercise: " << numOfCompleteExercise << endl;
     out << "Commission: " << commission << endl;
 
     return out;
}
 
istream& Cprogrammer::ext(istream& in) {
     Cemployee::ext(in);
     in >> numOfCompleteProjects;
     in >> numOfCompleteExercise;
     in >> commission;
 
     return in;
}