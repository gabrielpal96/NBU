#include "Rational.h"
#include <iostream>
using namespace std;
 
int main() { 
     Rational p(1, 8);
     Rational q = Rational(2, 9);
     Rational r(p + q);
 
     cout << "p = "; p.print();
     cout << "q = "; q.print();
     cout << "r = "; r.print();
 
     Rational s;
     s = p*q - r / q + q*q;
     cout << " p*q - r / q + q*q = "; s.print();
 
     return 0;
}
