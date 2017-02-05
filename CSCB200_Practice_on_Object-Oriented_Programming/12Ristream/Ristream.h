#ifndef RISTREAM_H_
#define RISTREAM_H_
#include <iostream>
using namespace std;
 
class Ristream {
private:
     istream& in;
     int length;
     bool space;
public:
     Ristream(istream &);
     Ristream(int, bool, istream &);
     Ristream(const Ristream &);
     ~Ristream();
     
     Ristream& operator= (const Ristream &);
     Ristream& operator>> (int&);
     Ristream& operator>> (unsigned&);
     Ristream& operator>> (double&);
     Ristream& operator>> (char *);
     
     void set_length(int);
     unsigned get_length()const;
     void set_space(bool);
     bool get_space()const;
};
 
#endif