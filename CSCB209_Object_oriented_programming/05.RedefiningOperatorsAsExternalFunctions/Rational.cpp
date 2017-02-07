#include "Rational.h"
#include <iostream>
#include <cassert>
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
        cout << "The denominator is equal to 0!\n";
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
 
Rational::Rational(const Rational & other) {
     numer = other.numer;
     denom = other.denom;
}
 
Rational::~Rational() {
     cout << "destruct number" << numer << "/" << denom << endl;
}
 
void Rational::set_numer(int n) { 
    numer = n; 
}

void Rational::set_denom(int d) {
 
     if (d != 0) { 
        denom = d; 
     }
     else { 
        cout << "The denominator is equal to 0!\n"; 
     }
}

int Rational::get_numer() const { 
    return numer; 
}
 
int Rational::get_denom() const {
    return denom; 
}
 
void Rational::read() {
     cout << "Enter the numerator:";
     cin >> numer;
     do {
 
         cout << "Enter the denominator:";
         cin >> denom;
     } while (denom == 0);
}
 
void Rational::print() const {
     cout << numer << "/" << denom << endl;
}
 
bool Rational::iszero() const{ 
    return numer == 0; 
}
 
Rational operator+(const Rational &r1, const Rational &r2) {
     return Rational(r1.get_numer()*r2.get_denom() + r2.get_numer()*r1.get_denom(),
         r1.get_denom()*r2.get_denom());
}
 
Rational operator-(const Rational & r1, const Rational & r2) {
     return Rational(r1.get_numer()*r2.get_denom() - r2.get_numer()*r1.get_denom(),
         r1.get_denom()*r2.get_denom());
}
 
Rational operator*(const Rational & r1, const Rational & r2) {
     return Rational(r1.get_numer()*r2.get_numer(),
         r1.get_denom()*r2.get_denom());
}
 
Rational operator/(const Rational & r1, const Rational & r2) {
     assert(r2.get_numer() != 0);
     return Rational(r1.get_numer()*r2.get_denom(),
         r1.get_denom()*r2.get_numer());
}
