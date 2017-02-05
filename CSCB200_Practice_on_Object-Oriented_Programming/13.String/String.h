#ifndef STRING_H_
#define STRING_H_
#include <iostream>
using namespace std;
 
class String {
private:
     int n;
     char * s;
public:
     String(char* = NULL);
     String(const String &);
     String& operator=(const String &);
     ~String();
     
     char * print() const;
     void set_n(int);
     int length() const;
     void set_s(char *);
     
     String& operator+=(const String &);
     String operator+(const String &);
     String operator+(int);
     
     const char operator[](int) const;
};
 
ostream& operator<<(ostream &, const String &);
String operator+(int, const String &);
 
#endif
