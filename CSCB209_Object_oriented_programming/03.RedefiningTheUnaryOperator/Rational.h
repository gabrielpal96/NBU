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
     
     void setNumer(int);
     void setDenom(int);
     int getNumer() const;
     int getDenom() const;
     
     void read();
     void print() const;
     bool isZero() const;
};
 
int gcd(int, int);

#endif
