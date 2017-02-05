#ifndef COUTNVAR_H_
#define COUNTVAR_H_
#include <iostream>
using namespace std;
 
class CountVar {
private:
     double d;
     const char * name;
     ostream & out;
     int assigned, used;
public:
     CountVar(double = 0, const char * = ".", ostream & = cout);
     ~CountVar();
     CountVar& operator=(const CountVar &);
     operator double();
     const char * get_name()const;
};
 
#endif