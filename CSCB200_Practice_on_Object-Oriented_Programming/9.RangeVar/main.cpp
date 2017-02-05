#include "CountVar.h"
#include "RangeVar.h"
 
int main() {
     {
         CountVar vmem(5., "vmem", cout);
         cout << "\n\tTesting trace objects:\n";
 
         RangeVar rvar(77.7, "rvar", cout);
         for (int i = 0; i < 5; i++) {
              vmem = vmem + i*0.2;
              rvar = rvar + vmem*(5. - rand() % 10);
         }
     }
 
     return 0;
}