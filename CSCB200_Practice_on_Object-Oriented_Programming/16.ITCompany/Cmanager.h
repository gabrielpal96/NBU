#ifndef MANAGER_H_
#define MANAGER_H_
#include "Cemployee.h"
#include "Cprogrammer.h"
 
class Cmanager : public Cemployee {
private:
     size_t team;
     Cprogrammer * programmerTeam;
     size_t maxNumTasks;
public:
     Cmanager();
     Cmanager(char[], char[], size_t, size_t, size_t);
     ~Cmanager();
     Cmanager(const Cmanager &);
     Cmanager& operator=(const Cmanager &);
     Cprogrammer& operator[](size_t index);
 
     std::ostream& ins(std::ostream&)const;
     std::istream& ext(std::istream&);
};
 
std::ostream& operator<<(std::ostream&, const Cmanager &);
std::istream& operator>>(std::istream&, Cmanager &);
 
#endif