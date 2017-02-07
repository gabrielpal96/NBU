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
     if (y == 0) {
         std::cout << "The denominator is equal to 0!\n";
     }
     else if (x == 0) {
         number = 0;
         denom = 1;
     }
     else{
         int g = gcd(abs(x), abs(y));
 
         if ((x > 0 && y > 0) || (x < 0 && y < 0)) {
              number = abs(x) / g;
              denom = abs(y) / g;
         }
         else {
              number = -abs(x) / g;
              denom = abs(y) / g;
         }
     }
}
 
Rational::Rational(const Rational &r) {
     number = r.number;
     denom = r.denom;
}
 
Rational::~Rational() {
     std::cout << "destruct number " << number <<  "/" << denom << std::endl;
}
 
void Rational::set_number(int n) {
     number = n;
}
 
void Rational::set_denom(int d) {
     if (d != 0) {
         denom = d;
     }
     else {
         std::cout << "The denominator is equal to 0!\n";
     }
}
 
int Rational::get_number() const {
     return number;
}

int Rational::get_denom() const {
     return denom;
}
 
void Rational::read() {
     std::cout << "Enter the numerator: ";
     std::cin >> number;
 
     do {
         std::cout << "enter the denominator: ";
         std::cin >> denom;
     } while (denom == 0);
}
 
void Rational::print() const {
     std::cout << number << "/ " << denom << std::endl;
}
 
bool Rational::iszero() const {
     return number == 0;
}
 
Rational& Rational::operator+(const Rational &r) cоnst {
     return Rational(number*r.denom + r.number*denom, denom*r.denom);
}
 
Rational& Rational::operator-(const Rational &r) const {
     return Rational(number*r.denom - r.number*denom, denom*r.denom);
}
 
Rational& Rational::operator*(const Rational &r) const {
     return Rational(number*r.number, denom*r.denom);
}
 
Rational& Rational::operator/(const Rational &r) const {
     assert(r.number != 0);
     return Rational(number*r.denom, denom*r.number);
}
