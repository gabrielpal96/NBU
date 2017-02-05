#include "TraceFun.h"
 
int main() {
     {
         TraceFun x("test123", cout);
         cout << "\n\tTesting trace objects:\n";
     }
 
     return 0;
}