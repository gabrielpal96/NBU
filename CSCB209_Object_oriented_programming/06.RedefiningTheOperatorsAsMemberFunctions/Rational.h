#ifndef RATIONAL_H_
#define RATIONAL_H_
 
class Rational {
     friend bool operator!(const Rational &);
private:
     int number;
     int denom;
public:
     Rational(int = 0, int = 0);
     Rational(const Rational &a);
     ~Rational();
 
     void set_number(int);
     void set_denom(int);
     int get_number() const;
     int get_denom() const;
 
     void read();
     void print() const;
     bool iszero() const;
 
     Rational& operator+(const Rational &)const;
     Rational& operator-(const Rational &)const;
     Rational& operator*(const Rational &)const;
     Rational& operator/(const Rational &)const;
};
 
bool operator!(const Rational &);
int gcd(int, int);
 
#endif
