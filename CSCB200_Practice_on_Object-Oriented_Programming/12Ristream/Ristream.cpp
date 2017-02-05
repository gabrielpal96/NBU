#include "Ristream.h"
 
Ristream::Ristream(istream & in):in(in) {}
 
Ristream::Ristream(int l, bool s, istream &in) :
length(l), space(s), in(in) {}
 
/*
Ristream::Ristream(const Ristream &other) {
     in = other.in;
}
*/
 
Ristream::Ristream(const Ristream &other) :in(other.in) {
     length = other.length;
     space = other.space;
}
 
Ristream::~Ristream() {}
 
Ristream& Ristream::operator=(const Ristream &other) {
     if (this != &other) {
         length = other.length;
         space = other.space;
     }
     return *this;
}
 
Ristream& Ristream::operator>>(int &i) {
     i = rand() % 100 + rand() * rand();
     i = (rand() % 2 == 0) ? i : -i;
     return *this;
}
 
Ristream& Ristream::operator>>(unsigned &u) {
     u = rand() % 100 + rand()*rand();
     return *this;
}
 
Ristream& Ristream::operator>>(double &d) {
     d = 1.*rand() / RAND_MAX;
     d = (rand() % 2 == 0) ? d : -d;
     return *this;
}
 
void Ristream::set_length(int l) {
     length = l;
}
 
unsigned Ristream::get_length() const {
     return this->length;
}
 
void Ristream::set_space(bool s) {
     space = s;
}

bool Ristream::get_space() const {
     return this->space;
}
 
Ristream& Ristream::operator>>(char * str) {
     char abc[26] = {
         'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
         'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
         't', 'u', 'v', 'w', 'x', 'y', 'z' 
     };
 
     char abc_s[27] = {
         'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
         'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
         't', 'u', 'v', 'w', 'x', 'y', 'z', ' ' 
         };
 
     length = (length>strlen(str)) ? length : strlen(str);
     for (unsigned i = 0; i<length; i++) {
         str[i] = (space) ? abc_s[rand() % 27] : abc[rand() % 26];
     }
     str[length] = '\0';
     
     return *this;
}