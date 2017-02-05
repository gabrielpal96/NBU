#include "String.h"
 
int main() {
     cout << "\n\tTesting string operations:\n";
     String s = " string ", q = "this ";
     cout << s << endl;
     cout << q << endl;
     q += s;
     cout << q << endl;
     q = 77 + q;
     cout << q << endl;
 
     for (int i = 0; i < 5; i++) {
         String t = i + String(" ");
         s = s + i;
         cout << t + s << endl;
     }
 
     return 0;
}