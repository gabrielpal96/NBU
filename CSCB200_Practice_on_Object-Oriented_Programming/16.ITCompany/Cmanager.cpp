#include "Cmanager.h"
#include "Cemployee.h"
#include "Cprogrammer.h"
using namespace std;
 
Cmanager::Cmanager() : Cemployee() {
     team = 0;
     programmerTeam = NULL;
     maxNumTasks = 0;
}
 
Cmanager::Cmanager(char n[20], char s[4], size_t y, size_t mnt, size_t t)
     : Cemployee(n, s, y), maxNumTasks(mnt), team(t) {
     programmerTeam = new Cprogrammer[team];
}
 
Cmanager::~Cmanager() { delete[] programmerTeam; }
 
Cmanager::Cmanager(const Cmanager &c) : Cemployee(c) {
     team = c.team;
     maxNumTasks = c.maxNumTasks;
 
     if (this != NULL) {
         delete[] programmerTeam;
         programmerTeam = new Cprogrammer[team];
         for (size_t i = 0; i < team; i++) {
              programmerTeam[i] = c.programmerTeam[i];
         }
     }
}
 
Cmanager& Cmanager::operator=(const Cmanager &c) {
     if (this != &c) {
         Cemployee::operator=(c);
         team = c.team;
         maxNumTasks = c.maxNumTasks;
 
         if (this != NULL) {
              delete[] programmerTeam;
              programmerTeam = new Cprogrammer[team];
              for (size_t i = 0; i < team; i++) {
                     programmerTeam[i] = c.programmerTeam[i];
              }
         }
     }
 
     return *this;
}
 
ostream& Cmanager::ins(ostream& out) const {
     Cemployee::ins(out);
     out << "Team : " << team << "\n";
     out << "Maximum number of tasks: " << maxNumTasks << "\n";
     
     for (size_t i = 0; i < team; i++) {
         out << programmerTeam[i] << "\n";
     }
     
     return out;
}
 
istream& Cmanager::ext(istream& in) {
     Cemployee::ext(in);
     in >> team;
     in >> maxNumTasks;
     
     for (size_t i = 0; i < team; i++) {
         in >> programmerTeam[i];
     }
     
     return in;
}
 
ostream& operator<<(std::ostream& out, const Cmanager &c) {
     return c.ins(out);
}
 
istream& operator>>(std::istream& in, Cmanager &c) {
     return c.ext(in);
}