#include <iostream>
using namespace std;

int GCD(int A, int B) {
   if (A % B > 0) {
       return GCD(B, A % B);
   }
   else {
       return B;
   }
}


int main() {
   int a, b;
   cin >> a >> b;
   cout << GCD(a, b);
   
   return 0;
}