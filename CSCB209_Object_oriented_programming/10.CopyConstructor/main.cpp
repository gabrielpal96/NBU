#include "People.h"
 
int main() {
     People p;
     Student s("Ivan Ivanov", "9104064534" "F3434545", 5.46);
     cout << p << endl;
     cout << s << endl;
 
     Student s1(s);
     cout << s1 << endl;
 
     return 0;
}
