#ifndef TRACEFUN_H_
#define TRACEFUN_H_
#include <iostream>
using namespace std;
 
class TraceFun{
private:
     const char * name;
     ostream & out;
public:
     TraceFun(const char * str = "No Name", ostream& out = cout);
     ~TraceFun();
};
 
#endif