#ifndef RANGEVAR_H_
#define RANGEVAR_H_
#include <iostream>
using namespace std;
 
class RangeVar {
public:
     RangeVar(double = 0, const char * = ".", ostream & = cout);
     ~RangeVar();
     RangeVar& operator=(const RangeVar &);
     operator double();
private:
     double d;
     const char * name;
     ostream & out;
     double min, max;
};
 
#endif