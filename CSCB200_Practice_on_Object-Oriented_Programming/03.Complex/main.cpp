#include <iostream>
#include "Complex.h"
using namespace std;
 
int main() {
     Complex a(1, 3), b(4, 3);
     cout << "a+b = ";
     (a.add(b)).print();
     cout << endl;

     cout << "a-b = ";
     (a.sub(b)).print();
     cout << endl;

     cout << "a*b = ";
     (a.multi(b)).print();
     cout << endl;

     cout << "a/b = ";
     (a.div(b)).print();
     cout << endl;
 
     return 0;
}