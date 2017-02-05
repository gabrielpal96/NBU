#include "Complex.h"
#include <iostream>
using namespace std;
 
Complex::Complex(double x, double y) :x(x), y(y) {}
 
Complex::~Complex() {
     //cout << x << "+" << y << "i was destroyed. \n";
}
 
void Complex::setX(double x) { this->x = x; }

double Complex::getX() const { return x; }
 
void Complex::setY(double y) { this->y = y; }
 
double Complex::getY() const { return y; }
 
void Complex::print() const {
     cout << x << "+" << y << "i";
}
 
void Complex::read() {
     cout << "Enter real part:";
     cin >> x;
     cout << "Enter img part: ";
     cin >> y;
}
 
Complex Complex::add(const Complex &r) const {
     return Complex(x + r.x, y + r.y);
}
 
Complex Complex::sub(const Complex &r) const {
     Complex tmp(x - r.y, y - r.y);
     return tmp;
}
 
Complex Complex::multi(const Complex &r) const {
     Complex tmp;
     tmp = Complex(x*r.y - y*r.x, x*r.y + y*r.x);
     return tmp;
}
 
Complex Complex::div(const Complex &r) const {
     Complex tmp;
     double d = r.x*r.x + r.y*r.y;
     tmp = multi(Complex(r.x, -r.y));
     return Complex(tmp.x / d, tmp.y / d);
}