#include "String.h"
#include <cassert>
 
String::String(char* str) {
     if (str == NULL) {
         n = 0;
     }    
     else {
         int l = strlen(str);
         n = l;
         s = new char[l + 1];
         for (int i = 0; i<l; i++) {
              s[i] = str[i];
         }     
         s[l] = '\0';
     }
}
 
String::String(const String &other) {
     n = other.n;
     s = new char[n + 1];
     for (int i = 0; i<n; i++) {
         s[i] = other.s[i];
     }    
     s[n] = '\0';
}
 
String& String::operator=(const String &other) {
     if (this != &other){
         if (n != 0) {
              delete[] s;
         }     
         n = other.n;
         s = new char[n + 1];
         for (int i = 0; i<n; i++) {
              s[i] = other.s[i];
         }
         s[n] = '\0';
     }
     
     return *this;
}
 
String::~String() {
     if (n != 0) {
         delete[] s;
     }
}
 
char * String::print() const {
     return this->s;
}
 
void String::set_n(int len) {
     n = len;
}
 
int String::length() const {
     return this->n;
}
 
void String::set_s(char * str) {
     int l = strlen(str);
     n = l;
     s = new char[l + 1];
     for (int i = 0; i<l; i++) {
         s[i] = str[i];
     }
     s[l] = '\0';
}
 
String& String::operator+=(const String &other) {
     char * t = new char[n + other.n + 1];
     for (int i = 0; i<n; i++) {
         t[i] = s[i];
     }
 
     int j = n;
     for (int i = 0; i<other.n; i++) {
         t[j++] = other.s[i];
     }
 
     t[j] = '\0';
     if (n != 0) {
         delete[] s;
     }
 
     n += other.n + 1;
     s = t;
     
     return *this;
}
 
String String::operator+(const String &other) {
     char * t = new char[n + other.n + 1];
     for (int i = 0; i<n; i++) {
         t[i] = s[i];
     }
 
     int j = n;
     for (int i = 0; i<other.n; i++) {
         t[j++] = other.s[i];
     }
 
     t[j] = '\0';
     String tmp(t);
     delete[] t;
     
     return tmp;
}
 
String String::operator+(int num) {
     int cnt = 0;
     int d = num;
     while (d>0) {
         cnt++;
         d /= 10;
     }
 
     char * t = new char[n + cnt + 1];
     int i;
     for (i = 0; i<n; i++) {
         t[i] = s[i];
     }
 
     while (num>0) {
         t[i++] = num % 10 + '0';
         num /= 10;
     }
 
     t[i] = '\0';
     String tmp(t);
     delete[] t;
     
     return tmp;
}
 
const char String::operator[](int i) const {
     assert(i >= 0 && i<n);
     return s[i];
}
 
ostream& operator<<(ostream & out, const String &s) {
     out << s.print();
     return out;
}
 
String operator+(int num, const String &r) {
     int cnt = 0;
     int d = num;
     while (d>0) {
         cnt++;
         d /= 10;
     }
 
     char * t = new char[r.length() + cnt + 1];
     int i = 0;
 
     while (num>0) {
         t[i++] = num % 10 + '0';
         num /= 10;
     }
 
     for (int j = 0; j<r.length(); j++) {
         t[i++] = r[j];
     }
 
     t[i] = '\0';
     String tmp(t);
     delete[] t;
     
     return tmp;
}