#include "Rational.h"
#include <iostream>
using namespace std;
 
int gcd(int a, int b) {
     int c;
     while (a != 0) {
         c = a;
         a = b%a; 
         b = c;
     }
     return b;
}
 
Rational::Rational(int x, int y) {
     if (y == 0) {
        cout << "Знаменателят е равен на 0!\n";
     }
 
     else if (x == 0) {
         numer = 0;
         denom = 1;
     }
 
     else {
         int g = gcd(abs(x), abs(y));
         if ((x>0 && y>0) || (x<0 && y<0)) {
              numer = abs(x) / g;
              denom = abs(y) / g;
         }
         else {
              numer = -abs(x) / g;
              denom = abs(y) / g;
         }
     }
}
 
Rational::Rational(const Rational &other) {
     numer = other.numer;
     denom = other.denom;
}

Rational::~Rational() {
     cout << "destruct number" << numer << "/" << denom << std::endl;
}
 
void Rational::setNumer(int n) { 
    numer = n; 
}
 
void Rational::setDenom(int d) {
     if (d != 0) { 
        denom = d;
     }
     else { 
        cout << "Знаменателят е равен на 0!\n"; 
     }
}
 
void Rational::read() {
     cout << "Въведете числител: ";
     cin >> numer;
     do {
         cout << "Въведете знаменател:";
         cin >> denom;
     } while (denom == 0);
}
 
int Rational::getNumer() const {
    return numer;
}
 
int Rational::getDenom() const { 
    return denom; 
}
 
void Rational::print() const {
     cout << numer << "/" << denom << endl;
}
 
bool Rational::isZero() const {
    return numer == 0; 
}
