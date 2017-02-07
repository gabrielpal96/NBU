#ifndef RATIONAL_H_
#define RATIONAL_H_
 
class Rational {
     friend bool operator!(const Rational &);
private:
     int numer;
     int denom;
public:
     Rational(int = 0, int = 0);
     Rational(const Rational &);
     ~Rational();
     
     void set_numer(int);
     void set_denom(int);
     int get_numer() const;
     int get_denom() const;
     
     void read();
     void print() const;
     bool iszero() const;
};
 
Rational operator+(const Rational &, const Rational &);
Rational operator-(const Rational &, const Rational &);
Rational operator*(const Rational &, const Rational &);
Rational operator/(const Rational &, const Rational &);
 
bool operator!(const Rational &);
int gcd(int, int);
 
#endif
