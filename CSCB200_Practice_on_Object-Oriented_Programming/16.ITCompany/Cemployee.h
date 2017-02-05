#ifndef CEMPLOYEE_H_
#define CEMPLOYEE_H_
#include <iostream>
 
class Cemployee {
private:
     char name[20];
     char salary[4];
     size_t year;
public:
     Cemployee();
     Cemployee(char[], char[], size_t);
     ~Cemployee();
     Cemployee(const Cemployee &);
     Cemployee& operator=(const Cemployee &);
     virtual std::ostream& ins(std::ostream&)const;
     virtual std::istream& ext(std::istream &);
};
 
std::ostream& operator<<(std::ostream&, const Cemployee &);
std::istream& operator>>(std::istream&, Cemployee &);
 
#endif