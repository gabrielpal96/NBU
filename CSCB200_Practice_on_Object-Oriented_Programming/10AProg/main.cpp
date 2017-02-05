#include <iostream>
#include "AProg.h"
using namespace std;
 
int main() {
     cout << "\n\tTesting progressions:\n";
     AProg p(1., 1.);
     cout << "Progression: 1,2,3,...:\n";
     for (int i = 0; i<5; i++) {
         cout << "p[" << i << "]=" << p[i] << endl;
         cout << "s(" << i << ")=" << p(i) << endl;
     }
 
     return 0;
}