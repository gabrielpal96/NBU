#include "Ristream.h"
 
int main() {
     cout << "\n\tTesting random stream:\n";
     Ristream in(40, true);
     int n = 5;
     char x[100];
     int i;
     double d;
     unsigned u;
 
     for (int k = 0; k<n; k++) {
         if (k == n / 2) {
              in.set_length(20);
              in.set_space(false);
         }
         
         in >> i;
         cout << i << endl;
 
         in >> u;
         cout << u << endl;
 
         in >> d;
         cout << d << endl;
 
         in >> x;
         cout << x << endl;
     }
 
     return 0;
}