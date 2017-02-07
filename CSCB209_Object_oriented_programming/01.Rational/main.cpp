#include "Rational.h"
#include <iostream>
#include <windows.h>
#include <locale.h>
using namespace std;
 
int main() {
     setlocale(0, "Bulgarian");
     SetConsoleOutputCP(866);
     Rational p(1, 8);
     Rational q = Rational(2, 9);
 
     for (int i = 1; i <= 5; i++) {
         Rational r(i, i + 1);
         cout << "r[" << i << "]=";
         r.print();
     }
 
     cout << "p= "; p.print();
     cout << "q= "; q.print();
 
     Rational * pnt = new Rational(3, 9);
     pnt->print();
     delete pnt;
     
     {
         Rational z;
         cout << "z="; z.print();
         Rational w(8, 64);
         cout << "w="; w.print();
     }
 
     return 0;
}
