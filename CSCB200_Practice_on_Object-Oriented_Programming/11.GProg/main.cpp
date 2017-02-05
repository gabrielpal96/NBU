#include <iostream>
#include "GProg.h"
using namespace std;
 
int main() {
     GProg g(1., 2.);
     cout << "Progression: 1,2,4,8,...:\n";
     for (int i = 0; i<5; i++) {
         cout << "g[" << i << "]=" << g[i] << endl;
         cout << "s(" << i << ")=" << g(i) << endl;
     }
 
     return 0;
}