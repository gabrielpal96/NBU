#include "TraceFun.h"
 
TraceFun::TraceFun(const char * str, ostream& out) :name(str), out(out) {
     out << "function " << name << " starts here.\n";
}
 
TraceFun::~TraceFun() {
     out << "function " << name << " ends here.\n";
}