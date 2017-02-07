#include "Rational.h"
#include <iostream>
#include <cassert>
 
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
     if (y == 0)
         std::cout << "The denominator is equal to 0!\n";
 
     else if (x == 0) {
         numer = 0;
         denom = 1;
     }
     else {
         int g = gcd(abs(x), abs(y));
 
         if ((x > 0 && y > 0) || (x < 0 && y < 0)) {
              numer = abs(x) / g;
              denom = abs(y) / g;
         }
         else {
              numer = -abs(x) / g;
              denom = abs(y) / g;
         }
     }
}
 
Rational::Rational(const Rational &r) {
     numer = r.numer;
     denom = r.denom;
}
 
Rational::~Rational() {
     std::cout << "destruct number" << numer << "/" << denom << std::endl;
}
 
void Rational::set_numer(int n) {
    numer = n;
}
 
void Rational::set_denom(int d) {
     if (d != 0)
         denom = d;
     else
         std::cout << "The denominator is equal to 0!\n";
}
 
void Rational::read() {
     std::cout << "Enter the numerator: ";
     std::cin >>numer;
 
     do{
         std::cout << "Enter the denominator: ";
         std::cin >> denom;
     } while (denom == 0);
}
 
int Rational::get_numer() const { 
    return numer; 
}
 
int Rational::get_denom() const { 
    return denom; 
}
 
void Rational::print() const {
     std::cout << numer << "/" << denom << std::endl;
}
 
bool Rational::iszero() const { 
    return numer == 0; 
}
 
Rational operator+(const Rational &r1, const Rational &r2) {
     return Rational(r1.numer*r2.denom + r2.numer*r1.denom, r1.denom*r2.denom);
}
 
Rational operator-(const Rational &r1, const Rational &r2) {
     return Rational(r1.numer*r2.denom - r2.numer*r1.denom, r1.denom*r2.denom);
}
 
Rational operator*(const Rational &r1, const Rational &r2) {
     return Rational(r1.numer*r2.numer, r1.denom*r2.denom);
}
 
Rational operator/(const Rational &r1, const Rational &r2) {
     assert(r2.numer != 0);
     return Rational(r1.numer*r2.denom, r1.denom*r2.numer);
}
